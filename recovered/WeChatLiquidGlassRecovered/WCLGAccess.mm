#import "WCLGAccess.h"
#import "WCLGConfig.h"
#import "WCLGConstants.h"
#import <UIKit/UIKit.h>
#import <objc/message.h>
#import <objc/runtime.h>

static BOOL gWCLGServerHardBlocked = NO;
static NSTimeInterval gWCLGServerExpiresAt = 0;
static NSTimeInterval gWCLGServerVerifiedAt = 0;
static NSArray<NSString *> *gWCLGServerFeatures;
static NSArray<NSString *> *gWCLGServerDeniedFeatures;
static BOOL gWCLGServerAllowed = NO;

static id WCLGCall(id target, NSString *selectorName) {
    SEL selector = NSSelectorFromString(selectorName);
    if (!target || ![target respondsToSelector:selector]) {
        return nil;
    }
    return ((id (*)(id, SEL))objc_msgSend)(target, selector);
}

static NSString *WCLGStringValue(id object, NSArray<NSString *> *keysOrSelectors) {
    for (NSString *name in keysOrSelectors) {
        id value = nil;
        @try {
            SEL selector = NSSelectorFromString(name);
            if ([object respondsToSelector:selector]) {
                value = ((id (*)(id, SEL))objc_msgSend)(object, selector);
            } else {
                Ivar ivar = class_getInstanceVariable(object_getClass(object), name.UTF8String);
                if (ivar) {
                    value = object_getIvar(object, ivar);
                } else if ([object respondsToSelector:@selector(valueForKey:)]) {
                    value = [object valueForKey:name];
                }
            }
        } @catch (__unused NSException *exception) {
            value = nil;
        }
        if ([value isKindOfClass:NSString.class] && [(NSString *)value length] > 0) {
            return value;
        }
    }
    return nil;
}

static id WCLGWeChatService(NSString *className) {
    Class centerClass = NSClassFromString(@"MMServiceCenter");
    id center = WCLGCall(centerClass, @"defaultCenter") ?: WCLGCall(centerClass, @"sharedInstance");
    if (!center) {
        return nil;
    }
    Class serviceClass = NSClassFromString(className);
    for (NSString *selectorName in @[@"getService:", @"getServiceByName:", @"serviceForName:"]) {
        SEL selector = NSSelectorFromString(selectorName);
        if ([center respondsToSelector:selector]) {
            id (*send)(id, SEL, id) = (id (*)(id, SEL, id))objc_msgSend;
            id serviceKey = serviceClass ? (id)serviceClass : (id)className;
            id service = send(center, selector, serviceKey);
            if (service) {
                return service;
            }
        }
    }
    return nil;
}

static id WCLGSelfContact(void) {
    id contactManager = WCLGWeChatService(@"CContactMgr") ?: WCLGWeChatService(@"MMContactMgr") ?: WCLGWeChatService(@"ContactMgr");
    return WCLGCall(contactManager, @"getSelfContact");
}

static BOOL WCLGLooksLikeUserWXID(NSString *value) {
    if (![value isKindOfClass:NSString.class]) {
        return NO;
    }
    NSString *lower = value.lowercaseString;
    return [lower hasPrefix:@"wxid_"] && ![lower containsString:@"@chatroom"] && ![lower hasPrefix:@"gh_"];
}

NSString *WCLGAccessCurrentUserName(void) {
    id contact = WCLGSelfContact();
    NSString *name = WCLGStringValue(contact, @[
        @"m_nsUsrName",
        @"m_nsUserName",
        @"userName",
        @"username",
        @"m_nsUsername",
        @"usrName",
        @"getUsrName",
        @"getUserName",
    ]);
    return WCLGLooksLikeUserWXID(name) ? name : nil;
}

NSString *WCLGAccessCurrentNickName(void) {
    id contact = WCLGSelfContact();
    NSString *nickname = WCLGStringValue(contact, @[
        @"m_nsNickName",
        @"m_nsNickname",
        @"m_nsDisplayName",
        @"m_nsRemarkName",
        @"m_nsRemark",
        @"nickName",
        @"displayName",
        @"remarkName",
        @"remark",
        @"getNickName",
        @"getDisplayName",
        @"getRemarkName",
        @"getRemark",
    ]);
    return nickname;
}

static BOOL WCLGContactExists(NSString *userName) {
    id contactManager = WCLGWeChatService(@"CContactMgr") ?: WCLGWeChatService(@"MMContactMgr") ?: WCLGWeChatService(@"ContactMgr");
    for (NSString *selectorName in @[
        @"getContactByName:",
        @"getContact:",
        @"getContactByUserName:",
        @"getContactByUsrName:",
        @"getContactWithUserName:",
        @"getContactFromDB:",
        @"getContactByNameFromDB:",
    ]) {
        SEL selector = NSSelectorFromString(selectorName);
        if ([contactManager respondsToSelector:selector]) {
            id contact = ((id (*)(id, SEL, id))objc_msgSend)(contactManager, selector, userName);
            if (contact) {
                return YES;
            }
        }
    }
    return NO;
}

static BOOL WCLGChatRoomExists(NSString *chatRoomName) {
    NSArray<NSString *> *serviceNames = @[
        @"CGroupMgr",
        @"CGroupStorage",
        @"MMGroupMgr",
        @"MMGroupStorage",
        @"ChatRoomMgr",
        @"ChatRoomStorage",
        @"MMChatRoomMgr",
        @"MMChatRoomStorage",
        @"ChatRoomInfoStorage",
        @"CChatRoomMgr",
        @"CChatRoomStorage",
        @"GroupStorage",
        @"ChatRoomService",
        @"MMRoomService",
    ];
    NSArray<NSString *> *selectors = @[
        @"getChatRoomByName:",
        @"getChatRoom:",
        @"getChatRoomInfo:",
        @"getChatRoomInfoByName:",
        @"getChatRoomData:",
        @"getGroupByChatRoomName:",
        @"getGroupInfo:",
        @"getMemberListByChatRoomName:",
        @"getChatRoomMemberList:",
        @"memberListForChatRoom:",
        @"getChatRoomMembers:",
    ];
    for (NSString *serviceName in serviceNames) {
        id service = WCLGWeChatService(serviceName);
        for (NSString *selectorName in selectors) {
            SEL selector = NSSelectorFromString(selectorName);
            if ([service respondsToSelector:selector]) {
                id result = ((id (*)(id, SEL, id))objc_msgSend)(service, selector, chatRoomName);
                if (result) {
                    return YES;
                }
            }
        }
    }
    return WCLGContactExists(chatRoomName);
}

void WCLGAccessInvalidateCache(void) {
    gWCLGServerFeatures = nil;
    gWCLGServerDeniedFeatures = nil;
    gWCLGServerExpiresAt = 0;
    gWCLGServerVerifiedAt = 0;
    gWCLGServerAllowed = NO;
    gWCLGServerHardBlocked = NO;
}

void WCLGAccessRefreshLocalAuthorization(void) {
    WCLGConfig *config = WCLGConfig.sharedConfig;
    NSString *wxid = WCLGAccessCurrentUserName();
    NSString *nickname = WCLGAccessCurrentNickName();
    BOOL officialOK = WCLGContactExists(WCLGRequiredOfficialAccountUserName);
    BOOL groupOK = WCLGChatRoomExists(WCLGRequiredChatRoom);
    NSTimeInterval now = NSDate.date.timeIntervalSince1970;

    if (wxid.length) {
        [config setObject:wxid forKey:WCLGKeyLocalWXID];
    }
    if (nickname.length) {
        [config setObject:nickname forKey:WCLGKeyLocalNickname];
    }
    [config setBool:officialOK forKey:WCLGKeyLocalOfficialOK];
    [config setBool:groupOK forKey:WCLGKeyLocalGroupOK];
    [config setDouble:now forKey:WCLGKeyLocalAuthScannedAt];
    [config flush];
}

static NSString *WCLGDeviceIdentifier(void) {
    WCLGConfig *config = WCLGConfig.sharedConfig;
    NSString *deviceID = [config objectForKey:WCLGKeyServerAuthDeviceID];
    if (![deviceID isKindOfClass:NSString.class] || deviceID.length == 0) {
        deviceID = UIDevice.currentDevice.identifierForVendor.UUIDString ?: NSUUID.UUID.UUIDString;
        [config setObject:deviceID forKey:WCLGKeyServerAuthDeviceID];
    }
    return deviceID;
}

static BOOL WCLGServerCacheValid(void) {
    NSTimeInterval now = NSDate.date.timeIntervalSince1970;
    return gWCLGServerExpiresAt > now + 30.0 && now - gWCLGServerVerifiedAt < 259200.0;
}

static void WCLGLoadServerCache(void) {
    WCLGConfig *config = WCLGConfig.sharedConfig;
    gWCLGServerFeatures = [config objectForKey:WCLGKeyServerAuthFeatures];
    gWCLGServerDeniedFeatures = [config objectForKey:WCLGKeyServerAuthDeniedFeatures];
    gWCLGServerExpiresAt = [config doubleForKey:WCLGKeyServerAuthExpiresAt];
    gWCLGServerVerifiedAt = [config doubleForKey:WCLGKeyServerAuthVerifiedAt];
    gWCLGServerAllowed = [config boolForKey:WCLGKeyServerAuthAllowed defaultValue:NO];
    gWCLGServerHardBlocked = [config boolForKey:WCLGKeyServerAuthHardBlocked defaultValue:NO];
}

BOOL WCLGAccessCookieForFeature(NSString *feature) {
    if (feature.length == 0) {
        return NO;
    }

    WCLGLoadServerCache();
    if (gWCLGServerHardBlocked) {
        return NO;
    }

    if (WCLGServerCacheValid()) {
        if ([gWCLGServerDeniedFeatures containsObject:feature]) {
            return NO;
        }
        if (gWCLGServerAllowed && ([gWCLGServerFeatures containsObject:feature] || gWCLGServerFeatures.count == 0)) {
            return YES;
        }
    }

    BOOL localGroupOK = [WCLGConfig.sharedConfig boolForKey:WCLGKeyLocalGroupOK defaultValue:NO];
    if (!localGroupOK) {
        WCLGAccessRefreshLocalAuthorization();
        localGroupOK = [WCLGConfig.sharedConfig boolForKey:WCLGKeyLocalGroupOK defaultValue:NO];
    }

    return localGroupOK && [WCLGAllServerFeatures() containsObject:feature];
}

BOOL WCLGAccessFastCookieForFeature(NSString *feature) {
    WCLGLoadServerCache();
    if (gWCLGServerHardBlocked || [gWCLGServerDeniedFeatures containsObject:feature]) {
        return NO;
    }
    if (WCLGServerCacheValid() && gWCLGServerAllowed) {
        return gWCLGServerFeatures.count == 0 || [gWCLGServerFeatures containsObject:feature];
    }
    return [WCLGConfig.sharedConfig boolForKey:WCLGKeyLocalGroupOK defaultValue:NO];
}

BOOL WCLGAccessOfficialAccountSatisfied(void) {
    return [WCLGConfig.sharedConfig boolForKey:WCLGKeyLocalOfficialOK defaultValue:NO];
}

NSString *WCLGAccessRequiredOfficialAccountName(void) {
    return WCLGRequiredOfficialAccountName;
}

NSString *WCLGAccessRequiredOfficialAccountUserName(void) {
    return WCLGRequiredOfficialAccountUserName;
}

void WCLGAccessRequestServerSync(void) {
    NSURL *url = [NSURL URLWithString:WCLGServerStatusURL];
    if (!url) {
        return;
    }

    WCLGConfig *config = WCLGConfig.sharedConfig;
    NSString *wxid = [config objectForKey:WCLGKeyLocalWXID] ?: WCLGAccessCurrentUserName() ?: @"";
    NSString *nickname = [config objectForKey:WCLGKeyLocalNickname] ?: WCLGAccessCurrentNickName() ?: @"";
    NSDictionary *info = NSBundle.mainBundle.infoDictionary ?: @{};
    NSDictionary *body = @{
        @"features": WCLGAllServerFeatures(),
        @"device_id": WCLGDeviceIdentifier(),
        @"plugin_version": @"2.8.221",
        @"plugin_build": @"Version 2.8.2-1",
        @"wechat_version": info[@"CFBundleShortVersionString"] ?: @"",
        @"bundle_id": info[@"CFBundleIdentifier"] ?: @"",
        @"system_name": @"iOS",
        @"system_version": UIDevice.currentDevice.systemVersion ?: @"",
        @"device_model": UIDevice.currentDevice.model ?: @"",
        @"channel": @"release",
        @"arch": @"arm64",
        @"wxid": wxid,
        @"wxid_source": wxid.length ? @"self_contact" : @"pending",
        @"wxid_updated_at": @([config doubleForKey:WCLGKeyLocalAuthScannedAt]),
        @"nickname": nickname,
        @"nickname_source": nickname.length ? @"self_contact" : @"pending",
        @"nickname_updated_at": @([config doubleForKey:WCLGKeyLocalAuthScannedAt]),
        @"local_auth_scanned": @([config doubleForKey:WCLGKeyLocalAuthScannedAt] > 0),
        @"local_official_ok": @([config boolForKey:WCLGKeyLocalOfficialOK defaultValue:NO]),
        @"local_group_ok": @([config boolForKey:WCLGKeyLocalGroupOK defaultValue:NO]),
        @"nonce": NSUUID.UUID.UUIDString,
    };

    NSData *payload = [NSJSONSerialization dataWithJSONObject:body options:0 error:nil];
    if (!payload) {
        return;
    }

    NSMutableURLRequest *request = [NSMutableURLRequest requestWithURL:url cachePolicy:NSURLRequestReloadIgnoringCacheData timeoutInterval:10.0];
    request.HTTPMethod = @"POST";
    request.HTTPBody = payload;
    [request setValue:@"application/json" forHTTPHeaderField:@"Content-Type"];
    [request setValue:@"application/json" forHTTPHeaderField:@"Accept"];

    NSURLSessionDataTask *task = [NSURLSession.sharedSession dataTaskWithRequest:request completionHandler:^(NSData *data, NSURLResponse *response, NSError *error) {
        if (error || data.length == 0) {
            [config setObject:@"network_error" forKey:WCLGKeyServerAuthLastCode];
            [config setObject:error.localizedDescription ?: @"" forKey:WCLGKeyServerAuthLastMessage];
            [config flush];
            return;
        }

        NSDictionary *json = [NSJSONSerialization JSONObjectWithData:data options:0 error:nil];
        if (![json isKindOfClass:NSDictionary.class]) {
            return;
        }

        NSTimeInterval now = NSDate.date.timeIntervalSince1970;
        [config setObject:json[@"token"] forKey:WCLGKeyServerAuthToken];
        [config setObject:json[@"features"] ?: @[] forKey:WCLGKeyServerAuthFeatures];
        [config setObject:json[@"denied_features"] ?: @[] forKey:WCLGKeyServerAuthDeniedFeatures];
        [config setDouble:[json[@"expires_at"] doubleValue] forKey:WCLGKeyServerAuthExpiresAt];
        [config setDouble:now forKey:WCLGKeyServerAuthVerifiedAt];
        [config setBool:[json[@"allowed"] boolValue] forKey:WCLGKeyServerAuthAllowed];
        [config setBool:[json[@"blocked"] boolValue] forKey:WCLGKeyServerAuthHardBlocked];
        [config setObject:json[@"code"] forKey:WCLGKeyServerAuthLastCode];
        [config setObject:json[@"message"] forKey:WCLGKeyServerAuthLastMessage];
        [config flush];
        WCLGLoadServerCache();
    }];
    [task resume];
}

void WCLGAccessStartServerSync(void) {
    dispatch_async(dispatch_get_main_queue(), ^{
        WCLGAccessRefreshLocalAuthorization();
        WCLGAccessRequestServerSync();
    });
}

void WCLGAccessOpenRequiredOfficialAccount(void) {
    NSString *encoded = [WCLGRequiredOfficialAccountUserName stringByAddingPercentEncodingWithAllowedCharacters:NSCharacterSet.URLQueryAllowedCharacterSet];
    NSURL *url = [NSURL URLWithString:[NSString stringWithFormat:@"weixin://dl/profile?username=%@", encoded ?: WCLGRequiredOfficialAccountUserName]];
    if (url) {
        [UIApplication.sharedApplication openURL:url options:@{} completionHandler:nil];
    }
}
