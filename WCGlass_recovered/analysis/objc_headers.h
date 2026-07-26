[Classes source]
@interface WCLGChatPinnedHitCatcher : UIView
{
}
- (id) hitTest:withEvent:
@end
@interface WCLGSMSBackContentView : UIView
{
}
- (id) initWithFrame:
- (void) updateChevron:count:
- (void) layoutSubviews
- (id) chevronView
- (void) setChevronView:
- (id) badgeView
- (void) setBadgeView:
- (id) countLabel
- (void) setCountLabel:
- (id) countText
- (void) setCountText:
- (void) .cxx_destruct
@end
@interface WCLGVoiceHoldRecognizer : UIGestureRecognizer
{
}
- (void) wclgNoop
- (void) wclgCancelHoldBlock
- (id) wclgResolvedToolView
- (void) wclgMountWaveViewOnToolView:
- (void) wclgMountHintAboveInputWithAnchor:toolView:
- (void) wclgTeardownWaveView
- (void) wclgUpdateWaveStatusForTouches:
- (void) wclgBeginRecording
- (void) touchesBegan:withEvent:
- (void) touchesMoved:withEvent:
- (void) touchesEnded:withEvent:
- (void) touchesCancelled:withEvent:
- (void) reset
- (id) toolView
- (void) setToolView:
- (bool) recording
- (void) setRecording:
- (id) pendingTouches
- (void) setPendingTouches:
- (id) pendingEvent
- (void) setPendingEvent:
- (id) holdBlock
- (void) setHoldBlock:
- (id) waveView
- (void) setWaveView:
- (id) dimmedTextView
- (void) setDimmedTextView:
- (id) savedTextColor
- (void) setSavedTextColor:
- (id) savedTintColor
- (void) setSavedTintColor:
- (id) hintFloatLabel
- (void) setHintFloatLabel:
- (id) waveBaseColor
- (void) setWaveBaseColor:
- (bool) waveLockColor
- (void) setWaveLockColor:
- (unknown) startLocationInWindow
- (void) setStartLocationInWindow:
- (void) .cxx_destruct
@end
@interface WCLGMsgMergeCellHotCache : NSObject
{
}
- (void) .cxx_destruct
@end
@interface WCLGAvatarPickerHandler : NSObject
{
}
- (void) imagePickerController:didFinishPickingMediaWithInfo:
- (void) imagePickerControllerDidCancel:
- (id) wxid
- (void) setWxid:
- (id) onDone
- (void) setOnDone:
- (id) retainSelf
- (void) setRetainSelf:
- (void) .cxx_destruct
@end
@interface WCLGImageLibraryPickerViewController : UIViewController
{
}
- (id) initWithCategory:title:onPick:
- (void) viewDidLoad
- (void) closeTapped
- (long long) collectionView:numberOfItemsInSection:
- (unknown) collectionView:layout:sizeForItemAtIndexPath:
- (id) collectionView:cellForItemAtIndexPath:
- (void) collectionView:didSelectItemAtIndexPath:
- (id) category
- (void) setCategory:
- (id) onPick
- (void) setOnPick:
- (id) items
- (void) setItems:
- (id) collectionView
- (void) setCollectionView:
- (id) emptyLabel
- (void) setEmptyLabel:
- (void) .cxx_destruct
- (long long) collectionView:numberOfItemsInSection:
- (long long) collectionView:numberOfItemsInSection:
- (id) collectionView:cellForItemAtIndexPath:
- (id) collectionView:cellForItemAtIndexPath:
@end
@interface WCLGChatAvatarMenuDelegate : NSObject
{
}
- (id) contextMenuInteraction:configurationForMenuAtLocation:
- (void) contextMenuInteraction:willEndForConfiguration:animator:
- (id) cell
- (void) setCell:
- (id) headView
- (void) setHeadView:
- (id) frozenWxid
- (void) setFrozenWxid:
- (id) frozenChatRoomId
- (void) setFrozenChatRoomId:
- (id) frozenWrap
- (void) setFrozenWrap:
- (void) .cxx_destruct
- (id) contextMenuInteraction:configurationForMenuAtLocation:
- (id) contextMenuInteraction:configurationForMenuAtLocation:
@end
@interface WCLGChatBottomSMSProxySendTarget : NSObject
{
}
- (void) wclg_smsSendTapped:
- (void) wclg_smsMoreTapped:
- (void) wclg_smsEmojiTapped:
- (void) wclg_smsVoiceTapped:
@end
@interface WCLGChatTextTarget : NSObject
{
}
- (id) view
- (void) setView:
- (bool) richText
- (void) setRichText:
- (bool) explicitExternalTarget
- (void) setExplicitExternalTarget:
- (id) lastAppliedColor
- (void) setLastAppliedColor:
- (id) originalTextColor
- (void) setOriginalTextColor:
- (id) originalRichTextColor
- (void) setOriginalRichTextColor:
- (id) originalAttributedText
- (void) setOriginalAttributedText:
- (bool) capturedLabelOriginals
- (void) setCapturedLabelOriginals:
- (bool) capturedRichTextOriginal
- (void) setCapturedRichTextOriginal:
- (unsigned long long) lastTextObject
- (void) setLastTextObject:
- (unsigned long long) lastAttributedObject
- (void) setLastAttributedObject:
- (unsigned long long) lastTextLength
- (void) setLastTextLength:
- (unsigned long long) lastAttributedLength
- (void) setLastAttributedLength:
- (void) .cxx_destruct
@end
@interface WCLGChatTextApplyState : NSObject
{
}
- (id) init
- (unsigned long long) viewModelToken
- (void) setViewModelToken:
- (unsigned long long) stableIdentityHash
- (void) setStableIdentityHash:
- (unsigned long long) identityGeneration
- (void) setIdentityGeneration:
- (unsigned long long) contentGeneration
- (void) setContentGeneration:
- (unsigned long long) targetGeneration
- (void) setTargetGeneration:
- (unsigned long long) layoutGeneration
- (void) setLayoutGeneration:
- (unsigned long long) layoutDepth
- (void) setLayoutDepth:
- (unsigned long long) lastAppliedLayoutGeneration
- (void) setLastAppliedLayoutGeneration:
- (unsigned long long) lastApplySignature
- (void) setLastApplySignature:
- (unsigned long long) targetStructureSignature
- (void) setTargetStructureSignature:
- (unsigned long long) contentSignature
- (void) setContentSignature:
- (unsigned long long) nextFallbackScanLayoutGeneration
- (void) setNextFallbackScanLayoutGeneration:
- (id) contentView
- (void) setContentView:
- (id) bodyView
- (void) setBodyView:
- (id) targets
- (void) setTargets:
- (unsigned long long) resolvedColorSignature
- (void) setResolvedColorSignature:
- (bool) resolvedDarkMode
- (void) setResolvedDarkMode:
- (bool) resolvedOutgoing
- (void) setResolvedOutgoing:
- (bool) resolvedPayment
- (void) setResolvedPayment:
- (id) resolvedColor
- (void) setResolvedColor:
- (void) .cxx_destruct
@end
@interface WCLGBubbleFlushDriver : NSObject
{
}
+ (id) shared
- (void) kick
- (void) tick:
- (id) link
- (void) setLink:
- (void) .cxx_destruct
@end
@interface WCLGNativeProfileTitleHitView : UIView
{
}
- (id) initWithFrame:
- (bool) pointInside:withEvent:
- (unknown) wclgHitRect
- (void) setWclgHitRect:
- (bool) wclgCircularHitTest
- (void) setWclgCircularHitTest:
@end
@interface WCLGNativeProfileTitleTapTarget : NSObject
{
}
- (void) wclg_nativeProfileTitleTapped:
- (id) controller
- (void) setController:
@end
@interface WCLGCapsuleSearchGestureTarget : NSObject
{
}
+ (id) shared
- (void) handleLongPress:
@end
@interface WCLGChatTopCapsuleHostView : UIView
{
}
- (id) initWithFrame:
- (void) setAvatarView:
- (void) layoutSubviews
- (void) wclg_handleTap
- (id) cachedTitle
- (void) setCachedTitle:
- (id) titleLabel
- (void) setTitleLabel:
- (id) subtitleLabel
- (void) setSubtitleLabel:
- (id) subtitleIconView
- (void) setSubtitleIconView:
- (id) avatarView
- (id) controller
- (void) setController:
- (bool) avatarOnLeft
- (void) setAvatarOnLeft:
- (void) .cxx_destruct
@end
@interface WCLGChatTopFadeOverlayHost : UIView
{
}
- (id) initWithFrame:
- (void) layoutSubviews
- (id) scrollView
- (void) setScrollView:
- (long long) overlayMode
- (void) setOverlayMode:
- (id) edgeView
- (void) setEdgeView:
- (void) .cxx_destruct
@end
@interface WCLGChatBottomFadeOverlayHost : UIView
{
}
- (id) initWithFrame:
- (void) layoutSubviews
- (id) scrollView
- (void) setScrollView:
- (id) edgeView
- (void) setEdgeView:
- (double) configuredBlurRadius
- (void) setConfiguredBlurRadius:
- (void) .cxx_destruct
@end
@interface WCLGChatTopMorphMenuView : UIView
{
}
- (id) initWithFrame:
- (void) layoutSubviews
- (void) reloadRows
- (void) handleMenuTap:
- (void) setHighlightedIndex:
- (long long) indexForPoint:
- (id) controller
- (void) setController:
- (bool) isGroup
- (void) setIsGroup:
- (long long) highlightedIndex
- (id) selectionHandler
- (void) setSelectionHandler:
- (id) effectView
- (void) setEffectView:
- (id) rowViews
- (void) setRowViews:
- (void) .cxx_destruct
@end
@interface WCLGChatTopAvatarOverlayView : UIImageView
{
}
- (void) layoutSubviews
@end
@interface WCLGChatTopMorphHostView : UIView
{
}
- (id) initWithFrame:
- (void) updateChrome
- (void) layoutSubviews
- (void) traitCollectionDidChange:
- (void) handleTap:
- (id) menuContainerView
- (void) showMenuFromHost
- (void) hideMenu
- (void) handleLongPress:
- (id) controller
- (void) setController:
- (bool) avatarOnlyMode
- (void) setAvatarOnlyMode:
- (id) cachedAvatarImage
- (void) setCachedAvatarImage:
- (long long) cachedAvatarToken
- (void) setCachedAvatarToken:
- (bool) isGroup
- (void) setIsGroup:
- (long long) defaultAction
- (void) setDefaultAction:
- (bool) ready
- (void) setReady:
- (id) iconView
- (void) setIconView:
- (id) menuView
- (void) setMenuView:
- (bool) menuVisible
- (void) setMenuVisible:
- (bool) longPressActive
- (void) setLongPressActive:
- (void) .cxx_destruct
@end
@interface WCLGCodeLibraryEntry : NSObject
{
}
- (id) entryId
- (void) setEntryId:
- (id) name
- (void) setName:
- (unsigned long long) charCount
- (void) setCharCount:
- (id) createdAt
- (void) setCreatedAt:
- (void) .cxx_destruct
@end
@interface WCLGCodeLibraryViewController : UITableViewController
{
}
- (id) initWithApplyHandler:onChange:
- (void) viewDidLoad
- (void) viewWillAppear:
- (void) viewWillDisappear:
- (void) reloadEntries
- (void) notifyChange
+ (id) dateFormatter
- (void) toggleEditingTapped
- (void) setEditing:animated:
- (void) updateToolbarState
- (void) selectAllTapped
- (void) deleteSelectedTapped
- (void) clearAllTapped
- (void) closeTapped
- (void) applyEntryAtRow:
- (void) presentRenameForRow:
- (void) deleteEntryAtRow:
- (void) addTapped
- (void) saveCurrentInUse
- (void) importFromFiles
- (void) documentPicker:didPickDocumentsAtURLs:
- (long long) tableView:numberOfRowsInSection:
- (id) tableView:cellForRowAtIndexPath:
- (void) tableView:didSelectRowAtIndexPath:
- (void) tableView:didDeselectRowAtIndexPath:
- (long long) tableView:editingStyleForRowAtIndexPath:
- (bool) tableView:canEditRowAtIndexPath:
- (bool) tableView:canMoveRowAtIndexPath:
- (void) tableView:moveRowAtIndexPath:toIndexPath:
- (id) tableView:contextMenuConfigurationForRowAtIndexPath:point:
- (id) tableView:titleForFooterInSection:
- (id) onApply
- (void) setOnApply:
- (id) onChange
- (void) setOnChange:
- (id) entries
- (void) setEntries:
- (id) activeEntryId
- (void) setActiveEntryId:
- (id) addButton
- (void) setAddButton:
- (id) selectButton
- (void) setSelectButton:
- (id) selectAllButton
- (void) setSelectAllButton:
- (id) clearAllButton
- (void) setClearAllButton:
- (id) deleteButton
- (void) setDeleteButton:
- (id) emptyLabel
- (void) setEmptyLabel:
- (void) .cxx_destruct
@end
@interface WCLGColorPickerBackgroundView : UIView
{
}
+ (CLASS) layerClass
- (void) layoutSubviews
@end
@interface WCLGColorCanvasView : UIView
{
}
- (id) initWithFrame:
- (void) setHue:
- (void) layoutSubviews
- (id) hueLayer
- (void) setHueLayer:
- (id) whiteLayer
- (void) setWhiteLayer:
- (id) blackLayer
- (void) setBlackLayer:
- (double) hue
- (void) .cxx_destruct
@end
@interface WCLGHueBarView : UIView
{
}
+ (CLASS) layerClass
- (id) initWithFrame:
- (void) layoutSubviews
@end
@interface WCLGColorPickerViewController : UIViewController
{
}
- (id) initOutgoing:handler:
- (id) initPurpose:handler:
- (id) initPurpose:lightMode:darkMode:handler:
- (id) initSMSBottomBarIconLightMode:darkMode:handler:
- (id) initTitle:initialMode:handler:
- (id) initTitle:lightMode:darkMode:handler:
- (bool) isDarkMode
- (id) titleForPurpose
- (long long) currentMode
- (bool) componentsForMode:red:green:blue:alpha:
- (void) loadCurrentColor
- (void) updateHSVFromRGBPreservingHue:
- (void) updateRGBFromHSV
- (void) markCustomMode
- (void) storeCurrentModeForActiveAppearance
- (id) currentHexString
- (id) primaryTextColor
- (id) secondaryTextColor
- (id) cardColor
- (id) makeCard
- (id) sectionLabelWithText:
- (id) numberFieldWithTag:
- (id) swatchImageForColor:diameter:
- (id) defaultPaletteModes
- (id) commonColorModes
- (id) commonColorNames
- (id) colorForMode:
- (void) viewDidLoad
- (void) viewDidAppear:
- (void) viewWillDisappear:
- (void) viewDidLayoutSubviews
- (void) traitCollectionDidChange:
- (void) refreshThemeColors
- (void) layoutPickerViews
- (void) layoutPaletteButtonsWithWidth:
- (void) layoutCommonRowsWithWidth:
- (void) updateUI
- (void) updateKnobFrames
- (void) confirmColor
- (void) appearanceSegmentChanged:
- (void) applyMode:
- (void) channelSliderChanged:
- (void) canvasGestureChanged:
- (void) hueGestureChanged:
- (void) paletteButtonTapped:
- (void) commonButtonTapped:
- (bool) parseHexString:red:green:blue:alpha:
- (void) hexEditingDidEnd:
- (void) numberFieldEditingDidEnd:
- (bool) textFieldShouldReturn:
- (bool) outgoing
- (void) setOutgoing:
- (long long) purpose
- (void) setPurpose:
- (id) selectionHandler
- (void) setSelectionHandler:
- (id) dualSelectionHandler
- (void) setDualSelectionHandler:
- (id) backgroundView
- (void) setBackgroundView:
- (id) scrollView
- (void) setScrollView:
- (id) contentView
- (void) setContentView:
- (id) pickerHeaderLabel
- (void) setPickerHeaderLabel:
- (id) paletteHeaderLabel
- (void) setPaletteHeaderLabel:
- (id) commonHeaderLabel
- (void) setCommonHeaderLabel:
- (id) controlCard
- (void) setControlCard:
- (id) paletteCard
- (void) setPaletteCard:
- (id) commonCard
- (void) setCommonCard:
- (id) hexLabel
- (void) setHexLabel:
- (id) hexHintLabel
- (void) setHexHintLabel:
- (id) hexField
- (void) setHexField:
- (id) previewView
- (void) setPreviewView:
- (id) canvasView
- (void) setCanvasView:
- (id) hueBarView
- (void) setHueBarView:
- (id) canvasKnob
- (void) setCanvasKnob:
- (id) hueKnob
- (void) setHueKnob:
- (id) channelLabels
- (void) setChannelLabels:
- (id) channelSliders
- (void) setChannelSliders:
- (id) channelFields
- (void) setChannelFields:
- (id) paletteScrollView
- (void) setPaletteScrollView:
- (id) paletteButtons
- (void) setPaletteButtons:
- (id) paletteModes
- (void) setPaletteModes:
- (id) commonButtons
- (void) setCommonButtons:
- (id) commonLabels
- (void) setCommonLabels:
- (id) commonModes
- (void) setCommonModes:
- (id) appearanceControl
- (void) setAppearanceControl:
- (id) currentTitleLabel
- (void) setCurrentTitleLabel:
- (id) currentHexLabel
- (void) setCurrentHexLabel:
- (id) currentDot
- (void) setCurrentDot:
- (double) red
- (void) setRed:
- (double) green
- (void) setGreen:
- (double) blue
- (void) setBlue:
- (double) alpha
- (void) setAlpha:
- (double) hue
- (void) setHue:
- (double) saturation
- (void) setSaturation:
- (double) brightness
- (void) setBrightness:
- (long long) pendingMode
- (void) setPendingMode:
- (long long) lightMode
- (void) setLightMode:
- (long long) darkMode
- (void) setDarkMode:
- (bool) dualAppearanceMode
- (void) setDualAppearanceMode:
- (bool) editingDarkAppearance
- (void) setEditingDarkAppearance:
- (bool) updatingUI
- (void) setUpdatingUI:
- (bool) savedPopGestureEnabled
- (void) setSavedPopGestureEnabled:
- (id) explicitTitle
- (void) setExplicitTitle:
- (bool) hasExplicitInitialMode
- (void) setHasExplicitInitialMode:
- (long long) explicitInitialMode
- (void) setExplicitInitialMode:
- (void) .cxx_destruct
@end
@interface WCLGConfig : NSObject
{
}
+ (id) sharedConfig
- (id) init
- (void) dealloc
- (void) primeDefaults
- (void) refreshAtomicMirrors
- (void) maybeUpdateMirrorForKey:value:
- (id) cachedObjectForKey:
- (void) setCachedObject:forKey:
- (void) flushScheduled
- (bool) boolForKey:
- (bool) boolForKey:defaultValue:
- (long long) integerForKey:
- (long long) integerForKey:defaultValue:
- (double) doubleForKey:
- (id) objectForKey:
- (void) setBool:forKey:
- (void) setLiquidGlassPersistedPendingValue:
- (void) setInteger:forKey:
- (void) setDouble:forKey:
- (void) setObject:forKey:
- (bool) hasValueForKey:
- (double) tabBarIconOffsetXForSizeMode:
- (double) tabBarIconOffsetYForSizeMode:
- (double) tabBarIconSpacingForSizeMode:
- (void) setTabBarIconOffsetX:forSizeMode:
- (void) setTabBarIconOffsetY:forSizeMode:
- (void) setTabBarIconSpacing:forSizeMode:
- (double) tabBarIconScaleForSizeMode:
- (void) setTabBarIconScale:forSizeMode:
- (bool) liquidGlassEnabled
- (bool) compatEnabled
- (bool) hideTitlesEnabled
- (bool) chatBottomGlassEnabled
- (bool) chatBottomSMSHideEmojiIconEnabled
- (bool) chatBottomHoldKeyToTalkEnabled
- (bool) chatBottomVoiceWaveColorLock
- (bool) chatAvatarGestureEnabled
- (long long) chatAvatarGestureTrigger
- (bool) chatBottomSMSUseMessageIconsEnabled
- (long long) chatBottomSMSMessageIconWeightMode
- (bool) chatBottomTGUseMessageIconsEnabled
- (long long) chatBottomTGMessageIconWeightMode
- (long long) chatBottomTGAvatarMode
- (bool) chatBottomTGAvatarEnabled
- (bool) chatBubbleGlassEnabled
- (bool) topNavigationAlignmentEnabled
- (bool) homeSearchButtonEnabled
- (bool) chatTitleCapsuleEnabled
- (bool) chatTitleCapsuleSearchEnabled
- (bool) chatNativeProfileTitleEnabled
- (bool) chatTopCapsuleAvatarEnabled
- (bool) chatTopCapsuleSubtitleEnabled
- (bool) chatTopCapsuleLeftEnabled
- (bool) chatTopCapsuleSubtitleIconEnabled
- (bool) chatNativeProfilePinnedOffsetEnabled
- (bool) chatTopMorphActionEnabled
- (long long) privateChatTopMorphDefault
- (long long) groupChatTopMorphDefault
- (bool) chatTopMorphSMSIconsEnabled
- (long long) chatTopMorphSMSIconWeightMode
- (bool) smsBackTextEnabled
- (long long) smsBackIconWeightMode
- (bool) smsHomeAddIconEnabled
- (long long) smsHomeAddIconWeightMode
- (bool) smsBottomBarIconEnabled
- (bool) chatPlusSMSMenuEnabled
- (bool) richCardPaymentBubbleEnabled
- (bool) voIPBubbleGlassEnabled
- (bool) longPressMenuGlassEnabled
- (bool) chatBubbleFlowGradientEnabled
- (bool) chatBubbleFlowBorderEnabled
- (bool) chatBubbleFlowRichMediaEnabled
- (bool) chatBubbleFlowVoIPEnabled
- (bool) hideVoiceTranscribeIconEnabled
- (bool) deleteSessionImmediately
- (bool) hideHomeWeChatTitleEnabled
- (bool) chatBottomGradientBackgroundEnabled
- (bool) homeWallpaperScrimEnabled
- (bool) homeWallpaperExtraTabsEnabled
- (bool) chatBottomPlaceholderEnabled
- (bool) customFadeEnabled
- (bool) homeTopFadeEnabled
- (bool) chatTopFadeEnabled
- (bool) homeBottomFadeEnabled
- (bool) tabBarExtraClearEnabled
- (long long) unreadBackCapsuleMode
- (bool) tabBarRightSearchEnabled
- (bool) searchTabBarEnabled
- (bool) disablePullDownMiniProgramEnabled
- (bool) plusMenuMiniProgramEntryEnabled
- (long long) glassSizeMode
- (long long) tabBarRightSearchSizeMode
- (long long) searchTabBarSizeMode
- (long long) chatBottomGlassMode
- (long long) chatBottomSMSSendColorMode
- (long long) chatBottomSMSSendDarkColorMode
- (long long) smsBottomBarIconLightColorMode
- (long long) smsBottomBarIconDarkColorMode
- (long long) chatBubbleOutgoingColorMode
- (long long) chatBubbleIncomingColorMode
- (long long) chatBubbleOutgoingDarkColorMode
- (long long) chatBubbleIncomingDarkColorMode
- (long long) chatBubblePaymentTextColorMode
- (long long) chatBubblePaymentTextDarkColorMode
- (bool) chatBubbleTextColorEnabled
- (long long) chatBubbleTextSendColorMode
- (long long) chatBubbleTextSendDarkColorMode
- (long long) chatBubbleTextRecvColorMode
- (long long) chatBubbleTextRecvDarkColorMode
- (bool) chatBubbleCompactEnabled
- (long long) chatBubbleCompactAvatarPosition
- (long long) chatBubbleCompactGap
- (long long) chatBubbleCompactGapGroup
- (long long) chatBubbleCompactGapGroupSend
- (long long) chatBubbleCompactGapPrivate
- (bool) avatarScaleEnabled
- (long long) avatarScaleChatList
- (long long) avatarScaleChat
- (long long) avatarScaleContacts
- (long long) avatarScaleDiscover
- (bool) chatTopButtonAvatarEnabled
- (long long) chatTopButtonAvatarSource
- (long long) chatTopButtonAvatarScale
- (bool) bubbleImageEnabled
- (bool) chatBubbleCompactSkipTime
- (bool) chatBubbleMergeHideTimeBar
- (bool) chatBubbleMergeAvatarBottomAlign
- (bool) chatBubbleMergePrivate
- (bool) chatBubbleMergeGroup
- (long long) chatBubbleMergeBubbleInset
- (long long) chatBubbleMergeAvatarInset
- (long long) chatBubbleMergePageInset
- (bool) chatIndentEnabled
- (long long) chatIndentGroupRecv
- (long long) chatIndentGroupSend
- (long long) chatIndentPrivateRecv
- (long long) chatIndentPrivateSend
- (long long) chatBubbleFlowStartColorMode
- (long long) chatBubbleFlowEndColorMode
- (long long) chatBubbleFlowDarkStartColorMode
- (long long) chatBubbleFlowDarkEndColorMode
- (long long) groupChatAvatarHideMode
- (long long) privateChatAvatarHideMode
- (bool) shouldForceTrueForUserDefaultsKey:
- (void) flush
- (void) invalidateCache
- (void) .cxx_destruct
@end
@interface WCLGGlassThemeCell : UITableViewCell
{
}
- (id) initWithStyle:reuseIdentifier:
- (void) configure:
- (id) thumb
- (void) setThumb:
- (id) nameLabel
- (void) setNameLabel:
- (id) subLabel
- (void) setSubLabel:
- (id) verLabel
- (void) setVerLabel:
- (id) statusChip
- (void) setStatusChip:
- (id) chevron
- (void) setChevron:
- (id) theme
- (void) setTheme:
- (void) .cxx_destruct
@end
@interface WCLGDownloadCenterViewController : UIViewController
{
}
- (void) viewDidLoad
- (void) viewDidLayoutSubviews
- (void) segChanged
- (void) openRedeemCenter
- (void) reload
- (id) current
- (void) updateEmpty
- (long long) tableView:numberOfRowsInSection:
- (id) tableView:cellForRowAtIndexPath:
- (void) tableView:didSelectRowAtIndexPath:
- (void) showDetail:
- (void) dismissSelf
- (void) toast:
- (id) seg
- (void) setSeg:
- (id) segBar
- (void) setSegBar:
- (id) bg
- (void) setBg:
- (id) tableView
- (void) setTableView:
- (id) spinner
- (void) setSpinner:
- (id) emptyLabel
- (void) setEmptyLabel:
- (id) bubbles
- (void) setBubbles:
- (id) cards
- (void) setCards:
- (unsigned long long) reloadGeneration
- (void) setReloadGeneration:
- (void) .cxx_destruct
- (long long) tableView:numberOfRowsInSection:
- (long long) tableView:numberOfRowsInSection:
- (id) tableView:cellForRowAtIndexPath:
- (id) tableView:cellForRowAtIndexPath:
@end
@interface WCLGVariableBlurHostView : UIView
{
}
- (id) initWithFrame:
- (void) layoutSubviews
- (id) backdropLayer
- (void) setBackdropLayer:
- (id) gradientImage
- (void) setGradientImage:
- (unknown) lastSize
- (void) setLastSize:
- (double) lastConstantHeight
- (void) setLastConstantHeight:
- (bool) lastInverted
- (void) setLastInverted:
- (double) lastGradientHeight
- (void) setLastGradientHeight:
- (void) .cxx_destruct
@end
@interface WCLGEdgeEffectView : UIView
{
}
- (id) initWithFrame:
- (void) updateWithContentColor:blur:alpha:rect:edge:edgeSize:blurRadius:
- (bool) isBlurEnabled
- (void) setBlurEnabled:
- (id) contentView
- (void) setContentView:
- (id) contentMaskView
- (void) setContentMaskView:
- (id) blurHostView
- (void) setBlurHostView:
- (id) fallbackBlurView
- (void) setFallbackBlurView:
- (id) lastContentColor
- (void) setLastContentColor:
- (bool) lastBlur
- (void) setLastBlur:
- (double) lastAlpha
- (void) setLastAlpha:
- (unknown) lastRect
- (void) setLastRect:
- (long long) lastEdge
- (void) setLastEdge:
- (double) lastEdgeSize
- (void) setLastEdgeSize:
- (double) lastBlurRadius
- (void) setLastBlurRadius:
- (void) .cxx_destruct
@end
@interface WCLGFuncCardMediaController : NSObject
{
}
- (id) init
- (id) keyForSchemeTask:
- (bool) isSchemeTaskCancelled:
- (void) finishSchemeTask:
- (bool) performSchemeTaskCallback:block:
- (void) failSchemeTask:code:
- (void) userContentController:didReceiveScriptMessage:
- (id) contentTypesForAccept:
- (id) presenterForWebView:
- (void) deliver:expectedScope:
- (void) clearPendingPicker
- (void) updateScope:
- (void) documentPicker:didPickDocumentsAtURLs:
- (void) documentPickerWasCancelled:
- (void) presentationControllerDidDismiss:
- (void) webView:startURLSchemeTask:
- (void) webView:stopURLSchemeTask:
- (id) webView
- (void) setWebView:
- (id) scope
- (void) setScope:
- (id) ioQueue
- (void) setIoQueue:
- (id) stateQueue
- (void) setStateQueue:
- (id) activeTasks
- (void) setActiveTasks:
- (id) cancelledTasks
- (void) setCancelledTasks:
- (id) pageScopes
- (void) setPageScopes:
- (id) pendingPicker
- (void) setPendingPicker:
- (id) pendingRequestId
- (void) setPendingRequestId:
- (id) pendingToken
- (void) setPendingToken:
- (id) pendingScope
- (void) setPendingScope:
- (unsigned long long) pendingStorageGeneration
- (void) setPendingStorageGeneration:
- (void) .cxx_destruct
- (void) userContentController:didReceiveScriptMessage:
- (void) userContentController:didReceiveScriptMessage:
@end
@interface WCLGFuncCardPanelView : UIView
{
}
+ (id) metricDefinitions
- (id) initForWindow:
- (id) primaryTextColor
- (id) secondaryTextColor
- (id) separatorColor
- (void) buildBlurBackground
- (id) contentHost
- (void) buildHeader
- (void) buildScrollContent:
- (id) makeRowAtIndex:title:lastRow:
- (id) makeColorRowAtIndex:title:swatchOut:
- (id) makeDisclosureRowAtIndex:title:
- (void) placeAccessoryControl:inRow:
- (void) addStepperForMetric:index:inRow:
- (void) closeTapped
- (void) enableSwitchChanged:
- (void) swipeFollowSwitchChanged:
- (void) appearanceControlChanged:
- (void) stepperChanged:
- (void) bgColorTapped
- (void) borderColorTapped
- (void) codeLibraryTapped
- (void) presentColorPickerKey:title:
- (void) dismissTopModal
- (void) refreshColorSwatches
- (void) handlePan:
- (unknown) clampedCenter:inBounds:
- (bool) gestureRecognizer:shouldReceiveTouch:
- (id) panelBG
- (void) setPanelBG:
- (id) scrollView
- (void) setScrollView:
- (id) enableSwitch
- (void) setEnableSwitch:
- (id) swipeFollowSwitch
- (void) setSwipeFollowSwitch:
- (id) appearanceControl
- (void) setAppearanceControl:
- (id) bgSwatch
- (void) setBgSwatch:
- (id) borderSwatch
- (void) setBorderSwatch:
- (id) valueLabels
- (void) setValueLabels:
- (id) metrics
- (void) setMetrics:
- (unknown) dragStartCenter
- (void) setDragStartCenter:
- (bool) darkMode
- (void) setDarkMode:
- (void) .cxx_destruct
@end
@interface WCLGGlassInstalledItem : NSObject
{
}
- (long long) themeId
- (void) setThemeId:
- (id) type
- (void) setType:
- (id) name
- (void) setName:
- (id) subtitle
- (void) setSubtitle:
- (id) iconURL
- (void) setIconURL:
- (id) version
- (void) setVersion:
- (long long) versionCode
- (void) setVersionCode:
- (id) importPath
- (void) setImportPath:
- (double) importedAt
- (void) setImportedAt:
- (void) .cxx_destruct
@end
@interface WCLGGlassPackage : NSObject
{
}
+ (id) supportDir
+ (id) vaultDir
+ (id) vaultPathForTheme:
+ (id) indexPath
+ (void) performConfidentialityMigrationIfNeeded
+ (id) loadIndex
+ (void) saveIndex:
+ (id) decryptContainer:themeId:wxid:signKey:glassMaster:error:
+ (bool) importGlassData:wxid:signKey:glassMaster:iconURL:error:
+ (void) invalidateMemoryCacheForTheme:
+ (id) decryptedPayloadForTheme:error:
+ (id) filesForTheme:
+ (id) manifestForTheme:
+ (id) cardHTMLForTheme:
+ (id) installedVersionMap
+ (id) installedItems
+ (id) nameForTheme:
+ (id) typeForTheme:
+ (long long) activeInstalledThemeIdForType:
+ (bool) applyInstalled:
+ (bool) deactivateInstalledThemeForType:
+ (bool) removeInstalled:
@end
@interface WCLGGlassTheme : NSObject
{
}
- (long long) themeId
- (void) setThemeId:
- (id) type
- (void) setType:
- (id) name
- (void) setName:
- (id) subtitle
- (void) setSubtitle:
- (id) authorName
- (void) setAuthorName:
- (id) desc
- (void) setDesc:
- (id) iconURL
- (void) setIconURL:
- (id) previewURLs
- (void) setPreviewURLs:
- (id) version
- (void) setVersion:
- (long long) versionCode
- (void) setVersionCode:
- (long long) versionId
- (void) setVersionId:
- (id) changelog
- (void) setChangelog:
- (bool) hasUpdate
- (void) setHasUpdate:
- (bool) installed
- (void) setInstalled:
- (long long) parentThemeId
- (void) setParentThemeId:
- (id) subPackages
- (void) setSubPackages:
- (void) .cxx_destruct
@end
@interface WCGMultiDownloader : NSObject
{
}
- (void) start
- (void) fetchRange:session:
- (void) emit
- (void) finishOnMain:
- (id) base
- (void) setBase:
- (id) token
- (void) setToken:
- (long long) size
- (void) setSize:
- (long long) threads
- (void) setThreads:
- (id) buffer
- (void) setBuffer:
- (long long) received
- (void) setReceived:
- (long long) pending
- (void) setPending:
- (bool) failed
- (void) setFailed:
- (id) lock
- (void) setLock:
- (id) speedTimer
- (void) setSpeedTimer:
- (long long) lastSampleBytes
- (void) setLastSampleBytes:
- (double) lastSampleTime
- (void) setLastSampleTime:
- (id) progress
- (void) setProgress:
- (id) done
- (void) setDone:
- (void) .cxx_destruct
@end
@interface WCLGGlassStore : NSObject
{
}
+ (id) shared
- (unknown) apiPubKey
- (unknown) signPubKey
- (id) currentWXID
- (id) buildRequest:requestKey:nonce:
- (id) decryptResponse:requestKey:nonce:
- (void) postPath:payload:completion:
- (id) themeFromDict:
- (void) fetchCatalogWithCompletion:
- (void) fetchCardPreviewHTMLForTheme:completion:
- (void) downloadAndImportTheme:completion:
- (void) downloadAndImportTheme:progress:completion:
- (unknown) glassSignKey
- (id) glassMasterKey
- (void) revokeTheme:completion:
- (void) setApiPubKey:
- (void) setSignPubKey:
@end
@interface WCLGGlassBackgroundView : UIView
{
}
- (id) initWithFrame:
- (bool) isDark
- (id) colorsA
- (id) colorsB
- (void) updateColors
- (void) layoutSubviews
- (void) traitCollectionDidChange:
- (void) startAnimations
- (id) gradA
- (void) setGradA:
- (id) gradB
- (void) setGradB:
- (void) .cxx_destruct
@end
@interface WCLGGlassUI : NSObject
{
}
+ (id) cardColor
+ (id) cardBorderColor
+ (id) accentColor
+ (id) themePlaceholderImageForType:
+ (void) showToast:inView:
+ (id) imageCache
+ (id) imageCacheQueue
+ (id) imageInflightRequests
+ (id) normalizedImageURLString:
+ (id) themeIconCacheDirectory
+ (id) themeIconCachePathForURL:
+ (unsigned long long) memoryCostForImage:fallback:
+ (id) decodedImageFromData:
+ (id) themeIconImageFromDiskForURL:
+ (void) trimThemeIconDiskCacheIfNeeded
+ (bool) registerImageRequestForKey:completion:
+ (void) finishImageRequestForKey:image:
+ (void) requestImageAtURLString:persistToDisk:completion:
+ (void) prewarmThemeIconCacheForURLs:completion:
+ (void) loadImage:into:
+ (void) loadImage:themeType:into:
@end
@interface WCLGGroupMemberPicker : UIViewController
{
}
+ (void) presentForGroupID:title:preselectedMembers:sessionUsernames:fromController:onComplete:
+ (void) presentSingleSelectWithTitle:excludeMembers:fromController:onPick:
- (void) viewDidLoad
- (void) setupSingleSelect
- (void) onSingleModeChanged:
- (void) buildSessionRows
- (void) ensureContactsLoaded
- (void) ensureLabelsLoaded
- (void) ensureChatroomsLoaded
- (void) applyFilter
- (void) onModeChanged:
- (void) updateDoneTitle
- (void) onCancel
- (void) onDone
- (void) searchBar:textDidChange:
- (void) searchBarSearchButtonClicked:
- (long long) tableView:numberOfRowsInSection:
- (id) tableView:cellForRowAtIndexPath:
- (id) tableView:titleForHeaderInSection:
- (void) tableView:didSelectRowAtIndexPath:
- (id) groupID
- (void) setGroupID:
- (id) onComplete
- (void) setOnComplete:
- (id) selected
- (void) setSelected:
- (id) sessionUsernames
- (void) setSessionUsernames:
- (id) sessionRows
- (void) setSessionRows:
- (id) contactRows
- (void) setContactRows:
- (id) filteredRows
- (void) setFilteredRows:
- (id) labels
- (void) setLabels:
- (id) chatroomRows
- (void) setChatroomRows:
- (bool) contactsLoaded
- (void) setContactsLoaded:
- (bool) labelsLoaded
- (void) setLabelsLoaded:
- (bool) chatroomsLoaded
- (void) setChatroomsLoaded:
- (bool) singleSelect
- (void) setSingleSelect:
- (id) onPick
- (void) setOnPick:
- (id) excluded
- (void) setExcluded:
- (long long) mode
- (void) setMode:
- (id) segmented
- (void) setSegmented:
- (id) tableView
- (void) setTableView:
- (id) searchBar
- (void) setSearchBar:
- (id) searchText
- (void) setSearchText:
- (void) .cxx_destruct
- (long long) tableView:numberOfRowsInSection:
- (long long) tableView:numberOfRowsInSection:
- (id) tableView:cellForRowAtIndexPath:
- (id) tableView:cellForRowAtIndexPath:
@end
@interface WCLGFriendCapsuleButton : UIButton
{
}
+ (id) wclgCapsuleConfiguration
- (id) initWithFrame:
- (void) didMoveToWindow
- (void) configureUsername:unread:
- (void) setUnreadCount:
- (void) layoutSubviews
- (void) setHighlighted:
- (void) wclgHandleTap
- (void) wclgHandleLongPress:
- (id) username
- (void) setUsername:
- (id) avatarView
- (void) setAvatarView:
- (id) nameLabel
- (void) setNameLabel:
- (id) badgeLabel
- (void) setBadgeLabel:
- (id) fallbackGlassView
- (void) setFallbackGlassView:
- (id) colorTintView
- (void) setColorTintView:
- (id) onTap
- (void) setOnTap:
- (id) onLongPress
- (void) setOnLongPress:
- (void) .cxx_destruct
@end
@interface WCLGHomeCapsulePinnedController : NSObject
{
}
- (void) refresh
- (void) presentActionsForUser:
- (void) presentNicknameEditorForUser:
- (void) replaceFriend:
- (void) replaceAvatar:
- (void) removeUser:
- (void) imagePickerController:didFinishPickingMediaWithInfo:
- (void) imagePickerControllerDidCancel:
- (id) pendingAvatarUser
- (void) setPendingAvatarUser:
- (void) .cxx_destruct
@end
@interface WCLGCapsulePinnedContainerView : UIView
{
}
- (bool) pointInside:withEvent:
@end
@interface WCLGFuncCardChromeView : UIView
{
}
- (void) traitCollectionDidChange:
@end
@interface WCLGFuncCardLongPressTarget : NSObject
{
}
+ (id) shared
- (void) onLongPress:
- (bool) gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:
@end
@interface WCLGFuncCardDocPickerDelegate : NSObject
{
}
- (void) documentPicker:didPickDocumentsAtURLs:
- (void) documentPickerWasCancelled:
- (id) onChange
- (void) setOnChange:
- (id) retainSelf
- (void) setRetainSelf:
- (void) .cxx_destruct
@end
@interface WCLGGroupPill : UIButton
{
}
+ (id) pillConfigurationExpanded:
- (id) initWithFrame:
- (void) applyBadgeText
- (void) applyMemberText
- (void) applyVisualStateExpanded:newButton:title:
- (void) setPillExpanded:
- (void) configureWithTitle:memberCount:badgeCount:expanded:newButton:textColor:
- (void) refreshBadgeCount:memberCount:
- (void) layoutSubviews
- (void) handleTap
- (void) handleLongPress:
- (long long) displayIndex
- (void) setDisplayIndex:
- (id) onTap
- (void) setOnTap:
- (id) onLongPress
- (void) setOnLongPress:
- (id) badge
- (void) setBadge:
- (long long) badgeCount
- (void) setBadgeCount:
- (id) countLabel
- (void) setCountLabel:
- (long long) memberCount
- (void) setMemberCount:
- (bool) wclgExpanded
- (void) setWclgExpanded:
- (bool) wclgNewButton
- (void) setWclgNewButton:
- (id) wclgTitle
- (void) setWclgTitle:
- (void) .cxx_destruct
@end
@interface WCLGHomeGroupBar : UIView
{
}
+ (double) preferredHeight
- (id) initWithFrame:
- (void) dealloc
- (void) handleGroupsChanged
- (void) reloadGroups
- (void) reloadGroupsIfNeeded
- (void) setSelectedDisplayIndex:animated:
- (void) refreshBadgesWithTable:
- (void) layoutSubviews
- (void) scrollSelectedPillToVisibleIfNeededAnimated:
- (void) traitCollectionDidChange:
- (id) delegate
- (void) setDelegate:
- (id) pills
- (void) setPills:
- (id) scroll
- (void) setScroll:
- (long long) lastScrolledExpandedIndex
- (void) setLastScrolledExpandedIndex:
- (id) wclgStructureToken
- (void) setWclgStructureToken:
- (void) .cxx_destruct
@end
@interface WCLGHGFullscreenDrawer : UIView
{
}
- (id) initWithController:fromLeft:anchorY:
- (void) buildPillsWithFontSize:
- (void) handleBackdrop
- (void) handlePill:
- (long long) pillIndexAtWindowPoint:
- (void) setHighlightedIndex:
- (void) commitSelection:
- (void) presentInWindow:
- (void) dismissAnimated:
- (id) controller
- (void) setController:
- (id) backdrop
- (void) setBackdrop:
- (id) column
- (void) setColumn:
- (bool) fromLeft
- (void) setFromLeft:
- (double) columnWidth
- (void) setColumnWidth:
- (double) anchorY
- (void) setAnchorY:
- (id) pills
- (void) setPills:
- (long long) highlightedIndex
- (id) lockedScroll
- (void) setLockedScroll:
- (id) hapticGenerator
- (void) setHapticGenerator:
- (void) .cxx_destruct
@end
@interface WCLGHGFullscreenGestureTarget : NSObject
{
}
+ (id) shared
- (void) handleEdgePan:
- (bool) gestureRecognizer:shouldReceiveTouch:
- (bool) gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:
@end
@interface WCLGHGPassthroughView : UIView
{
}
- (id) hitTest:withEvent:
@end
@interface WCLGSessionGroup : NSObject
{
}
- (id) init
- (bool) isAllGroup
- (bool) containsSessionUsername:
- (bool) containsSessionUsername:unreadCount:muted:showMutedUnread:
- (id) dictionaryRepresentation
+ (id) groupWithDictionary:
- (id) groupID
- (void) setGroupID:
- (id) title
- (void) setTitle:
- (id) members
- (void) setMembers:
- (long long) rule
- (void) setRule:
- (void) .cxx_destruct
@end
@interface WCLGHomeGroups : NSObject
{
}
+ (id) sharedManager
- (id) init
- (void) loadFromDisk
- (void) seedDefaultGroupsIfNeeded
- (void) persistGroupsLocked
- (bool) enabled
- (void) setEnabled:
- (bool) tgMode
- (void) setTgMode:
- (bool) hideGroupArrow
- (void) setHideGroupArrow:
- (double) stripPillFontSize
- (void) setStripPillFontSize:
- (double) stripPillWidth
- (void) setStripPillWidth:
- (double) stripVerticalOffset
- (void) setStripVerticalOffset:
- (id) defaultExpandedGroupID
- (void) setDefaultExpandedGroupID:
- (bool) unreadGroupShowMuted
- (void) setUnreadGroupShowMuted:
- (bool) swipeEnabled
- (void) setSwipeEnabled:
- (bool) animationEnabled
- (void) setAnimationEnabled:
- (bool) filterPinned
- (void) setFilterPinned:
- (bool) showBadge
- (void) setShowBadge:
- (bool) showUnreadBadge
- (void) setShowUnreadBadge:
- (bool) groupTapHapticEnabled
- (void) setGroupTapHapticEnabled:
- (long long) textColorMode
- (void) setTextColorMode:
- (long long) pillColorMode
- (void) setPillColorMode:
- (long long) pillSelectedColorMode
- (void) setPillSelectedColorMode:
- (long long) badgeColorMode
- (void) setBadgeColorMode:
- (long long) badgeColorDarkMode
- (void) setBadgeColorDarkMode:
- (long long) stripSelectedColorMode
- (void) setStripSelectedColorMode:
- (long long) stripSelectedColorDarkMode
- (void) setStripSelectedColorDarkMode:
- (double) barVerticalOffset
- (void) setBarVerticalOffset:
- (double) pillGap
- (void) setPillGap:
- (double) pillHorizontalInset
- (void) setPillHorizontalInset:
- (bool) hideAllGroup
- (void) setHideAllGroup:
- (bool) effectiveEnabled
- (id) allGroupTitle
- (bool) isAllGroupTitleCustomized
- (void) restoreAllGroupTitle
- (long long) allGroupIndex
- (void) setAllGroupIndex:
- (id) allGroup
- (id) customGroups
- (id) displayGroups
- (id) groupForID:
- (id) displayGroupAtIndex:
- (id) currentGroupID
- (void) setCurrentGroupID:
- (long long) currentDisplayIndex
- (id) currentGroup
- (void) selectDisplayIndex:
- (bool) collapsed
- (long long) expandedDisplayIndex
- (void) toggleExpandDisplayIndex:
- (void) normalizeCurrentSelection
- (id) addGroupWithTitle:
- (void) removeGroupID:
- (void) renameGroupID:toTitle:
- (void) setMembers:forGroupID:
- (id) customGroupWithRule:
- (void) restoreDefaultGroupOfRule:
- (void) moveCustomGroupFromIndex:toIndex:
- (void) moveDisplayGroupFromIndex:toIndex:
- (bool) currentGroupShouldShowSessionUsername:
- (bool) groupAtDisplayIndex:shouldShowSessionUsername:
- (bool) currentGroupShouldShowSessionUsername:cellData:
- (bool) groupAtDisplayIndex:shouldShowSessionUsername:cellData:
- (void) recomputeAtomicMirrorLocked:
- (void) refresh
- (void) beginQuietGroupSwitch
- (void) endQuietGroupSwitch
- (void) notifyChanged
- (void) .cxx_destruct
@end
@interface WCLGHomeGroupsControllerState : NSObject
{
}
- (bool) fullscreenRowsBusy
- (void) setFullscreenRowsBusy:
- (bool) fullscreenCapsulePositionPending
- (void) setFullscreenCapsulePositionPending:
- (bool) fullscreenCapsulePositionScheduled
- (void) setFullscreenCapsulePositionScheduled:
- (unsigned long long) fullscreenCapsulePositionScheduledEpoch
- (void) setFullscreenCapsulePositionScheduledEpoch:
- (unsigned long long) fullscreenCapsulePositionAttemptCount
- (void) setFullscreenCapsulePositionAttemptCount:
- (unsigned long long) fullscreenCapsulePositionTargetToken
- (void) setFullscreenCapsulePositionTargetToken:
- (unsigned long long) fullscreenCapsulePositionEpoch
- (void) setFullscreenCapsulePositionEpoch:
@end
@interface WCLGHomeGroupsChrome : NSObject
{
}
- (void) homeGroupBar:didToggleDisplayIndex:
- (void) homeGroupBar:didRequestManageDisplayIndex:sourceView:
- (void) homeGroupBarDidRequestCreateGroup:
- (id) controller
- (void) setController:
- (void) .cxx_destruct
- (void) homeGroupBar:didToggleDisplayIndex:
- (void) homeGroupBar:didToggleDisplayIndex:
@end
@interface WCLGHomeGroupsGestureTarget : NSObject
{
}
- (bool) gestureRecognizerShouldBegin:
- (bool) gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:
- (void) wclgHandleLongPress:
@end
@interface WCLGHomeSwipeBlockerPan : UIPanGestureRecognizer
{
}
- (bool) canPreventGestureRecognizer:
- (bool) canBePreventedByGestureRecognizer:
@end
@interface WCLGHomeSwipeBlockerDelegate : NSObject
{
}
- (bool) gestureRecognizer:shouldReceiveTouch:
- (bool) gestureRecognizerShouldBegin:
- (bool) gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:
@end
@interface WCLGHomeSwipeBlockerTarget : NSObject
{
}
+ (id) shared
- (void) handlePan:
@end
@interface WCLGHomeStripSwipeTarget : NSObject
{
}
+ (id) shared
- (void) handleSwipe:
- (bool) gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:
- (bool) gestureRecognizer:shouldReceiveTouch:
@end
@interface WCLGHomePinnedController : NSObject
{
}
- (void) refreshUI
- (void) onSlotTap:
- (void) onSlotLongPress:
- (void) presentActionsForUser:fromController:
- (void) replaceFriend:fromController:
- (void) replaceAvatar:fromController:
- (void) removeUser:
- (void) addContactFromController:onChange:
- (void) presentMaskPickerFromController:
- (void) pickMaskForDark:fromController:
- (void) imagePickerController:didFinishPickingMediaWithInfo:
- (void) imagePickerControllerDidCancel:
- (id) pendingAvatarUser
- (void) setPendingAvatarUser:
- (id) pendingMaskDark
- (void) setPendingMaskDark:
- (void) .cxx_destruct
@end
@interface WCLGHomePinnedPanelView : UIView
{
}
+ (id) rowDefinitions
- (id) initForWindow:
- (id) primaryTextColor
- (id) secondaryTextColor
- (id) separatorColor
- (void) buildBackground
- (void) buildHeader
- (void) buildScrollContent:
- (id) makePlainRowAtIndex:title:lastRow:
- (id) makeTappableRowAtIndex:title:lastRow:
- (void) addLabel:separator:toRow:interactive:
- (void) placeAccessory:inRow:
- (bool) switchOnFor:
- (void) addSwitchToRow:def:index:
- (void) addSegmentToRow:def:index:
- (void) addStepperToRow:def:index:
- (void) addColorAccessoryToRow:index:
- (void) addActionAccessoryToRow:
- (void) refreshBadgeSwatch
- (void) closeTapped
- (void) switchChanged:
- (void) segmentChanged:
- (void) stepperChanged:
- (void) rowTapped:
- (void) badgeColorTapped
- (void) dismissTopModal
- (void) handlePan:
- (unknown) clampedCenter:inBounds:
- (bool) gestureRecognizer:shouldReceiveTouch:
- (id) panelBG
- (void) setPanelBG:
- (id) scrollView
- (void) setScrollView:
- (id) rows
- (void) setRows:
- (id) valueLabels
- (void) setValueLabels:
- (id) badgeSwatch
- (void) setBadgeSwatch:
- (unknown) dragStartCenter
- (void) setDragStartCenter:
- (bool) darkMode
- (void) setDarkMode:
- (void) .cxx_destruct
@end
@interface WCLGHomeTextHeaderWrapperView : UIView
{
}
- (void) layoutSubviews
- (id) hitTest:withEvent:
@end
@interface WCLGHomeTextCardLongPressTarget : NSObject
{
}
+ (id) shared
- (void) onLongPress:
@end
@interface WCLGKeyboardObserver : NSObject
{
}
+ (id) sharedObserver
- (void) updateFromNote:visibleHint:
- (void) keyboardWillShow:
- (void) keyboardWillHide:
- (void) keyboardDidShow:
- (void) keyboardDidHide:
- (void) keyboardWillChangeFrame:
- (void) keyboardDidChangeFrame:
@end
@interface WCLGForegroundReaffirm : NSObject
{
}
+ (id) sharedInstance
- (void) appDidBecomeActive:
@end
@interface WCLGSearchActionTarget : NSObject
{
}
+ (id) sharedTarget
- (void) searchTapped:
@end
@interface WCLGSearchTabBarOverlay : UIView
{
}
- (id) initWithTabBar:
- (bool) isDarkMode
- (id) glassView
- (void) styleGlassControl:glass:
- (id) searchIcon
- (id) badgeRedColor
- (void) applyBadge:dotView:label:
- (void) applyModeBadgeFromItem:fallbackBadge:
- (double) badgeLabelWidthForText:height:
- (void) lightFeedback
- (void) selectionFeedback
- (void) resetControlInteractionState
- (bool) applySystemGlassButtonConfigurationsWithSizeMode:primary:secondary:
- (void) buildSubviews
- (bool) pointInside:withEvent:
- (id) hitTest:withEvent:
- (unsigned long long) currentIndex
- (unsigned long long) nativeIndexForMenuRow:count:
- (void) refreshWithItems:
- (void) layoutSubviews
- (void) optionPressBegan:
- (void) optionPressEnded:
- (void) setMenuVisible:animated:
- (void) setOverlayDisplayed:animated:interactive:
- (void) setOverlayDisplayed:animated:
- (bool) gestureRecognizerShouldBegin:
- (void) modeTapped:
- (void) modePanned:
- (void) searchPanned:
- (void) optionTapped:
- (void) overlayTapped:
- (long long) optionIndexAtPointInMenu:
- (long long) optionIndexAtGesture:
- (long long) optionIndexAtTouch:
- (long long) optionIndexAtOverlayPoint:
- (void) updateOptionHighlights
- (void) touchesBegan:withEvent:
- (void) touchesMoved:withEvent:
- (void) touchesEnded:withEvent:
- (void) touchesCancelled:withEvent:
- (void) modeLongPressed:
- (void) selectIndex:
- (id) tabBar
- (void) setTabBar:
- (id) items
- (void) setItems:
- (id) searchControl
- (void) setSearchControl:
- (id) searchPanGesture
- (void) setSearchPanGesture:
- (id) searchGlass
- (void) setSearchGlass:
- (id) searchIconView
- (void) setSearchIconView:
- (id) searchLabel
- (void) setSearchLabel:
- (id) modeButton
- (void) setModeButton:
- (id) modeGlass
- (void) setModeGlass:
- (id) modeIconView
- (void) setModeIconView:
- (id) modeBadgeDotView
- (void) setModeBadgeDotView:
- (id) modeBadgeLabel
- (void) setModeBadgeLabel:
- (id) menuView
- (void) setMenuView:
- (id) menuGlass
- (void) setMenuGlass:
- (id) menuMaterialView
- (void) setMenuMaterialView:
- (id) optionButtons
- (void) setOptionButtons:
- (long long) highlightedIndex
- (void) setHighlightedIndex:
- (bool) menuVisible
- (void) setMenuVisible:
- (bool) selectingIndex
- (void) setSelectingIndex:
- (bool) menuTouchActive
- (void) setMenuTouchActive:
- (bool) modePanActive
- (void) setModePanActive:
- (bool) searchPanActive
- (void) setSearchPanActive:
- (bool) menuAnchoredToSearch
- (void) setMenuAnchoredToSearch:
- (long long) lastFeedbackHighlightedIndex
- (void) setLastFeedbackHighlightedIndex:
- (bool) overlayDisplayed
- (void) setOverlayDisplayed:
- (bool) overlayInteractionsEnabled
- (void) setOverlayInteractionsEnabled:
- (bool) hasStableTabFrame
- (void) setHasStableTabFrame:
- (unknown) stableTabFrame
- (void) setStableTabFrame:
- (void) .cxx_destruct
@end
@interface WCLGTextEditorViewController : UIViewController
{
}
- (void) dealloc
- (id) initWithTitle:text:placeholder:handler:
- (void) viewDidLoad
- (void) viewDidLayoutSubviews
- (void) layoutTextEditorViews
- (void) viewDidAppear:
- (void) keyboardFrameChanged:
- (void) saveTapped
- (id) initialText
- (void) setInitialText:
- (id) placeholderText
- (void) setPlaceholderText:
- (id) saveHandler
- (void) setSaveHandler:
- (id) textView
- (void) setTextView:
- (id) hintLabel
- (void) setHintLabel:
- (double) keyboardOverlap
- (void) setKeyboardOverlap:
- (void) .cxx_destruct
@end
@interface WCLGSettingsViewController : UIViewController
{
}
- (id) init
- (id) initWithPanel:
+ (id) homeGroupsSettingsController
- (void) wclgDismissModal
- (bool) isDarkMode
- (id) cellBackgroundColor
- (id) primaryTextColor
- (id) secondaryTextColor
- (id) authorizationCellBackgroundColorForAllowed:
- (void) applyAuthorizationBackgroundToCell:allowed:
- (id) gradientColorsA
- (id) gradientColorsB
- (void) setupBackground
- (void) refreshBackground
- (void) startBackgroundAnimations
- (unknown) tableFrameForCurrentBounds
- (void) layoutSettingsTableForCurrentBounds
- (void) viewDidLoad
- (void) viewWillAppear:
- (void) viewDidAppear:
- (void) viewDidLayoutSubviews
- (void) traitCollectionDidChange:
- (void) refreshRootEdgeFadeMaskFrame
- (void) suppressRootNativeEdgeEffectsRecursively:
- (void) refreshRootEdgeFades
- (void) scrollViewDidScroll:
- (void) dismissSettings
- (id) titleForPanel:
- (id) headerViewWithWidth:
- (long long) numberOfSectionsInTableView:
- (long long) tableView:numberOfRowsInSection:
- (bool) tableView:canEditRowAtIndexPath:
- (long long) tableView:editingStyleForRowAtIndexPath:
- (bool) tableView:shouldIndentWhileEditingRowAtIndexPath:
- (bool) tableView:canMoveRowAtIndexPath:
- (id) tableView:targetIndexPathForMoveFromRowAtIndexPath:toProposedIndexPath:
- (void) tableView:moveRowAtIndexPath:toIndexPath:
- (id) tableView:titleForHeaderInSection:
- (double) tableView:heightForHeaderInSection:
- (id) tableView:titleForFooterInSection:
- (double) tableView:heightForFooterInSection:
- (double) rootFooterHeightForTableView:
- (id) tableView:viewForFooterInSection:
- (double) tableView:heightForRowAtIndexPath:
- (id) preparedSettingsCellForTableView:
- (void) configureSwitchCell:switch:title:detail:tag:on:enabled:
- (void) configurePickerCell:title:detail:enabled:
- (void) configureSegmentedCell:title:items:selectedIndex:tag:enabled:
- (id) tabBarIconOffsetDisplayValue:
- (id) tabBarAdjustmentModeTitle:
- (id) tabBarIconOffsetDetailForMode:axis:
- (id) tabBarIconSpacingDetailForMode:
- (void) configureTabBarIconOffsetCell:axis:value:enabled:
- (id) tabBarIconScaleDisplayValue:
- (void) configureTabBarIconScaleCell:value:enabled:
- (id) homeTextMetricDisplayValue:suffix:
- (void) configureHomeTextMetricCell:title:detail:value:minimum:maximum:step:tag:
- (id) displayNameForHomeCardID:
- (void) configureFuncCardStepperCell:title:detail:value:minimum:maximum:step:suffix:tag:
- (id) rootCardWithFrame:title:detail:symbol:tag:enabled:switchView:
- (id) rootGridCellForTableView:indexPath:
- (id) tableView:cellForRowAtIndexPath:
- (void) showOfficialAccountAlert
- (bool) officialAccountReadyForAction
- (void) reconcileDependentFeatureSwitches
- (void) promptRestartForLiquidToggle
- (void) applySMSIconVariantSegment:enabledKey:weightKey:refreshWindows:refreshTopMorphActions:refreshSMSBackChevron:
- (void) segmentedControlChanged:
- (void) toggleSwitch:
- (void) tabBarIconOffsetStepperChanged:
- (void) tabBarIconScaleStepperChanged:
- (void) homeTextMetricStepperChanged:
- (void) funcCardStepperChanged:
- (void) openReleasePage
- (void) promptAddHomeGroup
- (void) promptRenameHomeGroup:
- (void) presentHomeGroupActionsForGroup:atDisplayIndex:
- (void) configureHomeGroupsOffsetSliderCell:value:enabled:
- (void) homeGroupsOffsetSliderChanged:
- (void) homeGroupsOffsetSliderDone:
- (void) configureChatBubbleCompactGapSliderCell:title:key:value:enabled:
- (void) configureChatIndentSliderCell:title:key:value:enabled:
- (void) configureAvatarCardSliderCell:title:key:value:minimum:maximum:enabled:
- (void) chatBubbleCompactGapSliderChanged:
- (void) chatBubbleCompactGapSliderDone:
- (void) configureAvatarScaleSliderCell:title:key:value:enabled:
- (void) avatarScaleSliderChanged:
- (void) avatarScaleSliderDone:
- (void) wclgPresentSingleBubblePositionPicker
- (void) wclgPresentBubblePackPicker
- (id) wclgBubbleActionThumbnailForName:
- (void) wclgAttachBubbleThumbnailForName:toAction:
- (void) wclgPresentBubbleRolePickerSender:dark:
- (void) configureMergeInsetSliderCell:title:detail:key:value:enabled:
- (void) mergeInsetSliderChanged:
- (void) mergeInsetSliderDone:
- (void) configureHomeGroupsGapSliderCell:value:enabled:
- (void) homeGroupsGapSliderChanged:
- (void) homeGroupsGapSliderDone:
- (void) configureHomeGroupsWidthSliderCell:value:enabled:
- (void) homeGroupsWidthSliderChanged:
- (void) homeGroupsWidthSliderDone:
- (void) configureHomeGroupsStripFontSliderCell:value:enabled:
- (void) homeGroupsStripFontSliderChanged:
- (void) homeGroupsStripFontSliderDone:
- (void) configureHomeGroupsStripWidthSliderCell:value:enabled:
- (void) homeGroupsStripWidthSliderChanged:
- (void) homeGroupsStripWidthSliderDone:
- (void) configureHomeGroupsStripOffsetSliderCell:value:enabled:
- (void) homeGroupsStripOffsetSliderChanged:
- (void) homeGroupsStripOffsetSliderDone:
- (id) wclgDefaultExpandedGroupName
- (void) presentHomeGroupsFullscreenEdgePicker
- (id) wclgFullscreenDefaultGroupName
- (void) presentHomeGroupsFullscreenDefaultGroupPicker
- (void) presentHomeGroupsDefaultExpandedPicker
- (void) presentHomeGroupsDefaultActionsAtIndex:
- (void) presentHomeListCardValuePickerWithTitle:message:options:optionTitler:currentValue:onPick:
- (void) configureHomeListCardInsetSliderCell:value:enabled:
- (void) homeListCardInsetSliderChanged:
- (void) homeListCardInsetSliderDone:
- (void) configureHomeCardCornerSliderCell:title:value:key:enabled:
- (void) homeCardCornerSliderChanged:
- (void) homeCardCornerSliderDone:
- (void) presentHomeListCardGapPicker
- (void) pushHomeListCardColorPicker
- (void) presentHomeGroupsTextColorPicker
- (void) pushHomeGroupsPillColorPickerSelected:
- (void) presentHomeGroupsBadgeColorPicker
- (void) pushHomeGroupsStripSelectedColorPicker
- (void) presentHomePinnedBadgeColorPicker
- (void) presentHomeGroupMembersForGroupID:
- (void) rootCardTapped:
- (void) pushHomeTextContentEditor
- (void) pushFunctionCardHTMLEditor
- (void) pushFunctionCardCodeLibrary
- (void) pushFunctionCardURLEditor
- (void) pushHomeCapsulePinnedColorPickerTitle:lightKey:darkKey:lightMode:darkMode:
- (void) pushFunctionCardColorPickerKey:title:
- (void) pushVoiceWaveColorPicker
- (void) pushHomeTextFontSizesEditor
- (void) pushHomeTextFontWeightsEditor
- (void) pushSearchTabBarPlaceholderEditor
- (void) presentSearchTabBarBadgeColorPicker
- (void) pushChatBottomPlaceholderEditor
- (void) pushHomeTextColorPickerWithPurpose:key:darkKey:defaultMode:
- (void) pushPaymentBubbleTextColorPicker
- (void) pushAvatarCardColorPickerTitle:lightKey:darkKey:
- (void) promptAvatarCardTimeFormatForSelf:
- (void) pushChatTextColorPickerForSend:
- (void) pushChatBottomSMSSendColorPicker
- (void) wclgPromptChatTopCapsuleSubtitle
- (void) pushSMSBottomBarIconColorPicker
- (void) openImagePickerWithPurpose:allowsEditing:
- (void) openChatBottomTGAvatarImagePicker
- (void) openHomePinnedMaskImagePickerForDark:
- (void) openHomePinnedMaskDocumentPickerForDark:
- (void) documentPicker:didPickDocumentsAtURLs:
- (void) presentHomePinnedMaskPicker
- (void) openChatWallpaperImagePickerForDarkMode:
- (void) openHomeWallpaperImagePickerForDarkMode:
- (void) presentChatBottomTGAvatarPicker
- (void) presentChatWallpaperPickerForDarkMode:
- (void) presentHomeWallpaperPickerForDarkMode:
- (void) refreshLibraryFooter
- (id) buildImageLibraryFooterWithWidth:category:title:
- (id) currentLibraryCategory
- (void) presentMultiPhotoPickerForLibraryCategory:
- (void) presentMultiDocumentPickerForLibraryCategory:
- (void) finishLibraryBatchAdd:category:
- (void) picker:didFinishPicking:
- (void) imageLibraryAddTapped:
- (void) imageLibraryThumbTapped:
- (void) presentSubtitleIconLibraryActionsForItem:sourceView:
- (void) presentWallpaperHistoryActionsForItem:sourceView:
- (void) presentAvatarLibraryActionsForItem:sourceView:
- (void) afterImageLibraryChanged
- (id) roundedThumbForImage:side:
- (id) displayNameForWxid:
- (void) configureAvatarUserCell:wxid:
- (void) handleAvatarReplaceSelectionAtRow:sourceView:
- (void) imagePickerController:didFinishPickingMediaWithInfo:
- (void) imagePickerControllerDidCancel:
- (void) tableView:didSelectRowAtIndexPath:
- (void) pushTabBarRightSearchSizePicker
- (void) pushSearchTabBarSizePicker
- (void) pushColorPickerOutgoing:
- (void) pushFlowColorPickerStart:
- (void) pushChatTopMorphDefaultPickerForGroup:
- (void) pushBottomGlassModePicker
- (void) pushGlassSizePicker
- (void) showAdminContactAlert
- (id) tableView
- (void) setTableView:
- (id) backgroundContainer
- (void) setBackgroundContainer:
- (id) backgroundGradientA
- (void) setBackgroundGradientA:
- (id) backgroundGradientB
- (void) setBackgroundGradientB:
- (long long) panel
- (void) setPanel:
- (bool) rootTableRevealed
- (void) setRootTableRevealed:
- (id) rootTopFadeView
- (void) setRootTopFadeView:
- (id) rootBottomFadeView
- (void) setRootBottomFadeView:
- (id) rootEdgeFadeMask
- (void) setRootEdgeFadeMask:
- (void) .cxx_destruct
@end
@interface WCLGTabBarVisualHostView : UIVisualEffectView
{
}
@end
@interface WCLGGetButton : UIControl
{
}
- (id) initWithFrame:
- (void) setIdleTitle:icon:
- (void) setDownloading:
- (void) setProgress:
- (void) layoutSubviews
- (void) tapped
- (id) onTap
- (void) setOnTap:
- (id) pill
- (void) setPill:
- (id) pillIcon
- (void) setPillIcon:
- (id) pillLabel
- (void) setPillLabel:
- (id) track
- (void) setTrack:
- (id) ring
- (void) setRing:
- (id) stopSquare
- (void) setStopSquare:
- (bool) downloading
- (void) .cxx_destruct
@end
@interface WCLGImageZoom : UIViewController
{
}
- (id) initWithImage:
- (void) viewDidLoad
- (id) viewForZoomingInScrollView:
- (void) doubleTap:
- (void) dismissSelf
- (id) image
- (void) setImage:
- (id) scroll
- (void) setScroll:
- (id) imageView
- (void) setImageView:
- (void) .cxx_destruct
@end
@interface WCLGThemeDetailViewController : UIViewController
{
}
- (id) initWithTheme:download:
- (void) dealloc
- (void) viewDidLoad
- (id) stateTitle
- (id) stateIcon
- (void) buildContent
- (double) addSubPackagesAtY:width:pad:
- (void) subPackageTapped:
- (void) wclgDismissModal
- (double) addLiveCardPreviewAtY:width:pad:
- (void) layoutLiveCardPreviewForWidth:
- (void) viewDidLayoutSubviews
- (void) loadLiveCardPreview
- (void) renderLiveCardPreviewHTML:generation:
- (void) webView:decidePolicyForNavigationAction:decisionHandler:
- (void) webView:didFinishNavigation:
- (void) webView:didFailNavigation:withError:
- (void) webView:didFailProvisionalNavigation:withError:
- (void) showCardPreviewNavigationError:navigation:inWebView:
- (void) traitCollectionDidChange:
- (double) addSeparatorAtY:width:pad:
- (void) previewTapped:
- (void) startDownload
- (void) primaryButtonTapped
- (id) percentText:
- (id) speedText:
- (void) toast:
- (id) theme
- (void) setTheme:
- (id) downloadHandler
- (void) setDownloadHandler:
- (id) bg
- (void) setBg:
- (id) scroll
- (void) setScroll:
- (id) getButton
- (void) setGetButton:
- (id) speedLabel
- (void) setSpeedLabel:
- (bool) downloadedNow
- (void) setDownloadedNow:
- (bool) readyToApply
- (void) setReadyToApply:
- (bool) appliedNow
- (void) setAppliedNow:
- (id) cardPreviewContainer
- (void) setCardPreviewContainer:
- (id) cardPreviewViewport
- (void) setCardPreviewViewport:
- (id) cardPreviewWebView
- (void) setCardPreviewWebView:
- (id) cardPreviewMediaController
- (void) setCardPreviewMediaController:
- (id) cardPreviewMediaScope
- (void) setCardPreviewMediaScope:
- (id) cardPreviewStatus
- (void) setCardPreviewStatus:
- (id) cardPreviewNavigation
- (void) setCardPreviewNavigation:
- (unsigned long long) cardPreviewGeneration
- (void) setCardPreviewGeneration:
- (double) cardPreviewLayoutWidth
- (void) setCardPreviewLayoutWidth:
- (void) .cxx_destruct
@end
@interface WCLGThemeManageCell : UITableViewCell
{
}
- (id) initWithStyle:reuseIdentifier:
- (void) configureWithItem:active:
- (void) configureNoneForType:active:
- (id) themeIconView
- (void) setThemeIconView:
- (id) nameLabel
- (void) setNameLabel:
- (id) detailLabel
- (void) setDetailLabel:
- (id) activeLabel
- (void) setActiveLabel:
- (id) menuIconView
- (void) setMenuIconView:
- (void) .cxx_destruct
@end
@interface WCLGThemeManageViewController : UIViewController
{
}
- (void) viewDidLoad
- (void) viewWillAppear:
- (void) viewDidLayoutSubviews
- (void) reload
- (void) loadCatalogIconsIfNeeded
- (void) segChanged
- (id) current
- (id) currentType
- (long long) activeThemeId
- (bool) isActiveItem:
- (void) updateCurrentStatus
- (void) updateEmpty
- (long long) tableView:numberOfRowsInSection:
- (id) tableView:cellForRowAtIndexPath:
- (void) tableView:didSelectRowAtIndexPath:
- (void) deactivateCurrentTheme
- (void) presentActionsForTheme:sourceView:
- (void) confirmRevoke:
- (void) applyTheme:
- (void) removeLocal:
- (void) revoke:
- (void) toast:
- (void) dismissSelf
- (id) seg
- (void) setSeg:
- (id) segBar
- (void) setSegBar:
- (id) currentLabel
- (void) setCurrentLabel:
- (id) bg
- (void) setBg:
- (id) tableView
- (void) setTableView:
- (id) emptyLabel
- (void) setEmptyLabel:
- (id) bubbles
- (void) setBubbles:
- (id) cards
- (void) setCards:
- (id) catalogIconURLs
- (void) setCatalogIconURLs:
- (bool) loadingCatalogIcons
- (void) setLoadingCatalogIcons:
- (bool) catalogIconsLoaded
- (void) setCatalogIconsLoaded:
- (void) .cxx_destruct
- (long long) tableView:numberOfRowsInSection:
- (long long) tableView:numberOfRowsInSection:
- (id) tableView:cellForRowAtIndexPath:
- (id) tableView:cellForRowAtIndexPath:
@end
@interface WCLGVoiceWaveView : UIView
{
}
- (id) initWithFrame:
- (id) wclgColorForStatus:
- (void) wclgApplyColors
- (void) dealloc
- (unknown) wclgBarsArea
- (void) layoutSubviews
- (void) wclgLayoutBarsWithProvider:
- (void) setStatus:
- (void) setBaseColor:
- (void) setLockColor:
- (void) startRecording
- (void) stopRecording
- (void) wclgTick:
- (long long) status
- (id) baseColor
- (bool) lockColor
- (id) bars
- (void) setBars:
- (id) timeLabel
- (void) setTimeLabel:
- (id) link
- (void) setLink:
- (double) startTime
- (void) setStartTime:
- (long long) lastWholeSecond
- (void) setLastWholeSecond:
- (void) .cxx_destruct
@end
