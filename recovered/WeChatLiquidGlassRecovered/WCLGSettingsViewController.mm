#import "WCLGSettingsViewController.h"
#import "WCLGAccess.h"
#import "WCLGConfig.h"
#import "WCLGConstants.h"
#import "WCLGRuntime.h"

typedef NS_ENUM(NSInteger, WCLGSettingsRowKind) {
    WCLGSettingsRowKindSwitch,
    WCLGSettingsRowKindValue,
    WCLGSettingsRowKindAction,
};

@interface WCLGSettingsRow : NSObject
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *detail;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *feature;
@property (nonatomic, assign) WCLGSettingsRowKind kind;
@property (nonatomic, copy) void (^action)(void);
@end

@implementation WCLGSettingsRow
@end

@interface WCLGSettingsSection : NSObject
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSArray<WCLGSettingsRow *> *rows;
@end

@implementation WCLGSettingsSection
@end

@interface WCLGSettingsViewController ()
@property (nonatomic, assign) NSInteger panel;
@property (nonatomic, copy) NSArray<WCLGSettingsSection *> *sections;
@end

@implementation WCLGSettingsViewController

- (instancetype)init {
    return [self initWithPanel:0];
}

- (instancetype)initWithPanel:(NSInteger)panel {
    self = [super initWithStyle:UITableViewStyleInsetGrouped];
    if (self) {
        _panel = panel;
        self.title = @"WeChatLiquidGlass";
    }
    return self;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    self.navigationItem.leftBarButtonItem = [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemDone target:self action:@selector(dismissSettings)];
    self.navigationItem.rightBarButtonItem = [[UIBarButtonItem alloc] initWithTitle:@"同步" style:UIBarButtonItemStylePlain target:self action:@selector(syncTapped)];
    [self reloadModel];
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    [self reloadModel];
}

- (void)dismissSettings {
    [self dismissViewControllerAnimated:YES completion:nil];
}

- (UIColor *)authorizationCellBackgroundColorForAllowed:(BOOL)allowed {
    if (allowed) {
        return [UIColor colorWithRed:0.12 green:0.55 blue:0.32 alpha:0.16];
    }
    return [UIColor colorWithRed:0.78 green:0.20 blue:0.18 alpha:0.14];
}

- (WCLGSettingsRow *)switchRow:(NSString *)title detail:(NSString *)detail key:(NSString *)key feature:(NSString *)feature {
    WCLGSettingsRow *row = [WCLGSettingsRow new];
    row.title = title;
    row.detail = detail ?: @"";
    row.key = key;
    row.feature = feature;
    row.kind = WCLGSettingsRowKindSwitch;
    return row;
}

- (WCLGSettingsRow *)valueRow:(NSString *)title detail:(NSString *)detail {
    WCLGSettingsRow *row = [WCLGSettingsRow new];
    row.title = title;
    row.detail = detail ?: @"";
    row.kind = WCLGSettingsRowKindValue;
    return row;
}

- (WCLGSettingsRow *)actionRow:(NSString *)title detail:(NSString *)detail action:(void (^)(void))action {
    WCLGSettingsRow *row = [WCLGSettingsRow new];
    row.title = title;
    row.detail = detail ?: @"";
    row.kind = WCLGSettingsRowKindAction;
    row.action = action;
    return row;
}

- (WCLGSettingsSection *)section:(NSString *)title rows:(NSArray<WCLGSettingsRow *> *)rows {
    WCLGSettingsSection *section = [WCLGSettingsSection new];
    section.title = title;
    section.rows = rows;
    return section;
}

- (void)reloadModel {
    WCLGConfig *config = WCLGConfig.sharedConfig;
    NSString *wxid = [config objectForKey:WCLGKeyLocalWXID] ?: @"未识别";
    NSString *nickname = [config objectForKey:WCLGKeyLocalNickname] ?: @"";
    BOOL localGroupOK = [config boolForKey:WCLGKeyLocalGroupOK defaultValue:NO];
    BOOL localOfficialOK = [config boolForKey:WCLGKeyLocalOfficialOK defaultValue:NO];
    BOOL serverAllowed = [config boolForKey:WCLGKeyServerAuthAllowed defaultValue:NO];
    BOOL hardBlocked = [config boolForKey:WCLGKeyServerAuthHardBlocked defaultValue:NO];
    BOOL developerPreview = [config boolForKey:WCLGKeyLocalDeveloperPreviewMode defaultValue:YES];
    NSString *serverCode = [config objectForKey:WCLGKeyServerAuthLastCode] ?: @"";
    NSString *serverMessage = [config objectForKey:WCLGKeyServerAuthLastMessage] ?: @"";

    __weak typeof(self) weakSelf = self;
    self.sections = @[
        [self section:@"授权状态" rows:@[
            [self valueRow:@"微信 ID" detail:wxid],
            [self valueRow:@"昵称" detail:nickname.length ? nickname : @"未读取"],
            [self valueRow:@"本地群校验" detail:localGroupOK ? @"已满足" : @"未满足"],
            [self valueRow:@"公众号校验" detail:localOfficialOK ? @"已满足" : @"未满足"],
            [self valueRow:@"服务端状态" detail:hardBlocked ? @"已封禁" : (serverAllowed ? @"允许" : @"未允许/未同步")],
            [self valueRow:@"开发预览" detail:developerPreview ? @"开关可编辑，授权不伪造" : @"关闭"],
            [self valueRow:@"服务端消息" detail:serverMessage.length ? [NSString stringWithFormat:@"%@ %@", serverCode, serverMessage] : @"无"],
        ]],
        [self section:@"基础" rows:@[
            [self switchRow:@"Liquid Glass 总开关" detail:@"控制恢复版的基础效果入口" key:WCLGKeyLiquidGlassEnabled feature:WCLGFeatureLiquidGlass],
            [self switchRow:@"开发预览模式" detail:@"只开放开关编辑，不改变授权判断" key:WCLGKeyLocalDeveloperPreviewMode feature:nil],
            [self switchRow:@"兼容模式" detail:@"保守处理系统/微信视图层级" key:WCLGKeyCompatEnabled feature:nil],
            [self switchRow:@"隐藏底部标题" detail:@"TabBar 图标下方标题隐藏" key:WCLGKeyHideTitles feature:nil],
            [self switchRow:@"隐藏语音转文字按钮" detail:@"聊天输入区清理项" key:WCLGKeyHideVoiceTranscribeIcon feature:nil],
        ]],
        [self section:@"聊天" rows:@[
            [self switchRow:@"聊天底部玻璃" detail:@"输入框/工具栏区域" key:WCLGKeyChatBottomGlass feature:WCLGFeatureLiquidGlass],
            [self switchRow:@"聊天底部渐变" detail:@"输入栏玻璃底色渐变" key:WCLGKeyChatBottomGradientBackground feature:WCLGFeatureLiquidGlass],
            [self switchRow:@"聊天气泡玻璃" detail:@"普通聊天气泡" key:WCLGKeyChatBubbleGlass feature:WCLGFeatureChatBubble],
            [self switchRow:@"聊天气泡流光" detail:@"气泡玻璃渐变层" key:WCLGKeyChatBubbleFlowGradient feature:WCLGFeatureFlowBubble],
            [self switchRow:@"聊天气泡描边" detail:@"气泡玻璃细描边" key:WCLGKeyChatBubbleFlowBorder feature:WCLGFeatureFlowBubble],
            [self switchRow:@"红包/支付卡片" detail:@"富媒体支付卡片" key:WCLGKeyRichCardPaymentBubble feature:WCLGFeaturePaymentCard],
            [self switchRow:@"VoIP 气泡" detail:@"通话卡片样式" key:WCLGKeyVoIPBubbleGlass feature:WCLGFeatureVoIPBubble],
            [self switchRow:@"长按菜单玻璃" detail:@"聊天长按菜单" key:WCLGKeyLongPressMenuGlass feature:WCLGFeatureLongPressMenu],
            [self switchRow:@"原生资料标题" detail:@"聊天顶部资料标题" key:WCLGKeyChatNativeProfileTitle feature:WCLGFeatureChatNativeProfileTitle],
        ]],
        [self section:@"主页和 TabBar" rows:@[
            [self switchRow:@"主页搜索按钮" detail:@"主页右上搜索入口" key:WCLGKeyHomeSearchButton feature:nil],
            [self switchRow:@"顶部标题胶囊" detail:@"聊天页标题区域" key:WCLGKeyChatTitleCapsule feature:nil],
            [self switchRow:@"原生底栏背景透明" detail:@"由恢复版玻璃宿主接管背景" key:WCLGKeyTabBarExtraClear feature:WCLGFeatureLiquidGlass],
            [self switchRow:@"TabBar 右侧搜索胶囊" detail:@"底部栏搜索入口" key:WCLGKeyTabBarRightSearch feature:WCLGFeatureTabBarSearchCapsule],
            [self switchRow:@"搜索 TabBar" detail:@"底部栏搜索/模式切换覆盖层" key:WCLGKeySearchTabBar feature:WCLGFeatureSearchTabBar],
            [self switchRow:@"禁用下拉小程序" detail:@"主页下拉清理" key:WCLGKeyDisablePullDownMiniProgram feature:nil],
            [self switchRow:@"加号菜单小程序入口" detail:@"聊天加号菜单条目" key:WCLGKeyPlusMenuMiniProgramEntry feature:nil],
        ]],
        [self section:@"恢复操作" rows:@[
            [self actionRow:@"重新扫描本地授权" detail:@"读取当前微信号、群、公众号状态" action:^{
                WCLGAccessRefreshLocalAuthorization();
                [weakSelf reloadModel];
            }],
            [self actionRow:@"同步服务端授权" detail:@"请求已恢复出的授权接口" action:^{
                WCLGAccessRequestServerSync();
                dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(1.2 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
                    [weakSelf reloadModel];
                });
            }],
            [self actionRow:@"打开要求公众号" detail:WCLGAccessRequiredOfficialAccountUserName() action:^{
                WCLGAccessOpenRequiredOfficialAccount();
            }],
            [self actionRow:@"打开发布页" detail:WCLGReleasePageURL action:^{
                NSURL *url = [NSURL URLWithString:WCLGReleasePageURL];
                if (url) {
                    [UIApplication.sharedApplication openURL:url options:@{} completionHandler:nil];
                }
            }],
        ]],
    ];
    [self.tableView reloadData];
}

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
    return self.sections.count;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return self.sections[section].rows.count;
}

- (NSString *)tableView:(UITableView *)tableView titleForHeaderInSection:(NSInteger)section {
    return self.sections[section].title;
}

- (NSString *)tableView:(UITableView *)tableView titleForFooterInSection:(NSInteger)section {
    if (section == 0) {
        return @"第一版恢复页：开发预览只开放开关编辑，授权字段只显示，功能开关写入旧插件兼容 key。";
    }
    return nil;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    WCLGSettingsRow *row = self.sections[indexPath.section].rows[indexPath.row];
    NSString *identifier = row.kind == WCLGSettingsRowKindSwitch ? @"SwitchCell" : @"ValueCell";
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:identifier];
    if (!cell) {
        UITableViewCellStyle style = row.kind == WCLGSettingsRowKindSwitch ? UITableViewCellStyleSubtitle : UITableViewCellStyleValue1;
        cell = [[UITableViewCell alloc] initWithStyle:style reuseIdentifier:identifier];
    }

    cell.textLabel.text = row.title;
    cell.detailTextLabel.text = row.detail;
    cell.selectionStyle = row.kind == WCLGSettingsRowKindAction ? UITableViewCellSelectionStyleDefault : UITableViewCellSelectionStyleNone;
    cell.accessoryView = nil;
    cell.accessoryType = row.kind == WCLGSettingsRowKindAction ? UITableViewCellAccessoryDisclosureIndicator : UITableViewCellAccessoryNone;
    cell.textLabel.enabled = YES;
    cell.detailTextLabel.enabled = YES;
    cell.backgroundColor = nil;

    if (indexPath.section == 0 && indexPath.row >= 2 && indexPath.row <= 4) {
        BOOL ok = [row.detail isEqualToString:@"已满足"] || [row.detail isEqualToString:@"允许"];
        cell.backgroundColor = [self authorizationCellBackgroundColorForAllowed:ok];
    }

    if (row.kind == WCLGSettingsRowKindSwitch) {
        BOOL developerPreview = [WCLGConfig.sharedConfig boolForKey:WCLGKeyLocalDeveloperPreviewMode defaultValue:YES];
        BOOL authorized = row.feature.length == 0 || WCLGAccessFastCookieForFeature(row.feature);
        BOOL allowed = authorized || developerPreview;
        UISwitch *switchView = [[UISwitch alloc] initWithFrame:CGRectZero];
        switchView.on = [WCLGConfig.sharedConfig boolForKey:row.key defaultValue:NO];
        switchView.enabled = allowed;
        switchView.tag = (indexPath.section << 16) | indexPath.row;
        [switchView addTarget:self action:@selector(toggleSwitch:) forControlEvents:UIControlEventValueChanged];
        cell.accessoryView = switchView;
        cell.textLabel.enabled = allowed;
        cell.detailTextLabel.enabled = allowed;
        if (!authorized && developerPreview && row.detail.length > 0) {
            cell.detailTextLabel.text = [row.detail stringByAppendingString:@" · 开发预览"];
        } else if (!allowed && row.detail.length > 0) {
            cell.detailTextLabel.text = [row.detail stringByAppendingString:@" · 未授权"];
        }
    }

    return cell;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    [tableView deselectRowAtIndexPath:indexPath animated:YES];
    WCLGSettingsRow *row = self.sections[indexPath.section].rows[indexPath.row];
    if (row.kind == WCLGSettingsRowKindAction && row.action) {
        row.action();
    }
}

- (void)toggleSwitch:(UISwitch *)sender {
    NSInteger section = sender.tag >> 16;
    NSInteger rowIndex = sender.tag & 0xffff;
    if (section >= self.sections.count || rowIndex >= self.sections[section].rows.count) {
        return;
    }
    WCLGSettingsRow *row = self.sections[section].rows[rowIndex];
    if (row.key.length == 0) {
        return;
    }
    [WCLGConfig.sharedConfig setBool:sender.on forKey:row.key];
    [WCLGConfig.sharedConfig flush];
    WCLGRefreshVisibleWindows();
}

- (void)syncTapped {
    WCLGAccessRefreshLocalAuthorization();
    WCLGAccessRequestServerSync();
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(1.2 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        [self reloadModel];
    });
}

@end
