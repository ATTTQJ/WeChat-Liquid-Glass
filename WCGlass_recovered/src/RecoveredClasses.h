#pragma once
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/* Automatically reconstructed from Objective-C runtime metadata. */

@interface WCLGChatPinnedHitCatcher : UIView
- (id)hitTest:(id)arg0 withEvent:(id)arg1;
@end

@interface WCLGSMSBackContentView : UIView
{
    UIImageView * _chevronView; // @"UIImageView"
    UIView * _badgeView; // @"UIView"
    UILabel * _countLabel; // @"UILabel"
    NSString * _countText; // @"NSString"
}
- (id)initWithFrame:(id)arg0;
- (id)updateChevron:(id)arg0 count:(id)arg1;
- (id)layoutSubviews;
- (id)chevronView;
- (id)setChevronView:(id)arg0;
- (id)badgeView;
- (id)setBadgeView:(id)arg0;
- (id)countLabel;
- (id)setCountLabel:(id)arg0;
- (id)countText;
- (id)setCountText:(id)arg0;
@end

@interface WCLGVoiceHoldRecognizer : UIGestureRecognizer
{
    MMInputToolView * _toolView; // @"MMInputToolView"
    BOOL _recording; // B
    NSSet * _pendingTouches; // @"NSSet"
    UIEvent * _pendingEvent; // @"UIEvent"
    id /* block */ _holdBlock; // @?
    WCLGVoiceWaveView * _waveView; // @"WCLGVoiceWaveView"
    UIView * _dimmedTextView; // @"UIView"
    UIColor * _savedTextColor; // @"UIColor"
    UIColor * _savedTintColor; // @"UIColor"
    UILabel * _hintFloatLabel; // @"UILabel"
    UIColor * _waveBaseColor; // @"UIColor"
    BOOL _waveLockColor; // B
    CGPoint _startLocationInWindow; // {CGPoint="x"d"y"d}
}
- (id)wclgNoop;
- (id)wclgCancelHoldBlock;
- (id)wclgResolvedToolView;
- (id)wclgMountWaveViewOnToolView:(id)arg0;
- (id)wclgMountHintAboveInputWithAnchor:(id)arg0 toolView:(id)arg1;
- (id)wclgTeardownWaveView;
- (id)wclgUpdateWaveStatusForTouches:(id)arg0;
- (id)wclgBeginRecording;
- (id)touchesBegan:(id)arg0 withEvent:(id)arg1;
- (id)touchesMoved:(id)arg0 withEvent:(id)arg1;
- (id)touchesEnded:(id)arg0 withEvent:(id)arg1;
- (id)touchesCancelled:(id)arg0 withEvent:(id)arg1;
- (id)reset;
- (id)toolView;
- (id)setToolView:(id)arg0;
- (id)recording;
- (id)setRecording:(id)arg0;
- (id)pendingTouches;
- (id)setPendingTouches:(id)arg0;
- (id)pendingEvent;
- (id)setPendingEvent:(id)arg0;
- (id)holdBlock;
- (id)setHoldBlock:(id)arg0;
- (id)waveView;
- (id)setWaveView:(id)arg0;
- (id)dimmedTextView;
- (id)setDimmedTextView:(id)arg0;
- (id)savedTextColor;
- (id)setSavedTextColor:(id)arg0;
- (id)savedTintColor;
- (id)setSavedTintColor:(id)arg0;
- (id)hintFloatLabel;
- (id)setHintFloatLabel:(id)arg0;
- (id)waveBaseColor;
- (id)setWaveBaseColor:(id)arg0;
- (id)waveLockColor;
- (id)setWaveLockColor:(id)arg0;
- (id)startLocationInWindow;
- (id)setStartLocationInWindow:(id)arg0;
@end

@interface WCLGMsgMergeCellHotCache : NSObject
{
    UIView * _cell; // @"UIView"
    UITableViewCell * _containerCell; // @"UITableViewCell"
    id _viewModel; // @
    id _wrap; // @
    UIView * _avatarView; // @"UIView"
    UIView * _primaryBubbleView; // @"UIView"
    UIView * _structureRootBubbleView; // @"UIView"
    UIView * _bottomBubbleView; // @"UIView"
    UIView * _lowestContentView; // @"UIView"
    NSUInteger _structureSignature; // Q
    BOOL _structureScanned; // B
    BOOL _splitPositionHandled; // B
    NSInteger _splitPosition; // q
    unsigned char _splitZeroChecks; // C
    unsigned int _layoutPassCount; // I
    unsigned int _nextStructureValidationPass; // I
    NSInteger _themeAssetRenderedPosition; // q
    BOOL _checkThemePositionOnFirstLayout; // B
    unsigned char _themeAssetRefreshRetries; // C
    unsigned char _wrapSource; // C
}
@end

@interface WCLGAvatarPickerHandler : NSObject
{
    NSString * _wxid; // @"NSString"
    id /* block */ _onDone; // @?
    id _retainSelf; // @
}
- (id)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1;
- (id)imagePickerControllerDidCancel:(id)arg0;
- (id)wxid;
- (id)setWxid:(id)arg0;
- (id)onDone;
- (id)setOnDone:(id)arg0;
- (id)retainSelf;
- (id)setRetainSelf:(id)arg0;
@end

@interface WCLGImageLibraryPickerViewController : UIViewController
{
    NSString * _category; // @"NSString"
    id /* block */ _onPick; // @?
    NSArray * _items; // @"NSArray"
    UICollectionView * _collectionView; // @"UICollectionView"
    UILabel * _emptyLabel; // @"UILabel"
}
- (id)initWithCategory:(id)arg0 title:(id)arg1 onPick:(id)arg2;
- (id)viewDidLoad;
- (id)closeTapped;
- (id)collectionView:(id)arg0 numberOfItemsInSection:(id)arg1;
- (id)collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (id)category;
- (id)setCategory:(id)arg0;
- (id)onPick;
- (id)setOnPick:(id)arg0;
- (id)items;
- (id)setItems:(id)arg0;
- (id)collectionView;
- (id)setCollectionView:(id)arg0;
- (id)emptyLabel;
- (id)setEmptyLabel:(id)arg0;
- (id)collectionView:(id)arg0 numberOfItemsInSection:(id)arg1;
- (id)collectionView:(id)arg0 numberOfItemsInSection:(id)arg1;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
@end

@interface WCLGChatAvatarMenuDelegate : NSObject
{
    id _cell; // @
    UIView * _headView; // @"UIView"
    NSString * _frozenWxid; // @"NSString"
    NSString * _frozenChatRoomId; // @"NSString"
    id _frozenWrap; // @
}
- (id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(id)arg1;
- (id)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2;
- (id)cell;
- (id)setCell:(id)arg0;
- (id)headView;
- (id)setHeadView:(id)arg0;
- (id)frozenWxid;
- (id)setFrozenWxid:(id)arg0;
- (id)frozenChatRoomId;
- (id)setFrozenChatRoomId:(id)arg0;
- (id)frozenWrap;
- (id)setFrozenWrap:(id)arg0;
- (id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(id)arg1;
- (id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(id)arg1;
@end

@interface WCLGChatBottomSMSProxySendTarget : NSObject
- (id)wclg_smsSendTapped:(id)arg0;
- (id)wclg_smsMoreTapped:(id)arg0;
- (id)wclg_smsEmojiTapped:(id)arg0;
- (id)wclg_smsVoiceTapped:(id)arg0;
@end

@interface WCLGChatTextTarget : NSObject
{
    BOOL _richText; // B
    BOOL _explicitExternalTarget; // B
    BOOL _capturedLabelOriginals; // B
    BOOL _capturedRichTextOriginal; // B
    UIView * _view; // @"UIView"
    UIColor * _lastAppliedColor; // @"UIColor"
    UIColor * _originalTextColor; // @"UIColor"
    UIColor * _originalRichTextColor; // @"UIColor"
    NSAttributedString * _originalAttributedText; // @"NSAttributedString"
    NSUInteger _lastTextObject; // Q
    NSUInteger _lastAttributedObject; // Q
    NSUInteger _lastTextLength; // Q
    NSUInteger _lastAttributedLength; // Q
}
- (id)view;
- (id)setView:(id)arg0;
- (id)richText;
- (id)setRichText:(id)arg0;
- (id)explicitExternalTarget;
- (id)setExplicitExternalTarget:(id)arg0;
- (id)lastAppliedColor;
- (id)setLastAppliedColor:(id)arg0;
- (id)originalTextColor;
- (id)setOriginalTextColor:(id)arg0;
- (id)originalRichTextColor;
- (id)setOriginalRichTextColor:(id)arg0;
- (id)originalAttributedText;
- (id)setOriginalAttributedText:(id)arg0;
- (id)capturedLabelOriginals;
- (id)setCapturedLabelOriginals:(id)arg0;
- (id)capturedRichTextOriginal;
- (id)setCapturedRichTextOriginal:(id)arg0;
- (id)lastTextObject;
- (id)setLastTextObject:(id)arg0;
- (id)lastAttributedObject;
- (id)setLastAttributedObject:(id)arg0;
- (id)lastTextLength;
- (id)setLastTextLength:(id)arg0;
- (id)lastAttributedLength;
- (id)setLastAttributedLength:(id)arg0;
@end

@interface WCLGChatTextApplyState : NSObject
{
    BOOL _resolvedDarkMode; // B
    BOOL _resolvedOutgoing; // B
    BOOL _resolvedPayment; // B
    NSUInteger _viewModelToken; // Q
    NSUInteger _stableIdentityHash; // Q
    NSUInteger _identityGeneration; // Q
    NSUInteger _contentGeneration; // Q
    NSUInteger _targetGeneration; // Q
    NSUInteger _layoutGeneration; // Q
    NSUInteger _layoutDepth; // Q
    NSUInteger _lastAppliedLayoutGeneration; // Q
    NSUInteger _lastApplySignature; // Q
    NSUInteger _targetStructureSignature; // Q
    NSUInteger _contentSignature; // Q
    NSUInteger _nextFallbackScanLayoutGeneration; // Q
    UIView * _contentView; // @"UIView"
    UIView * _bodyView; // @"UIView"
    NSArray * _targets; // @"NSArray"
    NSUInteger _resolvedColorSignature; // Q
    UIColor * _resolvedColor; // @"UIColor"
}
- (id)init;
- (id)viewModelToken;
- (id)setViewModelToken:(id)arg0;
- (id)stableIdentityHash;
- (id)setStableIdentityHash:(id)arg0;
- (id)identityGeneration;
- (id)setIdentityGeneration:(id)arg0;
- (id)contentGeneration;
- (id)setContentGeneration:(id)arg0;
- (id)targetGeneration;
- (id)setTargetGeneration:(id)arg0;
- (id)layoutGeneration;
- (id)setLayoutGeneration:(id)arg0;
- (id)layoutDepth;
- (id)setLayoutDepth:(id)arg0;
- (id)lastAppliedLayoutGeneration;
- (id)setLastAppliedLayoutGeneration:(id)arg0;
- (id)lastApplySignature;
- (id)setLastApplySignature:(id)arg0;
- (id)targetStructureSignature;
- (id)setTargetStructureSignature:(id)arg0;
- (id)contentSignature;
- (id)setContentSignature:(id)arg0;
- (id)nextFallbackScanLayoutGeneration;
- (id)setNextFallbackScanLayoutGeneration:(id)arg0;
- (id)contentView;
- (id)setContentView:(id)arg0;
- (id)bodyView;
- (id)setBodyView:(id)arg0;
- (id)targets;
- (id)setTargets:(id)arg0;
- (id)resolvedColorSignature;
- (id)setResolvedColorSignature:(id)arg0;
- (id)resolvedDarkMode;
- (id)setResolvedDarkMode:(id)arg0;
- (id)resolvedOutgoing;
- (id)setResolvedOutgoing:(id)arg0;
- (id)resolvedPayment;
- (id)setResolvedPayment:(id)arg0;
- (id)resolvedColor;
- (id)setResolvedColor:(id)arg0;
@end

@interface WCLGBubbleFlushDriver : NSObject
{
    CADisplayLink * _link; // @"CADisplayLink"
}
+ (id)shared;
- (id)kick;
- (id)tick:(id)arg0;
- (id)link;
- (id)setLink:(id)arg0;
@end

@interface WCLGNativeProfileTitleHitView : UIView
{
    id /* encoded: {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} */ _wclgHitRect; // {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}}
    BOOL _wclgCircularHitTest; // B
}
- (id)initWithFrame:(id)arg0;
- (id)pointInside:(id)arg0 withEvent:(id)arg1;
- (id)wclgHitRect;
- (id)setWclgHitRect:(id)arg0;
- (id)wclgCircularHitTest;
- (id)setWclgCircularHitTest:(id)arg0;
@end

@interface WCLGNativeProfileTitleTapTarget : NSObject
{
    UIViewController * _controller; // @"UIViewController"
}
- (id)wclg_nativeProfileTitleTapped:(id)arg0;
- (id)controller;
- (id)setController:(id)arg0;
@end

@interface WCLGCapsuleSearchGestureTarget : NSObject
+ (id)shared;
- (id)handleLongPress:(id)arg0;
@end

@interface WCLGChatTopCapsuleHostView : UIView
{
    UILabel * _titleLabel; // @"UILabel"
    UILabel * _subtitleLabel; // @"UILabel"
    UIImageView * _subtitleIconView; // @"UIImageView"
    UIView * _avatarView; // @"UIView"
    BOOL _avatarOnLeft; // B
    NSString * _cachedTitle; // @"NSString"
    UIViewController * _controller; // @"UIViewController"
}
- (id)initWithFrame:(id)arg0;
- (id)setAvatarView:(id)arg0;
- (id)layoutSubviews;
- (id)wclg_handleTap;
- (id)cachedTitle;
- (id)setCachedTitle:(id)arg0;
- (id)titleLabel;
- (id)setTitleLabel:(id)arg0;
- (id)subtitleLabel;
- (id)setSubtitleLabel:(id)arg0;
- (id)subtitleIconView;
- (id)setSubtitleIconView:(id)arg0;
- (id)avatarView;
- (id)controller;
- (id)setController:(id)arg0;
- (id)avatarOnLeft;
- (id)setAvatarOnLeft:(id)arg0;
@end

@interface WCLGChatTopFadeOverlayHost : UIView
{
    WCLGEdgeEffectView * _edgeView; // @"WCLGEdgeEffectView"
    UITableView * _scrollView; // @"UITableView"
    NSInteger _overlayMode; // q
}
- (id)initWithFrame:(id)arg0;
- (id)layoutSubviews;
- (id)scrollView;
- (id)setScrollView:(id)arg0;
- (id)overlayMode;
- (id)setOverlayMode:(id)arg0;
- (id)edgeView;
- (id)setEdgeView:(id)arg0;
@end

@interface WCLGChatBottomFadeOverlayHost : UIView
{
    double _configuredBlurRadius; // d
    WCLGEdgeEffectView * _edgeView; // @"WCLGEdgeEffectView"
    UITableView * _scrollView; // @"UITableView"
}
- (id)initWithFrame:(id)arg0;
- (id)layoutSubviews;
- (id)scrollView;
- (id)setScrollView:(id)arg0;
- (id)edgeView;
- (id)setEdgeView:(id)arg0;
- (id)configuredBlurRadius;
- (id)setConfiguredBlurRadius:(id)arg0;
@end

@interface WCLGChatTopMorphMenuView : UIView
{
    UIVisualEffectView * _effectView; // @"UIVisualEffectView"
    NSInteger _highlightedIndex; // q
    UIViewController * _controller; // @"UIViewController"
    BOOL _isGroup; // B
    id /* block */ _selectionHandler; // @?
    NSArray * _rowViews; // @"NSArray"
}
- (id)initWithFrame:(id)arg0;
- (id)layoutSubviews;
- (id)reloadRows;
- (id)handleMenuTap:(id)arg0;
- (id)setHighlightedIndex:(id)arg0;
- (id)indexForPoint:(id)arg0;
- (id)controller;
- (id)setController:(id)arg0;
- (id)isGroup;
- (id)setIsGroup:(id)arg0;
- (id)highlightedIndex;
- (id)selectionHandler;
- (id)setSelectionHandler:(id)arg0;
- (id)effectView;
- (id)setEffectView:(id)arg0;
- (id)rowViews;
- (id)setRowViews:(id)arg0;
@end

@interface WCLGChatTopAvatarOverlayView : UIImageView
- (id)layoutSubviews;
@end

@interface WCLGChatTopMorphHostView : UIView
{
    UIImageView * _iconView; // @"UIImageView"
    UIViewController * _controller; // @"UIViewController"
    BOOL _avatarOnlyMode; // B
    UIImage * _cachedAvatarImage; // @"UIImage"
    NSInteger _cachedAvatarToken; // q
    BOOL _isGroup; // B
    NSInteger _defaultAction; // q
    BOOL _ready; // B
    WCLGChatTopMorphMenuView * _menuView; // @"WCLGChatTopMorphMenuView"
    BOOL _menuVisible; // B
    BOOL _longPressActive; // B
}
- (id)initWithFrame:(id)arg0;
- (id)updateChrome;
- (id)layoutSubviews;
- (id)traitCollectionDidChange:(id)arg0;
- (id)handleTap:(id)arg0;
- (id)menuContainerView;
- (id)showMenuFromHost;
- (id)hideMenu;
- (id)handleLongPress:(id)arg0;
- (id)controller;
- (id)setController:(id)arg0;
- (id)avatarOnlyMode;
- (id)setAvatarOnlyMode:(id)arg0;
- (id)cachedAvatarImage;
- (id)setCachedAvatarImage:(id)arg0;
- (id)cachedAvatarToken;
- (id)setCachedAvatarToken:(id)arg0;
- (id)isGroup;
- (id)setIsGroup:(id)arg0;
- (id)defaultAction;
- (id)setDefaultAction:(id)arg0;
- (id)ready;
- (id)setReady:(id)arg0;
- (id)iconView;
- (id)setIconView:(id)arg0;
- (id)menuView;
- (id)setMenuView:(id)arg0;
- (id)menuVisible;
- (id)setMenuVisible:(id)arg0;
- (id)longPressActive;
- (id)setLongPressActive:(id)arg0;
@end

@interface WCLGCodeLibraryEntry : NSObject
{
    NSString * _entryId; // @"NSString"
    NSString * _name; // @"NSString"
    NSUInteger _charCount; // Q
    NSDate * _createdAt; // @"NSDate"
}
- (id)entryId;
- (id)setEntryId:(id)arg0;
- (id)name;
- (id)setName:(id)arg0;
- (id)charCount;
- (id)setCharCount:(id)arg0;
- (id)createdAt;
- (id)setCreatedAt:(id)arg0;
@end

@interface WCLGCodeLibraryViewController : UITableViewController
{
    id /* block */ _onApply; // @?
    id /* block */ _onChange; // @?
    NSMutableArray * _entries; // @"NSMutableArray"
    NSString * _activeEntryId; // @"NSString"
    UIBarButtonItem * _addButton; // @"UIBarButtonItem"
    UIBarButtonItem * _selectButton; // @"UIBarButtonItem"
    UIBarButtonItem * _selectAllButton; // @"UIBarButtonItem"
    UIBarButtonItem * _clearAllButton; // @"UIBarButtonItem"
    UIBarButtonItem * _deleteButton; // @"UIBarButtonItem"
    UILabel * _emptyLabel; // @"UILabel"
}
- (id)initWithApplyHandler:(id)arg0 onChange:(id)arg1;
- (id)viewDidLoad;
- (id)viewWillAppear:(id)arg0;
- (id)viewWillDisappear:(id)arg0;
- (id)reloadEntries;
- (id)notifyChange;
+ (id)dateFormatter;
- (id)toggleEditingTapped;
- (id)setEditing:(id)arg0 animated:(id)arg1;
- (id)updateToolbarState;
- (id)selectAllTapped;
- (id)deleteSelectedTapped;
- (id)clearAllTapped;
- (id)closeTapped;
- (id)applyEntryAtRow:(id)arg0;
- (id)presentRenameForRow:(id)arg0;
- (id)deleteEntryAtRow:(id)arg0;
- (id)addTapped;
- (id)saveCurrentInUse;
- (id)importFromFiles;
- (id)documentPicker:(id)arg0 didPickDocumentsAtURLs:(id)arg1;
- (id)tableView:(id)arg0 numberOfRowsInSection:(id)arg1;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (id)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1;
- (id)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1;
- (id)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1;
- (id)tableView:(id)arg0 canMoveRowAtIndexPath:(id)arg1;
- (id)tableView:(id)arg0 moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (id)tableView:(id)arg0 contextMenuConfigurationForRowAtIndexPath:(id)arg1 point:(id)arg2;
- (id)tableView:(id)arg0 titleForFooterInSection:(id)arg1;
- (id)onApply;
- (id)setOnApply:(id)arg0;
- (id)onChange;
- (id)setOnChange:(id)arg0;
- (id)entries;
- (id)setEntries:(id)arg0;
- (id)activeEntryId;
- (id)setActiveEntryId:(id)arg0;
- (id)addButton;
- (id)setAddButton:(id)arg0;
- (id)selectButton;
- (id)setSelectButton:(id)arg0;
- (id)selectAllButton;
- (id)setSelectAllButton:(id)arg0;
- (id)clearAllButton;
- (id)setClearAllButton:(id)arg0;
- (id)deleteButton;
- (id)setDeleteButton:(id)arg0;
- (id)emptyLabel;
- (id)setEmptyLabel:(id)arg0;
@end

@interface WCLGColorPickerBackgroundView : UIView
+ (id)layerClass;
- (id)layoutSubviews;
@end

@interface WCLGColorCanvasView : UIView
{
    double _hue; // d
    CALayer * _hueLayer; // @"CALayer"
    CAGradientLayer * _whiteLayer; // @"CAGradientLayer"
    CAGradientLayer * _blackLayer; // @"CAGradientLayer"
}
- (id)initWithFrame:(id)arg0;
- (id)setHue:(id)arg0;
- (id)layoutSubviews;
- (id)hueLayer;
- (id)setHueLayer:(id)arg0;
- (id)whiteLayer;
- (id)setWhiteLayer:(id)arg0;
- (id)blackLayer;
- (id)setBlackLayer:(id)arg0;
- (id)hue;
@end

@interface WCLGHueBarView : UIView
+ (id)layerClass;
- (id)initWithFrame:(id)arg0;
- (id)layoutSubviews;
@end

@interface WCLGColorPickerViewController : UIViewController
{
    NSInteger _purpose; // q
    BOOL _outgoing; // B
    id /* block */ _selectionHandler; // @?
    NSInteger _lightMode; // q
    NSInteger _darkMode; // q
    BOOL _dualAppearanceMode; // B
    BOOL _editingDarkAppearance; // B
    id /* block */ _dualSelectionHandler; // @?
    NSString * _explicitTitle; // @"NSString"
    BOOL _hasExplicitInitialMode; // B
    NSInteger _explicitInitialMode; // q
    double _red; // d
    double _green; // d
    double _blue; // d
    double _alpha; // d
    WCLGColorPickerBackgroundView * _backgroundView; // @"WCLGColorPickerBackgroundView"
    UIScrollView * _scrollView; // @"UIScrollView"
    UIView * _contentView; // @"UIView"
    UILabel * _pickerHeaderLabel; // @"UILabel"
    UILabel * _paletteHeaderLabel; // @"UILabel"
    UILabel * _commonHeaderLabel; // @"UILabel"
    UIView * _controlCard; // @"UIView"
    UIView * _paletteCard; // @"UIView"
    UIView * _commonCard; // @"UIView"
    UILabel * _hexLabel; // @"UILabel"
    UILabel * _hexHintLabel; // @"UILabel"
    UITextField * _hexField; // @"UITextField"
    UIView * _previewView; // @"UIView"
    WCLGColorCanvasView * _canvasView; // @"WCLGColorCanvasView"
    WCLGHueBarView * _hueBarView; // @"WCLGHueBarView"
    UIView * _canvasKnob; // @"UIView"
    UIView * _hueKnob; // @"UIView"
    NSArray * _channelLabels; // @"NSArray"
    NSArray * _channelSliders; // @"NSArray"
    NSArray * _channelFields; // @"NSArray"
    UIScrollView * _paletteScrollView; // @"UIScrollView"
    NSArray * _paletteButtons; // @"NSArray"
    NSArray * _paletteModes; // @"NSArray"
    NSArray * _commonButtons; // @"NSArray"
    NSArray * _commonLabels; // @"NSArray"
    NSArray * _commonModes; // @"NSArray"
    UISegmentedControl * _appearanceControl; // @"UISegmentedControl"
    UILabel * _currentTitleLabel; // @"UILabel"
    UILabel * _currentHexLabel; // @"UILabel"
    UIView * _currentDot; // @"UIView"
    double _hue; // d
    double _saturation; // d
    double _brightness; // d
    NSInteger _pendingMode; // q
    BOOL _updatingUI; // B
    BOOL _savedPopGestureEnabled; // B
}
- (id)initOutgoing:(id)arg0 handler:(id)arg1;
- (id)initPurpose:(id)arg0 handler:(id)arg1;
- (id)initPurpose:(id)arg0 lightMode:(id)arg1 darkMode:(id)arg2 handler:(id)arg3;
- (id)initSMSBottomBarIconLightMode:(id)arg0 darkMode:(id)arg1 handler:(id)arg2;
- (id)initTitle:(id)arg0 initialMode:(id)arg1 handler:(id)arg2;
- (id)initTitle:(id)arg0 lightMode:(id)arg1 darkMode:(id)arg2 handler:(id)arg3;
- (id)isDarkMode;
- (id)titleForPurpose;
- (id)currentMode;
- (id)componentsForMode:(id)arg0 red:(id)arg1 green:(id)arg2 blue:(id)arg3 alpha:(id)arg4;
- (id)loadCurrentColor;
- (id)updateHSVFromRGBPreservingHue:(id)arg0;
- (id)updateRGBFromHSV;
- (id)markCustomMode;
- (id)storeCurrentModeForActiveAppearance;
- (id)currentHexString;
- (id)primaryTextColor;
- (id)secondaryTextColor;
- (id)cardColor;
- (id)makeCard;
- (id)sectionLabelWithText:(id)arg0;
- (id)numberFieldWithTag:(id)arg0;
- (id)swatchImageForColor:(id)arg0 diameter:(id)arg1;
- (id)defaultPaletteModes;
- (id)commonColorModes;
- (id)commonColorNames;
- (id)colorForMode:(id)arg0;
- (id)viewDidLoad;
- (id)viewDidAppear:(id)arg0;
- (id)viewWillDisappear:(id)arg0;
- (id)viewDidLayoutSubviews;
- (id)traitCollectionDidChange:(id)arg0;
- (id)refreshThemeColors;
- (id)layoutPickerViews;
- (id)layoutPaletteButtonsWithWidth:(id)arg0;
- (id)layoutCommonRowsWithWidth:(id)arg0;
- (id)updateUI;
- (id)updateKnobFrames;
- (id)confirmColor;
- (id)appearanceSegmentChanged:(id)arg0;
- (id)applyMode:(id)arg0;
- (id)channelSliderChanged:(id)arg0;
- (id)canvasGestureChanged:(id)arg0;
- (id)hueGestureChanged:(id)arg0;
- (id)paletteButtonTapped:(id)arg0;
- (id)commonButtonTapped:(id)arg0;
- (id)parseHexString:(id)arg0 red:(id)arg1 green:(id)arg2 blue:(id)arg3 alpha:(id)arg4;
- (id)hexEditingDidEnd:(id)arg0;
- (id)numberFieldEditingDidEnd:(id)arg0;
- (id)textFieldShouldReturn:(id)arg0;
- (id)outgoing;
- (id)setOutgoing:(id)arg0;
- (id)purpose;
- (id)setPurpose:(id)arg0;
- (id)selectionHandler;
- (id)setSelectionHandler:(id)arg0;
- (id)dualSelectionHandler;
- (id)setDualSelectionHandler:(id)arg0;
- (id)backgroundView;
- (id)setBackgroundView:(id)arg0;
- (id)scrollView;
- (id)setScrollView:(id)arg0;
- (id)contentView;
- (id)setContentView:(id)arg0;
- (id)pickerHeaderLabel;
- (id)setPickerHeaderLabel:(id)arg0;
- (id)paletteHeaderLabel;
- (id)setPaletteHeaderLabel:(id)arg0;
- (id)commonHeaderLabel;
- (id)setCommonHeaderLabel:(id)arg0;
- (id)controlCard;
- (id)setControlCard:(id)arg0;
- (id)paletteCard;
- (id)setPaletteCard:(id)arg0;
- (id)commonCard;
- (id)setCommonCard:(id)arg0;
- (id)hexLabel;
- (id)setHexLabel:(id)arg0;
- (id)hexHintLabel;
- (id)setHexHintLabel:(id)arg0;
- (id)hexField;
- (id)setHexField:(id)arg0;
- (id)previewView;
- (id)setPreviewView:(id)arg0;
- (id)canvasView;
- (id)setCanvasView:(id)arg0;
- (id)hueBarView;
- (id)setHueBarView:(id)arg0;
- (id)canvasKnob;
- (id)setCanvasKnob:(id)arg0;
- (id)hueKnob;
- (id)setHueKnob:(id)arg0;
- (id)channelLabels;
- (id)setChannelLabels:(id)arg0;
- (id)channelSliders;
- (id)setChannelSliders:(id)arg0;
- (id)channelFields;
- (id)setChannelFields:(id)arg0;
- (id)paletteScrollView;
- (id)setPaletteScrollView:(id)arg0;
- (id)paletteButtons;
- (id)setPaletteButtons:(id)arg0;
- (id)paletteModes;
- (id)setPaletteModes:(id)arg0;
- (id)commonButtons;
- (id)setCommonButtons:(id)arg0;
- (id)commonLabels;
- (id)setCommonLabels:(id)arg0;
- (id)commonModes;
- (id)setCommonModes:(id)arg0;
- (id)appearanceControl;
- (id)setAppearanceControl:(id)arg0;
- (id)currentTitleLabel;
- (id)setCurrentTitleLabel:(id)arg0;
- (id)currentHexLabel;
- (id)setCurrentHexLabel:(id)arg0;
- (id)currentDot;
- (id)setCurrentDot:(id)arg0;
- (id)red;
- (id)setRed:(id)arg0;
- (id)green;
- (id)setGreen:(id)arg0;
- (id)blue;
- (id)setBlue:(id)arg0;
- (id)alpha;
- (id)setAlpha:(id)arg0;
- (id)hue;
- (id)setHue:(id)arg0;
- (id)saturation;
- (id)setSaturation:(id)arg0;
- (id)brightness;
- (id)setBrightness:(id)arg0;
- (id)pendingMode;
- (id)setPendingMode:(id)arg0;
- (id)lightMode;
- (id)setLightMode:(id)arg0;
- (id)darkMode;
- (id)setDarkMode:(id)arg0;
- (id)dualAppearanceMode;
- (id)setDualAppearanceMode:(id)arg0;
- (id)editingDarkAppearance;
- (id)setEditingDarkAppearance:(id)arg0;
- (id)updatingUI;
- (id)setUpdatingUI:(id)arg0;
- (id)savedPopGestureEnabled;
- (id)setSavedPopGestureEnabled:(id)arg0;
- (id)explicitTitle;
- (id)setExplicitTitle:(id)arg0;
- (id)hasExplicitInitialMode;
- (id)setHasExplicitInitialMode:(id)arg0;
- (id)explicitInitialMode;
- (id)setExplicitInitialMode:(id)arg0;
@end

@interface WCLGConfig : NSObject
{
    NSMutableDictionary * _cache; // @"NSMutableDictionary"
    NSMutableSet * _dirtyKeys; // @"NSMutableSet"
    id /* encoded: {os_unfair_lock_s="_os_unfair_lock_opaque"I} */ _lock; // {os_unfair_lock_s="_os_unfair_lock_opaque"I}
    BOOL _flushScheduled; // B
}
+ (id)sharedConfig;
- (id)init;
- (id)dealloc;
- (id)primeDefaults;
- (id)refreshAtomicMirrors;
- (id)maybeUpdateMirrorForKey:(id)arg0 value:(id)arg1;
- (id)cachedObjectForKey:(id)arg0;
- (id)setCachedObject:(id)arg0 forKey:(id)arg1;
- (id)flushScheduled;
- (id)boolForKey:(id)arg0;
- (id)boolForKey:(id)arg0 defaultValue:(id)arg1;
- (id)integerForKey:(id)arg0;
- (id)integerForKey:(id)arg0 defaultValue:(id)arg1;
- (id)doubleForKey:(id)arg0;
- (id)objectForKey:(id)arg0;
- (id)setBool:(id)arg0 forKey:(id)arg1;
- (id)setLiquidGlassPersistedPendingValue:(id)arg0;
- (id)setInteger:(id)arg0 forKey:(id)arg1;
- (id)setDouble:(id)arg0 forKey:(id)arg1;
- (id)setObject:(id)arg0 forKey:(id)arg1;
- (id)hasValueForKey:(id)arg0;
- (id)tabBarIconOffsetXForSizeMode:(id)arg0;
- (id)tabBarIconOffsetYForSizeMode:(id)arg0;
- (id)tabBarIconSpacingForSizeMode:(id)arg0;
- (id)setTabBarIconOffsetX:(id)arg0 forSizeMode:(id)arg1;
- (id)setTabBarIconOffsetY:(id)arg0 forSizeMode:(id)arg1;
- (id)setTabBarIconSpacing:(id)arg0 forSizeMode:(id)arg1;
- (id)tabBarIconScaleForSizeMode:(id)arg0;
- (id)setTabBarIconScale:(id)arg0 forSizeMode:(id)arg1;
- (id)liquidGlassEnabled;
- (id)compatEnabled;
- (id)hideTitlesEnabled;
- (id)chatBottomGlassEnabled;
- (id)chatBottomSMSHideEmojiIconEnabled;
- (id)chatBottomHoldKeyToTalkEnabled;
- (id)chatBottomVoiceWaveColorLock;
- (id)chatAvatarGestureEnabled;
- (id)chatAvatarGestureTrigger;
- (id)chatBottomSMSUseMessageIconsEnabled;
- (id)chatBottomSMSMessageIconWeightMode;
- (id)chatBottomTGUseMessageIconsEnabled;
- (id)chatBottomTGMessageIconWeightMode;
- (id)chatBottomTGAvatarMode;
- (id)chatBottomTGAvatarEnabled;
- (id)chatBubbleGlassEnabled;
- (id)topNavigationAlignmentEnabled;
- (id)homeSearchButtonEnabled;
- (id)chatTitleCapsuleEnabled;
- (id)chatTitleCapsuleSearchEnabled;
- (id)chatNativeProfileTitleEnabled;
- (id)chatTopCapsuleAvatarEnabled;
- (id)chatTopCapsuleSubtitleEnabled;
- (id)chatTopCapsuleLeftEnabled;
- (id)chatTopCapsuleSubtitleIconEnabled;
- (id)chatNativeProfilePinnedOffsetEnabled;
- (id)chatTopMorphActionEnabled;
- (id)privateChatTopMorphDefault;
- (id)groupChatTopMorphDefault;
- (id)chatTopMorphSMSIconsEnabled;
- (id)chatTopMorphSMSIconWeightMode;
- (id)smsBackTextEnabled;
- (id)smsBackIconWeightMode;
- (id)smsHomeAddIconEnabled;
- (id)smsHomeAddIconWeightMode;
- (id)smsBottomBarIconEnabled;
- (id)chatPlusSMSMenuEnabled;
- (id)richCardPaymentBubbleEnabled;
- (id)voIPBubbleGlassEnabled;
- (id)longPressMenuGlassEnabled;
- (id)chatBubbleFlowGradientEnabled;
- (id)chatBubbleFlowBorderEnabled;
- (id)chatBubbleFlowRichMediaEnabled;
- (id)chatBubbleFlowVoIPEnabled;
- (id)hideVoiceTranscribeIconEnabled;
- (id)deleteSessionImmediately;
- (id)hideHomeWeChatTitleEnabled;
- (id)chatBottomGradientBackgroundEnabled;
- (id)homeWallpaperScrimEnabled;
- (id)homeWallpaperExtraTabsEnabled;
- (id)chatBottomPlaceholderEnabled;
- (id)customFadeEnabled;
- (id)homeTopFadeEnabled;
- (id)chatTopFadeEnabled;
- (id)homeBottomFadeEnabled;
- (id)tabBarExtraClearEnabled;
- (id)unreadBackCapsuleMode;
- (id)tabBarRightSearchEnabled;
- (id)searchTabBarEnabled;
- (id)disablePullDownMiniProgramEnabled;
- (id)plusMenuMiniProgramEntryEnabled;
- (id)glassSizeMode;
- (id)tabBarRightSearchSizeMode;
- (id)searchTabBarSizeMode;
- (id)chatBottomGlassMode;
- (id)chatBottomSMSSendColorMode;
- (id)chatBottomSMSSendDarkColorMode;
- (id)smsBottomBarIconLightColorMode;
- (id)smsBottomBarIconDarkColorMode;
- (id)chatBubbleOutgoingColorMode;
- (id)chatBubbleIncomingColorMode;
- (id)chatBubbleOutgoingDarkColorMode;
- (id)chatBubbleIncomingDarkColorMode;
- (id)chatBubblePaymentTextColorMode;
- (id)chatBubblePaymentTextDarkColorMode;
- (id)chatBubbleTextColorEnabled;
- (id)chatBubbleTextSendColorMode;
- (id)chatBubbleTextSendDarkColorMode;
- (id)chatBubbleTextRecvColorMode;
- (id)chatBubbleTextRecvDarkColorMode;
- (id)chatBubbleCompactEnabled;
- (id)chatBubbleCompactAvatarPosition;
- (id)chatBubbleCompactGap;
- (id)chatBubbleCompactGapGroup;
- (id)chatBubbleCompactGapGroupSend;
- (id)chatBubbleCompactGapPrivate;
- (id)avatarScaleEnabled;
- (id)avatarScaleChatList;
- (id)avatarScaleChat;
- (id)avatarScaleContacts;
- (id)avatarScaleDiscover;
- (id)chatTopButtonAvatarEnabled;
- (id)chatTopButtonAvatarSource;
- (id)chatTopButtonAvatarScale;
- (id)bubbleImageEnabled;
- (id)chatBubbleCompactSkipTime;
- (id)chatBubbleMergeHideTimeBar;
- (id)chatBubbleMergeAvatarBottomAlign;
- (id)chatBubbleMergePrivate;
- (id)chatBubbleMergeGroup;
- (id)chatBubbleMergeBubbleInset;
- (id)chatBubbleMergeAvatarInset;
- (id)chatBubbleMergePageInset;
- (id)chatIndentEnabled;
- (id)chatIndentGroupRecv;
- (id)chatIndentGroupSend;
- (id)chatIndentPrivateRecv;
- (id)chatIndentPrivateSend;
- (id)chatBubbleFlowStartColorMode;
- (id)chatBubbleFlowEndColorMode;
- (id)chatBubbleFlowDarkStartColorMode;
- (id)chatBubbleFlowDarkEndColorMode;
- (id)groupChatAvatarHideMode;
- (id)privateChatAvatarHideMode;
- (id)shouldForceTrueForUserDefaultsKey:(id)arg0;
- (id)flush;
- (id)invalidateCache;
@end

@interface WCLGGlassThemeCell : UITableViewCell
{
    UIImageView * _thumb; // @"UIImageView"
    UILabel * _nameLabel; // @"UILabel"
    UILabel * _subLabel; // @"UILabel"
    UILabel * _verLabel; // @"UILabel"
    UILabel * _statusChip; // @"UILabel"
    UIImageView * _chevron; // @"UIImageView"
    WCLGGlassTheme * _theme; // @"WCLGGlassTheme"
}
- (id)initWithStyle:(id)arg0 reuseIdentifier:(id)arg1;
- (id)configure:(id)arg0;
- (id)thumb;
- (id)setThumb:(id)arg0;
- (id)nameLabel;
- (id)setNameLabel:(id)arg0;
- (id)subLabel;
- (id)setSubLabel:(id)arg0;
- (id)verLabel;
- (id)setVerLabel:(id)arg0;
- (id)statusChip;
- (id)setStatusChip:(id)arg0;
- (id)chevron;
- (id)setChevron:(id)arg0;
- (id)theme;
- (id)setTheme:(id)arg0;
@end

@interface WCLGDownloadCenterViewController : UIViewController
{
    UISegmentedControl * _seg; // @"UISegmentedControl"
    UIView * _segBar; // @"UIView"
    WCLGGlassBackgroundView * _bg; // @"WCLGGlassBackgroundView"
    UITableView * _tableView; // @"UITableView"
    UIActivityIndicatorView * _spinner; // @"UIActivityIndicatorView"
    UILabel * _emptyLabel; // @"UILabel"
    NSArray * _bubbles; // @"NSArray"
    NSArray * _cards; // @"NSArray"
    NSUInteger _reloadGeneration; // Q
}
- (id)viewDidLoad;
- (id)viewDidLayoutSubviews;
- (id)segChanged;
- (id)openRedeemCenter;
- (id)reload;
- (id)current;
- (id)updateEmpty;
- (id)tableView:(id)arg0 numberOfRowsInSection:(id)arg1;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (id)showDetail:(id)arg0;
- (id)dismissSelf;
- (id)toast:(id)arg0;
- (id)seg;
- (id)setSeg:(id)arg0;
- (id)segBar;
- (id)setSegBar:(id)arg0;
- (id)bg;
- (id)setBg:(id)arg0;
- (id)tableView;
- (id)setTableView:(id)arg0;
- (id)spinner;
- (id)setSpinner:(id)arg0;
- (id)emptyLabel;
- (id)setEmptyLabel:(id)arg0;
- (id)bubbles;
- (id)setBubbles:(id)arg0;
- (id)cards;
- (id)setCards:(id)arg0;
- (id)reloadGeneration;
- (id)setReloadGeneration:(id)arg0;
- (id)tableView:(id)arg0 numberOfRowsInSection:(id)arg1;
- (id)tableView:(id)arg0 numberOfRowsInSection:(id)arg1;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
@end

@interface WCLGVariableBlurHostView : UIView
{
    CALayer * _backdropLayer; // @"CALayer"
    UIImage * _gradientImage; // @"UIImage"
    CGSize _lastSize; // {CGSize="width"d"height"d}
    double _lastConstantHeight; // d
    BOOL _lastInverted; // B
    double _lastGradientHeight; // d
}
- (id)initWithFrame:(id)arg0;
- (id)layoutSubviews;
- (id)backdropLayer;
- (id)setBackdropLayer:(id)arg0;
- (id)gradientImage;
- (id)setGradientImage:(id)arg0;
- (id)lastSize;
- (id)setLastSize:(id)arg0;
- (id)lastConstantHeight;
- (id)setLastConstantHeight:(id)arg0;
- (id)lastInverted;
- (id)setLastInverted:(id)arg0;
- (id)lastGradientHeight;
- (id)setLastGradientHeight:(id)arg0;
@end

@interface WCLGEdgeEffectView : UIView
{
    BOOL _blurEnabled; // B
    WCLGVariableBlurHostView * _blurHostView; // @"WCLGVariableBlurHostView"
    UIView * _contentView; // @"UIView"
    UIImageView * _contentMaskView; // @"UIImageView"
    UIVisualEffectView * _fallbackBlurView; // @"UIVisualEffectView"
    UIColor * _lastContentColor; // @"UIColor"
    BOOL _lastBlur; // B
    double _lastAlpha; // d
    id /* encoded: {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} */ _lastRect; // {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}}
    NSInteger _lastEdge; // q
    double _lastEdgeSize; // d
    double _lastBlurRadius; // d
}
- (id)initWithFrame:(id)arg0;
- (id)updateWithContentColor:(id)arg0 blur:(id)arg1 alpha:(id)arg2 rect:(id)arg3 edge:(id)arg4 edgeSize:(id)arg5 blurRadius:(id)arg6;
- (id)isBlurEnabled;
- (id)setBlurEnabled:(id)arg0;
- (id)contentView;
- (id)setContentView:(id)arg0;
- (id)contentMaskView;
- (id)setContentMaskView:(id)arg0;
- (id)blurHostView;
- (id)setBlurHostView:(id)arg0;
- (id)fallbackBlurView;
- (id)setFallbackBlurView:(id)arg0;
- (id)lastContentColor;
- (id)setLastContentColor:(id)arg0;
- (id)lastBlur;
- (id)setLastBlur:(id)arg0;
- (id)lastAlpha;
- (id)setLastAlpha:(id)arg0;
- (id)lastRect;
- (id)setLastRect:(id)arg0;
- (id)lastEdge;
- (id)setLastEdge:(id)arg0;
- (id)lastEdgeSize;
- (id)setLastEdgeSize:(id)arg0;
- (id)lastBlurRadius;
- (id)setLastBlurRadius:(id)arg0;
@end

@interface WCLGFuncCardMediaController : NSObject
{
    WKWebView * _webView; // @"WKWebView"
    NSString * _scope; // @"NSString"
    NSObject<OS_dispatch_queue> * _ioQueue; // @"NSObject<OS_dispatch_queue>"
    NSObject<OS_dispatch_queue> * _stateQueue; // @"NSObject<OS_dispatch_queue>"
    NSMutableSet * _activeTasks; // @"NSMutableSet"
    NSMutableSet * _cancelledTasks; // @"NSMutableSet"
    NSMutableDictionary * _pageScopes; // @"NSMutableDictionary"
    UIDocumentPickerViewController * _pendingPicker; // @"UIDocumentPickerViewController"
    NSString * _pendingRequestId; // @"NSString"
    NSString * _pendingToken; // @"NSString"
    NSString * _pendingScope; // @"NSString"
    NSUInteger _pendingStorageGeneration; // Q
}
- (id)init;
- (id)keyForSchemeTask:(id)arg0;
- (id)isSchemeTaskCancelled:(id)arg0;
- (id)finishSchemeTask:(id)arg0;
- (id)performSchemeTaskCallback:(id)arg0 block:(id)arg1;
- (id)failSchemeTask:(id)arg0 code:(id)arg1;
- (id)userContentController:(id)arg0 didReceiveScriptMessage:(id)arg1;
- (id)contentTypesForAccept:(id)arg0;
- (id)presenterForWebView:(id)arg0;
- (id)deliver:(id)arg0 expectedScope:(id)arg1;
- (id)clearPendingPicker;
- (id)updateScope:(id)arg0;
- (id)documentPicker:(id)arg0 didPickDocumentsAtURLs:(id)arg1;
- (id)documentPickerWasCancelled:(id)arg0;
- (id)presentationControllerDidDismiss:(id)arg0;
- (id)webView:(id)arg0 startURLSchemeTask:(id)arg1;
- (id)webView:(id)arg0 stopURLSchemeTask:(id)arg1;
- (id)webView;
- (id)setWebView:(id)arg0;
- (id)scope;
- (id)setScope:(id)arg0;
- (id)ioQueue;
- (id)setIoQueue:(id)arg0;
- (id)stateQueue;
- (id)setStateQueue:(id)arg0;
- (id)activeTasks;
- (id)setActiveTasks:(id)arg0;
- (id)cancelledTasks;
- (id)setCancelledTasks:(id)arg0;
- (id)pageScopes;
- (id)setPageScopes:(id)arg0;
- (id)pendingPicker;
- (id)setPendingPicker:(id)arg0;
- (id)pendingRequestId;
- (id)setPendingRequestId:(id)arg0;
- (id)pendingToken;
- (id)setPendingToken:(id)arg0;
- (id)pendingScope;
- (id)setPendingScope:(id)arg0;
- (id)pendingStorageGeneration;
- (id)setPendingStorageGeneration:(id)arg0;
- (id)userContentController:(id)arg0 didReceiveScriptMessage:(id)arg1;
- (id)userContentController:(id)arg0 didReceiveScriptMessage:(id)arg1;
@end

@interface WCLGFuncCardPanelView : UIView
{
    UIView * _bgSwatch; // @"UIView"
    UIView * _borderSwatch; // @"UIView"
    UIView * _panelBG; // @"UIView"
    UIScrollView * _scrollView; // @"UIScrollView"
    UISwitch * _enableSwitch; // @"UISwitch"
    UISwitch * _swipeFollowSwitch; // @"UISwitch"
    UISegmentedControl * _appearanceControl; // @"UISegmentedControl"
    NSMutableDictionary * _valueLabels; // @"NSMutableDictionary"
    NSArray * _metrics; // @"NSArray"
    CGPoint _dragStartCenter; // {CGPoint="x"d"y"d}
    BOOL _darkMode; // B
}
+ (id)metricDefinitions;
- (id)initForWindow:(id)arg0;
- (id)primaryTextColor;
- (id)secondaryTextColor;
- (id)separatorColor;
- (id)buildBlurBackground;
- (id)contentHost;
- (id)buildHeader;
- (id)buildScrollContent:(id)arg0;
- (id)makeRowAtIndex:(id)arg0 title:(id)arg1 lastRow:(id)arg2;
- (id)makeColorRowAtIndex:(id)arg0 title:(id)arg1 swatchOut:(id)arg2;
- (id)makeDisclosureRowAtIndex:(id)arg0 title:(id)arg1;
- (id)placeAccessoryControl:(id)arg0 inRow:(id)arg1;
- (id)addStepperForMetric:(id)arg0 index:(id)arg1 inRow:(id)arg2;
- (id)closeTapped;
- (id)enableSwitchChanged:(id)arg0;
- (id)swipeFollowSwitchChanged:(id)arg0;
- (id)appearanceControlChanged:(id)arg0;
- (id)stepperChanged:(id)arg0;
- (id)bgColorTapped;
- (id)borderColorTapped;
- (id)codeLibraryTapped;
- (id)presentColorPickerKey:(id)arg0 title:(id)arg1;
- (id)dismissTopModal;
- (id)refreshColorSwatches;
- (id)handlePan:(id)arg0;
- (id)clampedCenter:(id)arg0 inBounds:(id)arg1;
- (id)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (id)panelBG;
- (id)setPanelBG:(id)arg0;
- (id)scrollView;
- (id)setScrollView:(id)arg0;
- (id)enableSwitch;
- (id)setEnableSwitch:(id)arg0;
- (id)swipeFollowSwitch;
- (id)setSwipeFollowSwitch:(id)arg0;
- (id)appearanceControl;
- (id)setAppearanceControl:(id)arg0;
- (id)bgSwatch;
- (id)setBgSwatch:(id)arg0;
- (id)borderSwatch;
- (id)setBorderSwatch:(id)arg0;
- (id)valueLabels;
- (id)setValueLabels:(id)arg0;
- (id)metrics;
- (id)setMetrics:(id)arg0;
- (id)dragStartCenter;
- (id)setDragStartCenter:(id)arg0;
- (id)darkMode;
- (id)setDarkMode:(id)arg0;
@end

@interface WCLGGlassInstalledItem : NSObject
{
    NSInteger _themeId; // q
    NSString * _type; // @"NSString"
    NSString * _name; // @"NSString"
    NSString * _subtitle; // @"NSString"
    NSString * _iconURL; // @"NSString"
    NSString * _version; // @"NSString"
    NSInteger _versionCode; // q
    NSString * _importPath; // @"NSString"
    double _importedAt; // d
}
- (id)themeId;
- (id)setThemeId:(id)arg0;
- (id)type;
- (id)setType:(id)arg0;
- (id)name;
- (id)setName:(id)arg0;
- (id)subtitle;
- (id)setSubtitle:(id)arg0;
- (id)iconURL;
- (id)setIconURL:(id)arg0;
- (id)version;
- (id)setVersion:(id)arg0;
- (id)versionCode;
- (id)setVersionCode:(id)arg0;
- (id)importPath;
- (id)setImportPath:(id)arg0;
- (id)importedAt;
- (id)setImportedAt:(id)arg0;
@end

@interface WCLGGlassPackage : NSObject
+ (id)supportDir;
+ (id)vaultDir;
+ (id)vaultPathForTheme:(id)arg0;
+ (id)indexPath;
+ (id)performConfidentialityMigrationIfNeeded;
+ (id)loadIndex;
+ (id)saveIndex:(id)arg0;
+ (id)decryptContainer:(id)arg0 themeId:(id)arg1 wxid:(id)arg2 signKey:(id)arg3 glassMaster:(id)arg4 error:(id)arg5;
+ (id)importGlassData:(id)arg0 wxid:(id)arg1 signKey:(id)arg2 glassMaster:(id)arg3 iconURL:(id)arg4 error:(id)arg5;
+ (id)invalidateMemoryCacheForTheme:(id)arg0;
+ (id)decryptedPayloadForTheme:(id)arg0 error:(id)arg1;
+ (id)filesForTheme:(id)arg0;
+ (id)manifestForTheme:(id)arg0;
+ (id)cardHTMLForTheme:(id)arg0;
+ (id)installedVersionMap;
+ (id)installedItems;
+ (id)nameForTheme:(id)arg0;
+ (id)typeForTheme:(id)arg0;
+ (id)activeInstalledThemeIdForType:(id)arg0;
+ (id)applyInstalled:(id)arg0;
+ (id)deactivateInstalledThemeForType:(id)arg0;
+ (id)removeInstalled:(id)arg0;
@end

@interface WCLGGlassTheme : NSObject
{
    BOOL _hasUpdate; // B
    BOOL _installed; // B
    NSInteger _themeId; // q
    NSString * _type; // @"NSString"
    NSString * _name; // @"NSString"
    NSString * _subtitle; // @"NSString"
    NSString * _authorName; // @"NSString"
    NSString * _desc; // @"NSString"
    NSString * _iconURL; // @"NSString"
    NSArray * _previewURLs; // @"NSArray"
    NSString * _version; // @"NSString"
    NSInteger _versionCode; // q
    NSInteger _versionId; // q
    NSString * _changelog; // @"NSString"
    NSInteger _parentThemeId; // q
    NSArray * _subPackages; // @"NSArray"
}
- (id)themeId;
- (id)setThemeId:(id)arg0;
- (id)type;
- (id)setType:(id)arg0;
- (id)name;
- (id)setName:(id)arg0;
- (id)subtitle;
- (id)setSubtitle:(id)arg0;
- (id)authorName;
- (id)setAuthorName:(id)arg0;
- (id)desc;
- (id)setDesc:(id)arg0;
- (id)iconURL;
- (id)setIconURL:(id)arg0;
- (id)previewURLs;
- (id)setPreviewURLs:(id)arg0;
- (id)version;
- (id)setVersion:(id)arg0;
- (id)versionCode;
- (id)setVersionCode:(id)arg0;
- (id)versionId;
- (id)setVersionId:(id)arg0;
- (id)changelog;
- (id)setChangelog:(id)arg0;
- (id)hasUpdate;
- (id)setHasUpdate:(id)arg0;
- (id)installed;
- (id)setInstalled:(id)arg0;
- (id)parentThemeId;
- (id)setParentThemeId:(id)arg0;
- (id)subPackages;
- (id)setSubPackages:(id)arg0;
@end

@interface WCGMultiDownloader : NSObject
{
    BOOL _failed; // B
    NSString * _base; // @"NSString"
    NSString * _token; // @"NSString"
    NSInteger _size; // q
    NSInteger _threads; // q
    NSMutableData * _buffer; // @"NSMutableData"
    NSInteger _received; // q
    NSInteger _pending; // q
    NSObject<OS_dispatch_queue> * _lock; // @"NSObject<OS_dispatch_queue>"
    NSTimer * _speedTimer; // @"NSTimer"
    NSInteger _lastSampleBytes; // q
    double _lastSampleTime; // d
    id /* block */ _progress; // @?
    id /* block */ _done; // @?
}
- (id)start;
- (id)fetchRange:(id)arg0 session:(id)arg1;
- (id)emit;
- (id)finishOnMain:(id)arg0;
- (id)base;
- (id)setBase:(id)arg0;
- (id)token;
- (id)setToken:(id)arg0;
- (id)size;
- (id)setSize:(id)arg0;
- (id)threads;
- (id)setThreads:(id)arg0;
- (id)buffer;
- (id)setBuffer:(id)arg0;
- (id)received;
- (id)setReceived:(id)arg0;
- (id)pending;
- (id)setPending:(id)arg0;
- (id)failed;
- (id)setFailed:(id)arg0;
- (id)lock;
- (id)setLock:(id)arg0;
- (id)speedTimer;
- (id)setSpeedTimer:(id)arg0;
- (id)lastSampleBytes;
- (id)setLastSampleBytes:(id)arg0;
- (id)lastSampleTime;
- (id)setLastSampleTime:(id)arg0;
- (id)progress;
- (id)setProgress:(id)arg0;
- (id)done;
- (id)setDone:(id)arg0;
@end

@interface WCLGGlassStore : NSObject
{
    id /* encoded: ^{__SecKey=} */ _apiPubKey; // ^{__SecKey=}
    id /* encoded: ^{__SecKey=} */ _signPubKey; // ^{__SecKey=}
}
+ (id)shared;
- (id)apiPubKey;
- (id)signPubKey;
- (id)currentWXID;
- (id)buildRequest:(id)arg0 requestKey:(id)arg1 nonce:(id)arg2;
- (id)decryptResponse:(id)arg0 requestKey:(id)arg1 nonce:(id)arg2;
- (id)postPath:(id)arg0 payload:(id)arg1 completion:(id)arg2;
- (id)themeFromDict:(id)arg0;
- (id)fetchCatalogWithCompletion:(id)arg0;
- (id)fetchCardPreviewHTMLForTheme:(id)arg0 completion:(id)arg1;
- (id)downloadAndImportTheme:(id)arg0 completion:(id)arg1;
- (id)downloadAndImportTheme:(id)arg0 progress:(id)arg1 completion:(id)arg2;
- (id)glassSignKey;
- (id)glassMasterKey;
- (id)revokeTheme:(id)arg0 completion:(id)arg1;
- (id)setApiPubKey:(id)arg0;
- (id)setSignPubKey:(id)arg0;
@end

@interface WCLGGlassBackgroundView : UIView
{
    CAGradientLayer * _gradA; // @"CAGradientLayer"
    CAGradientLayer * _gradB; // @"CAGradientLayer"
}
- (id)initWithFrame:(id)arg0;
- (id)isDark;
- (id)colorsA;
- (id)colorsB;
- (id)updateColors;
- (id)layoutSubviews;
- (id)traitCollectionDidChange:(id)arg0;
- (id)startAnimations;
- (id)gradA;
- (id)setGradA:(id)arg0;
- (id)gradB;
- (id)setGradB:(id)arg0;
@end

@interface WCLGGlassUI : NSObject
+ (id)cardColor;
+ (id)cardBorderColor;
+ (id)accentColor;
+ (id)themePlaceholderImageForType:(id)arg0;
+ (id)showToast:(id)arg0 inView:(id)arg1;
+ (id)imageCache;
+ (id)imageCacheQueue;
+ (id)imageInflightRequests;
+ (id)normalizedImageURLString:(id)arg0;
+ (id)themeIconCacheDirectory;
+ (id)themeIconCachePathForURL:(id)arg0;
+ (id)memoryCostForImage:(id)arg0 fallback:(id)arg1;
+ (id)decodedImageFromData:(id)arg0;
+ (id)themeIconImageFromDiskForURL:(id)arg0;
+ (id)trimThemeIconDiskCacheIfNeeded;
+ (id)registerImageRequestForKey:(id)arg0 completion:(id)arg1;
+ (id)finishImageRequestForKey:(id)arg0 image:(id)arg1;
+ (id)requestImageAtURLString:(id)arg0 persistToDisk:(id)arg1 completion:(id)arg2;
+ (id)prewarmThemeIconCacheForURLs:(id)arg0 completion:(id)arg1;
+ (id)loadImage:(id)arg0 into:(id)arg1;
+ (id)loadImage:(id)arg0 themeType:(id)arg1 into:(id)arg2;
@end

@interface WCLGGroupMemberPicker : UIViewController
{
    NSString * _groupID; // @"NSString"
    id /* block */ _onComplete; // @?
    NSMutableSet * _selected; // @"NSMutableSet"
    NSArray * _sessionUsernames; // @"NSArray"
    NSArray * _sessionRows; // @"NSArray"
    NSArray * _contactRows; // @"NSArray"
    NSArray * _filteredRows; // @"NSArray"
    NSArray * _labels; // @"NSArray"
    NSArray * _chatroomRows; // @"NSArray"
    BOOL _contactsLoaded; // B
    BOOL _labelsLoaded; // B
    BOOL _chatroomsLoaded; // B
    BOOL _singleSelect; // B
    id /* block */ _onPick; // @?
    NSSet * _excluded; // @"NSSet"
    NSInteger _mode; // q
    UISegmentedControl * _segmented; // @"UISegmentedControl"
    UITableView * _tableView; // @"UITableView"
    UISearchBar * _searchBar; // @"UISearchBar"
    NSString * _searchText; // @"NSString"
}
+ (id)presentForGroupID:(id)arg0 title:(id)arg1 preselectedMembers:(id)arg2 sessionUsernames:(id)arg3 fromController:(id)arg4 onComplete:(id)arg5;
+ (id)presentSingleSelectWithTitle:(id)arg0 excludeMembers:(id)arg1 fromController:(id)arg2 onPick:(id)arg3;
- (id)viewDidLoad;
- (id)setupSingleSelect;
- (id)onSingleModeChanged:(id)arg0;
- (id)buildSessionRows;
- (id)ensureContactsLoaded;
- (id)ensureLabelsLoaded;
- (id)ensureChatroomsLoaded;
- (id)applyFilter;
- (id)onModeChanged:(id)arg0;
- (id)updateDoneTitle;
- (id)onCancel;
- (id)onDone;
- (id)searchBar:(id)arg0 textDidChange:(id)arg1;
- (id)searchBarSearchButtonClicked:(id)arg0;
- (id)tableView:(id)arg0 numberOfRowsInSection:(id)arg1;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)tableView:(id)arg0 titleForHeaderInSection:(id)arg1;
- (id)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (id)groupID;
- (id)setGroupID:(id)arg0;
- (id)onComplete;
- (id)setOnComplete:(id)arg0;
- (id)selected;
- (id)setSelected:(id)arg0;
- (id)sessionUsernames;
- (id)setSessionUsernames:(id)arg0;
- (id)sessionRows;
- (id)setSessionRows:(id)arg0;
- (id)contactRows;
- (id)setContactRows:(id)arg0;
- (id)filteredRows;
- (id)setFilteredRows:(id)arg0;
- (id)labels;
- (id)setLabels:(id)arg0;
- (id)chatroomRows;
- (id)setChatroomRows:(id)arg0;
- (id)contactsLoaded;
- (id)setContactsLoaded:(id)arg0;
- (id)labelsLoaded;
- (id)setLabelsLoaded:(id)arg0;
- (id)chatroomsLoaded;
- (id)setChatroomsLoaded:(id)arg0;
- (id)singleSelect;
- (id)setSingleSelect:(id)arg0;
- (id)onPick;
- (id)setOnPick:(id)arg0;
- (id)excluded;
- (id)setExcluded:(id)arg0;
- (id)mode;
- (id)setMode:(id)arg0;
- (id)segmented;
- (id)setSegmented:(id)arg0;
- (id)tableView;
- (id)setTableView:(id)arg0;
- (id)searchBar;
- (id)setSearchBar:(id)arg0;
- (id)searchText;
- (id)setSearchText:(id)arg0;
- (id)tableView:(id)arg0 numberOfRowsInSection:(id)arg1;
- (id)tableView:(id)arg0 numberOfRowsInSection:(id)arg1;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
@end

@interface WCLGFriendCapsuleButton : UIButton
{
    UIVisualEffectView * _fallbackGlassView; // @"UIVisualEffectView"
    UIView * _colorTintView; // @"UIView"
    UIImageView * _avatarView; // @"UIImageView"
    UILabel * _nameLabel; // @"UILabel"
    UILabel * _badgeLabel; // @"UILabel"
    NSString * _username; // @"NSString"
    id /* block */ _onTap; // @?
    id /* block */ _onLongPress; // @?
}
+ (id)wclgCapsuleConfiguration;
- (id)initWithFrame:(id)arg0;
- (id)didMoveToWindow;
- (id)configureUsername:(id)arg0 unread:(id)arg1;
- (id)setUnreadCount:(id)arg0;
- (id)layoutSubviews;
- (id)setHighlighted:(id)arg0;
- (id)wclgHandleTap;
- (id)wclgHandleLongPress:(id)arg0;
- (id)username;
- (id)setUsername:(id)arg0;
- (id)avatarView;
- (id)setAvatarView:(id)arg0;
- (id)nameLabel;
- (id)setNameLabel:(id)arg0;
- (id)badgeLabel;
- (id)setBadgeLabel:(id)arg0;
- (id)fallbackGlassView;
- (id)setFallbackGlassView:(id)arg0;
- (id)colorTintView;
- (id)setColorTintView:(id)arg0;
- (id)onTap;
- (id)setOnTap:(id)arg0;
- (id)onLongPress;
- (id)setOnLongPress:(id)arg0;
@end

@interface WCLGHomeCapsulePinnedController : NSObject
{
    NSString * _pendingAvatarUser; // @"NSString"
}
- (id)refresh;
- (id)presentActionsForUser:(id)arg0;
- (id)presentNicknameEditorForUser:(id)arg0;
- (id)replaceFriend:(id)arg0;
- (id)replaceAvatar:(id)arg0;
- (id)removeUser:(id)arg0;
- (id)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1;
- (id)imagePickerControllerDidCancel:(id)arg0;
- (id)pendingAvatarUser;
- (id)setPendingAvatarUser:(id)arg0;
@end

@interface WCLGCapsulePinnedContainerView : UIView
- (id)pointInside:(id)arg0 withEvent:(id)arg1;
@end

@interface WCLGFuncCardChromeView : UIView
- (id)traitCollectionDidChange:(id)arg0;
@end

@interface WCLGFuncCardLongPressTarget : NSObject
+ (id)shared;
- (id)onLongPress:(id)arg0;
- (id)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
@end

@interface WCLGFuncCardDocPickerDelegate : NSObject
{
    id /* block */ _onChange; // @?
    id _retainSelf; // @
}
- (id)documentPicker:(id)arg0 didPickDocumentsAtURLs:(id)arg1;
- (id)documentPickerWasCancelled:(id)arg0;
- (id)onChange;
- (id)setOnChange:(id)arg0;
- (id)retainSelf;
- (id)setRetainSelf:(id)arg0;
@end

@interface WCLGGroupPill : UIButton
{
    UILabel * _badge; // @"UILabel"
    UILabel * _countLabel; // @"UILabel"
    BOOL _wclgExpanded; // B
    NSString * _wclgTitle; // @"NSString"
    BOOL _wclgNewButton; // B
    NSInteger _displayIndex; // q
    id /* block */ _onTap; // @?
    id /* block */ _onLongPress; // @?
    NSInteger _badgeCount; // q
    NSInteger _memberCount; // q
}
+ (id)pillConfigurationExpanded:(id)arg0;
- (id)initWithFrame:(id)arg0;
- (id)applyBadgeText;
- (id)applyMemberText;
- (id)applyVisualStateExpanded:(id)arg0 newButton:(id)arg1 title:(id)arg2;
- (id)setPillExpanded:(id)arg0;
- (id)configureWithTitle:(id)arg0 memberCount:(id)arg1 badgeCount:(id)arg2 expanded:(id)arg3 newButton:(id)arg4 textColor:(id)arg5;
- (id)refreshBadgeCount:(id)arg0 memberCount:(id)arg1;
- (id)layoutSubviews;
- (id)handleTap;
- (id)handleLongPress:(id)arg0;
- (id)displayIndex;
- (id)setDisplayIndex:(id)arg0;
- (id)onTap;
- (id)setOnTap:(id)arg0;
- (id)onLongPress;
- (id)setOnLongPress:(id)arg0;
- (id)badge;
- (id)setBadge:(id)arg0;
- (id)badgeCount;
- (id)setBadgeCount:(id)arg0;
- (id)countLabel;
- (id)setCountLabel:(id)arg0;
- (id)memberCount;
- (id)setMemberCount:(id)arg0;
- (id)wclgExpanded;
- (id)setWclgExpanded:(id)arg0;
- (id)wclgNewButton;
- (id)setWclgNewButton:(id)arg0;
- (id)wclgTitle;
- (id)setWclgTitle:(id)arg0;
@end

@interface WCLGHomeGroupBar : UIView
{
    NSMutableArray * _pills; // @"NSMutableArray"
    NSInteger _lastScrolledExpandedIndex; // q
    UIScrollView * _scroll; // @"UIScrollView"
    <WCLGHomeGroupBarDelegate> * _delegate; // @"<WCLGHomeGroupBarDelegate>"
    NSString * _wclgStructureToken; // @"NSString"
}
+ (id)preferredHeight;
- (id)initWithFrame:(id)arg0;
- (id)dealloc;
- (id)handleGroupsChanged;
- (id)reloadGroups;
- (id)reloadGroupsIfNeeded;
- (id)setSelectedDisplayIndex:(id)arg0 animated:(id)arg1;
- (id)refreshBadgesWithTable:(id)arg0;
- (id)layoutSubviews;
- (id)scrollSelectedPillToVisibleIfNeededAnimated:(id)arg0;
- (id)traitCollectionDidChange:(id)arg0;
- (id)delegate;
- (id)setDelegate:(id)arg0;
- (id)pills;
- (id)setPills:(id)arg0;
- (id)scroll;
- (id)setScroll:(id)arg0;
- (id)lastScrolledExpandedIndex;
- (id)setLastScrolledExpandedIndex:(id)arg0;
- (id)wclgStructureToken;
- (id)setWclgStructureToken:(id)arg0;
@end

@interface WCLGHGFullscreenDrawer : UIView
{
    UIViewController * _controller; // @"UIViewController"
    BOOL _fromLeft; // B
    double _anchorY; // d
    id _hapticGenerator; // @
    double _columnWidth; // d
    UIControl * _backdrop; // @"UIControl"
    UIView * _column; // @"UIView"
    NSInteger _highlightedIndex; // q
    NSMutableArray * _pills; // @"NSMutableArray"
    UIScrollView * _lockedScroll; // @"UIScrollView"
}
- (id)initWithController:(id)arg0 fromLeft:(id)arg1 anchorY:(id)arg2;
- (id)buildPillsWithFontSize:(id)arg0;
- (id)handleBackdrop;
- (id)handlePill:(id)arg0;
- (id)pillIndexAtWindowPoint:(id)arg0;
- (id)setHighlightedIndex:(id)arg0;
- (id)commitSelection:(id)arg0;
- (id)presentInWindow:(id)arg0;
- (id)dismissAnimated:(id)arg0;
- (id)controller;
- (id)setController:(id)arg0;
- (id)backdrop;
- (id)setBackdrop:(id)arg0;
- (id)column;
- (id)setColumn:(id)arg0;
- (id)fromLeft;
- (id)setFromLeft:(id)arg0;
- (id)columnWidth;
- (id)setColumnWidth:(id)arg0;
- (id)anchorY;
- (id)setAnchorY:(id)arg0;
- (id)pills;
- (id)setPills:(id)arg0;
- (id)highlightedIndex;
- (id)lockedScroll;
- (id)setLockedScroll:(id)arg0;
- (id)hapticGenerator;
- (id)setHapticGenerator:(id)arg0;
@end

@interface WCLGHGFullscreenGestureTarget : NSObject
+ (id)shared;
- (id)handleEdgePan:(id)arg0;
- (id)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (id)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
@end

@interface WCLGHGPassthroughView : UIView
- (id)hitTest:(id)arg0 withEvent:(id)arg1;
@end

@interface WCLGSessionGroup : NSObject
{
    NSString * _groupID; // @"NSString"
    NSString * _title; // @"NSString"
    NSArray * _members; // @"NSArray"
    NSInteger _rule; // q
}
- (id)init;
- (id)isAllGroup;
- (id)containsSessionUsername:(id)arg0;
- (id)containsSessionUsername:(id)arg0 unreadCount:(id)arg1 muted:(id)arg2 showMutedUnread:(id)arg3;
- (id)dictionaryRepresentation;
+ (id)groupWithDictionary:(id)arg0;
- (id)groupID;
- (id)setGroupID:(id)arg0;
- (id)title;
- (id)setTitle:(id)arg0;
- (id)members;
- (id)setMembers:(id)arg0;
- (id)rule;
- (id)setRule:(id)arg0;
@end

@interface WCLGHomeGroups : NSObject
{
    id /* encoded: {os_unfair_lock_s="_os_unfair_lock_opaque"I} */ _lock; // {os_unfair_lock_s="_os_unfair_lock_opaque"I}
    NSMutableArray * _customGroups; // @"NSMutableArray"
    NSString * _currentGroupID; // @"NSString"
    BOOL _collapsed; // B
}
+ (id)sharedManager;
- (id)init;
- (id)loadFromDisk;
- (id)seedDefaultGroupsIfNeeded;
- (id)persistGroupsLocked;
- (id)enabled;
- (id)setEnabled:(id)arg0;
- (id)tgMode;
- (id)setTgMode:(id)arg0;
- (id)hideGroupArrow;
- (id)setHideGroupArrow:(id)arg0;
- (id)stripPillFontSize;
- (id)setStripPillFontSize:(id)arg0;
- (id)stripPillWidth;
- (id)setStripPillWidth:(id)arg0;
- (id)stripVerticalOffset;
- (id)setStripVerticalOffset:(id)arg0;
- (id)defaultExpandedGroupID;
- (id)setDefaultExpandedGroupID:(id)arg0;
- (id)unreadGroupShowMuted;
- (id)setUnreadGroupShowMuted:(id)arg0;
- (id)swipeEnabled;
- (id)setSwipeEnabled:(id)arg0;
- (id)animationEnabled;
- (id)setAnimationEnabled:(id)arg0;
- (id)filterPinned;
- (id)setFilterPinned:(id)arg0;
- (id)showBadge;
- (id)setShowBadge:(id)arg0;
- (id)showUnreadBadge;
- (id)setShowUnreadBadge:(id)arg0;
- (id)groupTapHapticEnabled;
- (id)setGroupTapHapticEnabled:(id)arg0;
- (id)textColorMode;
- (id)setTextColorMode:(id)arg0;
- (id)pillColorMode;
- (id)setPillColorMode:(id)arg0;
- (id)pillSelectedColorMode;
- (id)setPillSelectedColorMode:(id)arg0;
- (id)badgeColorMode;
- (id)setBadgeColorMode:(id)arg0;
- (id)badgeColorDarkMode;
- (id)setBadgeColorDarkMode:(id)arg0;
- (id)stripSelectedColorMode;
- (id)setStripSelectedColorMode:(id)arg0;
- (id)stripSelectedColorDarkMode;
- (id)setStripSelectedColorDarkMode:(id)arg0;
- (id)barVerticalOffset;
- (id)setBarVerticalOffset:(id)arg0;
- (id)pillGap;
- (id)setPillGap:(id)arg0;
- (id)pillHorizontalInset;
- (id)setPillHorizontalInset:(id)arg0;
- (id)hideAllGroup;
- (id)setHideAllGroup:(id)arg0;
- (id)effectiveEnabled;
- (id)allGroupTitle;
- (id)isAllGroupTitleCustomized;
- (id)restoreAllGroupTitle;
- (id)allGroupIndex;
- (id)setAllGroupIndex:(id)arg0;
- (id)allGroup;
- (id)customGroups;
- (id)displayGroups;
- (id)groupForID:(id)arg0;
- (id)displayGroupAtIndex:(id)arg0;
- (id)currentGroupID;
- (id)setCurrentGroupID:(id)arg0;
- (id)currentDisplayIndex;
- (id)currentGroup;
- (id)selectDisplayIndex:(id)arg0;
- (id)collapsed;
- (id)expandedDisplayIndex;
- (id)toggleExpandDisplayIndex:(id)arg0;
- (id)normalizeCurrentSelection;
- (id)addGroupWithTitle:(id)arg0;
- (id)removeGroupID:(id)arg0;
- (id)renameGroupID:(id)arg0 toTitle:(id)arg1;
- (id)setMembers:(id)arg0 forGroupID:(id)arg1;
- (id)customGroupWithRule:(id)arg0;
- (id)restoreDefaultGroupOfRule:(id)arg0;
- (id)moveCustomGroupFromIndex:(id)arg0 toIndex:(id)arg1;
- (id)moveDisplayGroupFromIndex:(id)arg0 toIndex:(id)arg1;
- (id)currentGroupShouldShowSessionUsername:(id)arg0;
- (id)groupAtDisplayIndex:(id)arg0 shouldShowSessionUsername:(id)arg1;
- (id)currentGroupShouldShowSessionUsername:(id)arg0 cellData:(id)arg1;
- (id)groupAtDisplayIndex:(id)arg0 shouldShowSessionUsername:(id)arg1 cellData:(id)arg2;
- (id)recomputeAtomicMirrorLocked:(id)arg0;
- (id)refresh;
- (id)beginQuietGroupSwitch;
- (id)endQuietGroupSwitch;
- (id)notifyChanged;
@end

@interface WCLGHomeGroupsControllerState : NSObject
{
    BOOL _fullscreenRowsBusy; // B
    BOOL _fullscreenCapsulePositionPending; // B
    BOOL _fullscreenCapsulePositionScheduled; // B
    NSUInteger _fullscreenCapsulePositionScheduledEpoch; // Q
    NSUInteger _fullscreenCapsulePositionAttemptCount; // Q
    NSUInteger _fullscreenCapsulePositionTargetToken; // Q
    NSUInteger _fullscreenCapsulePositionEpoch; // Q
}
- (id)fullscreenRowsBusy;
- (id)setFullscreenRowsBusy:(id)arg0;
- (id)fullscreenCapsulePositionPending;
- (id)setFullscreenCapsulePositionPending:(id)arg0;
- (id)fullscreenCapsulePositionScheduled;
- (id)setFullscreenCapsulePositionScheduled:(id)arg0;
- (id)fullscreenCapsulePositionScheduledEpoch;
- (id)setFullscreenCapsulePositionScheduledEpoch:(id)arg0;
- (id)fullscreenCapsulePositionAttemptCount;
- (id)setFullscreenCapsulePositionAttemptCount:(id)arg0;
- (id)fullscreenCapsulePositionTargetToken;
- (id)setFullscreenCapsulePositionTargetToken:(id)arg0;
- (id)fullscreenCapsulePositionEpoch;
- (id)setFullscreenCapsulePositionEpoch:(id)arg0;
@end

@interface WCLGHomeGroupsChrome : NSObject
{
    UIViewController * _controller; // @"UIViewController"
}
- (id)homeGroupBar:(id)arg0 didToggleDisplayIndex:(id)arg1;
- (id)homeGroupBar:(id)arg0 didRequestManageDisplayIndex:(id)arg1 sourceView:(id)arg2;
- (id)homeGroupBarDidRequestCreateGroup:(id)arg0;
- (id)controller;
- (id)setController:(id)arg0;
- (id)homeGroupBar:(id)arg0 didToggleDisplayIndex:(id)arg1;
- (id)homeGroupBar:(id)arg0 didToggleDisplayIndex:(id)arg1;
@end

@interface WCLGHomeGroupsGestureTarget : NSObject
- (id)gestureRecognizerShouldBegin:(id)arg0;
- (id)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (id)wclgHandleLongPress:(id)arg0;
@end

@interface WCLGHomeSwipeBlockerPan : UIPanGestureRecognizer
- (id)canPreventGestureRecognizer:(id)arg0;
- (id)canBePreventedByGestureRecognizer:(id)arg0;
@end

@interface WCLGHomeSwipeBlockerDelegate : NSObject
- (id)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (id)gestureRecognizerShouldBegin:(id)arg0;
- (id)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
@end

@interface WCLGHomeSwipeBlockerTarget : NSObject
+ (id)shared;
- (id)handlePan:(id)arg0;
@end

@interface WCLGHomeStripSwipeTarget : NSObject
+ (id)shared;
- (id)handleSwipe:(id)arg0;
- (id)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (id)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
@end

@interface WCLGHomePinnedController : NSObject
{
    NSString * _pendingAvatarUser; // @"NSString"
    NSNumber * _pendingMaskDark; // @"NSNumber"
}
- (id)refreshUI;
- (id)onSlotTap:(id)arg0;
- (id)onSlotLongPress:(id)arg0;
- (id)presentActionsForUser:(id)arg0 fromController:(id)arg1;
- (id)replaceFriend:(id)arg0 fromController:(id)arg1;
- (id)replaceAvatar:(id)arg0 fromController:(id)arg1;
- (id)removeUser:(id)arg0;
- (id)addContactFromController:(id)arg0 onChange:(id)arg1;
- (id)presentMaskPickerFromController:(id)arg0;
- (id)pickMaskForDark:(id)arg0 fromController:(id)arg1;
- (id)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1;
- (id)imagePickerControllerDidCancel:(id)arg0;
- (id)pendingAvatarUser;
- (id)setPendingAvatarUser:(id)arg0;
- (id)pendingMaskDark;
- (id)setPendingMaskDark:(id)arg0;
@end

@interface WCLGHomePinnedPanelView : UIView
{
    UIView * _panelBG; // @"UIView"
    UIScrollView * _scrollView; // @"UIScrollView"
    NSArray * _rows; // @"NSArray"
    NSMutableDictionary * _valueLabels; // @"NSMutableDictionary"
    UIView * _badgeSwatch; // @"UIView"
    CGPoint _dragStartCenter; // {CGPoint="x"d"y"d}
    BOOL _darkMode; // B
}
+ (id)rowDefinitions;
- (id)initForWindow:(id)arg0;
- (id)primaryTextColor;
- (id)secondaryTextColor;
- (id)separatorColor;
- (id)buildBackground;
- (id)buildHeader;
- (id)buildScrollContent:(id)arg0;
- (id)makePlainRowAtIndex:(id)arg0 title:(id)arg1 lastRow:(id)arg2;
- (id)makeTappableRowAtIndex:(id)arg0 title:(id)arg1 lastRow:(id)arg2;
- (id)addLabel:(id)arg0 separator:(id)arg1 toRow:(id)arg2 interactive:(id)arg3;
- (id)placeAccessory:(id)arg0 inRow:(id)arg1;
- (id)switchOnFor:(id)arg0;
- (id)addSwitchToRow:(id)arg0 def:(id)arg1 index:(id)arg2;
- (id)addSegmentToRow:(id)arg0 def:(id)arg1 index:(id)arg2;
- (id)addStepperToRow:(id)arg0 def:(id)arg1 index:(id)arg2;
- (id)addColorAccessoryToRow:(id)arg0 index:(id)arg1;
- (id)addActionAccessoryToRow:(id)arg0;
- (id)refreshBadgeSwatch;
- (id)closeTapped;
- (id)switchChanged:(id)arg0;
- (id)segmentChanged:(id)arg0;
- (id)stepperChanged:(id)arg0;
- (id)rowTapped:(id)arg0;
- (id)badgeColorTapped;
- (id)dismissTopModal;
- (id)handlePan:(id)arg0;
- (id)clampedCenter:(id)arg0 inBounds:(id)arg1;
- (id)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (id)panelBG;
- (id)setPanelBG:(id)arg0;
- (id)scrollView;
- (id)setScrollView:(id)arg0;
- (id)rows;
- (id)setRows:(id)arg0;
- (id)valueLabels;
- (id)setValueLabels:(id)arg0;
- (id)badgeSwatch;
- (id)setBadgeSwatch:(id)arg0;
- (id)dragStartCenter;
- (id)setDragStartCenter:(id)arg0;
- (id)darkMode;
- (id)setDarkMode:(id)arg0;
@end

@interface WCLGHomeTextHeaderWrapperView : UIView
- (id)layoutSubviews;
- (id)hitTest:(id)arg0 withEvent:(id)arg1;
@end

@interface WCLGHomeTextCardLongPressTarget : NSObject
+ (id)shared;
- (id)onLongPress:(id)arg0;
@end

@interface WCLGKeyboardObserver : NSObject
+ (id)sharedObserver;
- (id)updateFromNote:(id)arg0 visibleHint:(id)arg1;
- (id)keyboardWillShow:(id)arg0;
- (id)keyboardWillHide:(id)arg0;
- (id)keyboardDidShow:(id)arg0;
- (id)keyboardDidHide:(id)arg0;
- (id)keyboardWillChangeFrame:(id)arg0;
- (id)keyboardDidChangeFrame:(id)arg0;
@end

@interface WCLGForegroundReaffirm : NSObject
+ (id)sharedInstance;
- (id)appDidBecomeActive:(id)arg0;
@end

@interface WCLGSearchActionTarget : NSObject
+ (id)sharedTarget;
- (id)searchTapped:(id)arg0;
@end

@interface WCLGSearchTabBarOverlay : UIView
{
    UIView * _tabBar; // @"UIView"
    NSArray * _items; // @"NSArray"
    NSInteger _highlightedIndex; // q
    NSInteger _lastFeedbackHighlightedIndex; // q
    BOOL _overlayInteractionsEnabled; // B
    BOOL _hasStableTabFrame; // B
    id /* encoded: {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} */ _stableTabFrame; // {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}}
    BOOL _menuVisible; // B
    BOOL _overlayDisplayed; // B
    UIButton * _searchControl; // @"UIButton"
    UIPanGestureRecognizer * _searchPanGesture; // @"UIPanGestureRecognizer"
    UIVisualEffectView * _searchGlass; // @"UIVisualEffectView"
    UIImageView * _searchIconView; // @"UIImageView"
    UILabel * _searchLabel; // @"UILabel"
    UIButton * _modeButton; // @"UIButton"
    UIVisualEffectView * _modeGlass; // @"UIVisualEffectView"
    UIImageView * _modeIconView; // @"UIImageView"
    UIView * _modeBadgeDotView; // @"UIView"
    UILabel * _modeBadgeLabel; // @"UILabel"
    UIView * _menuView; // @"UIView"
    UIVisualEffectView * _menuGlass; // @"UIVisualEffectView"
    UIView * _menuMaterialView; // @"UIView"
    NSMutableArray * _optionButtons; // @"NSMutableArray"
    BOOL _selectingIndex; // B
    BOOL _menuTouchActive; // B
    BOOL _modePanActive; // B
    BOOL _searchPanActive; // B
    BOOL _menuAnchoredToSearch; // B
}
- (id)initWithTabBar:(id)arg0;
- (id)isDarkMode;
- (id)glassView;
- (id)styleGlassControl:(id)arg0 glass:(id)arg1;
- (id)searchIcon;
- (id)badgeRedColor;
- (id)applyBadge:(id)arg0 dotView:(id)arg1 label:(id)arg2;
- (id)applyModeBadgeFromItem:(id)arg0 fallbackBadge:(id)arg1;
- (id)badgeLabelWidthForText:(id)arg0 height:(id)arg1;
- (id)lightFeedback;
- (id)selectionFeedback;
- (id)resetControlInteractionState;
- (id)applySystemGlassButtonConfigurationsWithSizeMode:(id)arg0 primary:(id)arg1 secondary:(id)arg2;
- (id)buildSubviews;
- (id)pointInside:(id)arg0 withEvent:(id)arg1;
- (id)hitTest:(id)arg0 withEvent:(id)arg1;
- (id)currentIndex;
- (id)nativeIndexForMenuRow:(id)arg0 count:(id)arg1;
- (id)refreshWithItems:(id)arg0;
- (id)layoutSubviews;
- (id)optionPressBegan:(id)arg0;
- (id)optionPressEnded:(id)arg0;
- (id)setMenuVisible:(id)arg0 animated:(id)arg1;
- (id)setOverlayDisplayed:(id)arg0 animated:(id)arg1 interactive:(id)arg2;
- (id)setOverlayDisplayed:(id)arg0 animated:(id)arg1;
- (id)gestureRecognizerShouldBegin:(id)arg0;
- (id)modeTapped:(id)arg0;
- (id)modePanned:(id)arg0;
- (id)searchPanned:(id)arg0;
- (id)optionTapped:(id)arg0;
- (id)overlayTapped:(id)arg0;
- (id)optionIndexAtPointInMenu:(id)arg0;
- (id)optionIndexAtGesture:(id)arg0;
- (id)optionIndexAtTouch:(id)arg0;
- (id)optionIndexAtOverlayPoint:(id)arg0;
- (id)updateOptionHighlights;
- (id)touchesBegan:(id)arg0 withEvent:(id)arg1;
- (id)touchesMoved:(id)arg0 withEvent:(id)arg1;
- (id)touchesEnded:(id)arg0 withEvent:(id)arg1;
- (id)touchesCancelled:(id)arg0 withEvent:(id)arg1;
- (id)modeLongPressed:(id)arg0;
- (id)selectIndex:(id)arg0;
- (id)tabBar;
- (id)setTabBar:(id)arg0;
- (id)items;
- (id)setItems:(id)arg0;
- (id)searchControl;
- (id)setSearchControl:(id)arg0;
- (id)searchPanGesture;
- (id)setSearchPanGesture:(id)arg0;
- (id)searchGlass;
- (id)setSearchGlass:(id)arg0;
- (id)searchIconView;
- (id)setSearchIconView:(id)arg0;
- (id)searchLabel;
- (id)setSearchLabel:(id)arg0;
- (id)modeButton;
- (id)setModeButton:(id)arg0;
- (id)modeGlass;
- (id)setModeGlass:(id)arg0;
- (id)modeIconView;
- (id)setModeIconView:(id)arg0;
- (id)modeBadgeDotView;
- (id)setModeBadgeDotView:(id)arg0;
- (id)modeBadgeLabel;
- (id)setModeBadgeLabel:(id)arg0;
- (id)menuView;
- (id)setMenuView:(id)arg0;
- (id)menuGlass;
- (id)setMenuGlass:(id)arg0;
- (id)menuMaterialView;
- (id)setMenuMaterialView:(id)arg0;
- (id)optionButtons;
- (id)setOptionButtons:(id)arg0;
- (id)highlightedIndex;
- (id)setHighlightedIndex:(id)arg0;
- (id)menuVisible;
- (id)setMenuVisible:(id)arg0;
- (id)selectingIndex;
- (id)setSelectingIndex:(id)arg0;
- (id)menuTouchActive;
- (id)setMenuTouchActive:(id)arg0;
- (id)modePanActive;
- (id)setModePanActive:(id)arg0;
- (id)searchPanActive;
- (id)setSearchPanActive:(id)arg0;
- (id)menuAnchoredToSearch;
- (id)setMenuAnchoredToSearch:(id)arg0;
- (id)lastFeedbackHighlightedIndex;
- (id)setLastFeedbackHighlightedIndex:(id)arg0;
- (id)overlayDisplayed;
- (id)setOverlayDisplayed:(id)arg0;
- (id)overlayInteractionsEnabled;
- (id)setOverlayInteractionsEnabled:(id)arg0;
- (id)hasStableTabFrame;
- (id)setHasStableTabFrame:(id)arg0;
- (id)stableTabFrame;
- (id)setStableTabFrame:(id)arg0;
@end

@interface WCLGTextEditorViewController : UIViewController
{
    NSString * _initialText; // @"NSString"
    NSString * _placeholderText; // @"NSString"
    id /* block */ _saveHandler; // @?
    UITextView * _textView; // @"UITextView"
    UILabel * _hintLabel; // @"UILabel"
    double _keyboardOverlap; // d
}
- (id)dealloc;
- (id)initWithTitle:(id)arg0 text:(id)arg1 placeholder:(id)arg2 handler:(id)arg3;
- (id)viewDidLoad;
- (id)viewDidLayoutSubviews;
- (id)layoutTextEditorViews;
- (id)viewDidAppear:(id)arg0;
- (id)keyboardFrameChanged:(id)arg0;
- (id)saveTapped;
- (id)initialText;
- (id)setInitialText:(id)arg0;
- (id)placeholderText;
- (id)setPlaceholderText:(id)arg0;
- (id)saveHandler;
- (id)setSaveHandler:(id)arg0;
- (id)textView;
- (id)setTextView:(id)arg0;
- (id)hintLabel;
- (id)setHintLabel:(id)arg0;
- (id)keyboardOverlap;
- (id)setKeyboardOverlap:(id)arg0;
@end

@interface WCLGSettingsViewController : UIViewController
{
    NSInteger _panel; // q
    UITableView * _tableView; // @"UITableView"
    UIView * _backgroundContainer; // @"UIView"
    CAGradientLayer * _backgroundGradientA; // @"CAGradientLayer"
    CAGradientLayer * _backgroundGradientB; // @"CAGradientLayer"
    BOOL _rootTableRevealed; // B
    WCLGEdgeEffectView * _rootTopFadeView; // @"WCLGEdgeEffectView"
    WCLGEdgeEffectView * _rootBottomFadeView; // @"WCLGEdgeEffectView"
    CAGradientLayer * _rootEdgeFadeMask; // @"CAGradientLayer"
}
- (id)init;
- (id)initWithPanel:(id)arg0;
+ (id)homeGroupsSettingsController;
- (id)wclgDismissModal;
- (id)isDarkMode;
- (id)cellBackgroundColor;
- (id)primaryTextColor;
- (id)secondaryTextColor;
- (id)authorizationCellBackgroundColorForAllowed:(id)arg0;
- (id)applyAuthorizationBackgroundToCell:(id)arg0 allowed:(id)arg1;
- (id)gradientColorsA;
- (id)gradientColorsB;
- (id)setupBackground;
- (id)refreshBackground;
- (id)startBackgroundAnimations;
- (id)tableFrameForCurrentBounds;
- (id)layoutSettingsTableForCurrentBounds;
- (id)viewDidLoad;
- (id)viewWillAppear:(id)arg0;
- (id)viewDidAppear:(id)arg0;
- (id)viewDidLayoutSubviews;
- (id)traitCollectionDidChange:(id)arg0;
- (id)refreshRootEdgeFadeMaskFrame;
- (id)suppressRootNativeEdgeEffectsRecursively:(id)arg0;
- (id)refreshRootEdgeFades;
- (id)scrollViewDidScroll:(id)arg0;
- (id)dismissSettings;
- (id)titleForPanel:(id)arg0;
- (id)headerViewWithWidth:(id)arg0;
- (id)numberOfSectionsInTableView:(id)arg0;
- (id)tableView:(id)arg0 numberOfRowsInSection:(id)arg1;
- (id)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1;
- (id)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1;
- (id)tableView:(id)arg0 shouldIndentWhileEditingRowAtIndexPath:(id)arg1;
- (id)tableView:(id)arg0 canMoveRowAtIndexPath:(id)arg1;
- (id)tableView:(id)arg0 targetIndexPathForMoveFromRowAtIndexPath:(id)arg1 toProposedIndexPath:(id)arg2;
- (id)tableView:(id)arg0 moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (id)tableView:(id)arg0 titleForHeaderInSection:(id)arg1;
- (id)tableView:(id)arg0 heightForHeaderInSection:(id)arg1;
- (id)tableView:(id)arg0 titleForFooterInSection:(id)arg1;
- (id)tableView:(id)arg0 heightForFooterInSection:(id)arg1;
- (id)rootFooterHeightForTableView:(id)arg0;
- (id)tableView:(id)arg0 viewForFooterInSection:(id)arg1;
- (id)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id)preparedSettingsCellForTableView:(id)arg0;
- (id)configureSwitchCell:(id)arg0 switch:(id)arg1 title:(id)arg2 detail:(id)arg3 tag:(id)arg4 on:(id)arg5 enabled:(id)arg6;
- (id)configurePickerCell:(id)arg0 title:(id)arg1 detail:(id)arg2 enabled:(id)arg3;
- (id)configureSegmentedCell:(id)arg0 title:(id)arg1 items:(id)arg2 selectedIndex:(id)arg3 tag:(id)arg4 enabled:(id)arg5;
- (id)tabBarIconOffsetDisplayValue:(id)arg0;
- (id)tabBarAdjustmentModeTitle:(id)arg0;
- (id)tabBarIconOffsetDetailForMode:(id)arg0 axis:(id)arg1;
- (id)tabBarIconSpacingDetailForMode:(id)arg0;
- (id)configureTabBarIconOffsetCell:(id)arg0 axis:(id)arg1 value:(id)arg2 enabled:(id)arg3;
- (id)tabBarIconScaleDisplayValue:(id)arg0;
- (id)configureTabBarIconScaleCell:(id)arg0 value:(id)arg1 enabled:(id)arg2;
- (id)homeTextMetricDisplayValue:(id)arg0 suffix:(id)arg1;
- (id)configureHomeTextMetricCell:(id)arg0 title:(id)arg1 detail:(id)arg2 value:(id)arg3 minimum:(id)arg4 maximum:(id)arg5 step:(id)arg6 tag:(id)arg7;
- (id)displayNameForHomeCardID:(id)arg0;
- (id)configureFuncCardStepperCell:(id)arg0 title:(id)arg1 detail:(id)arg2 value:(id)arg3 minimum:(id)arg4 maximum:(id)arg5 step:(id)arg6 suffix:(id)arg7 tag:(id)arg8;
- (id)rootCardWithFrame:(id)arg0 title:(id)arg1 detail:(id)arg2 symbol:(id)arg3 tag:(id)arg4 enabled:(id)arg5 switchView:(id)arg6;
- (id)rootGridCellForTableView:(id)arg0 indexPath:(id)arg1;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)showOfficialAccountAlert;
- (id)officialAccountReadyForAction;
- (id)reconcileDependentFeatureSwitches;
- (id)promptRestartForLiquidToggle;
- (id)applySMSIconVariantSegment:(id)arg0 enabledKey:(id)arg1 weightKey:(id)arg2 refreshWindows:(id)arg3 refreshTopMorphActions:(id)arg4 refreshSMSBackChevron:(id)arg5;
- (id)segmentedControlChanged:(id)arg0;
- (id)toggleSwitch:(id)arg0;
- (id)tabBarIconOffsetStepperChanged:(id)arg0;
- (id)tabBarIconScaleStepperChanged:(id)arg0;
- (id)homeTextMetricStepperChanged:(id)arg0;
- (id)funcCardStepperChanged:(id)arg0;
- (id)openReleasePage;
- (id)promptAddHomeGroup;
- (id)promptRenameHomeGroup:(id)arg0;
- (id)presentHomeGroupActionsForGroup:(id)arg0 atDisplayIndex:(id)arg1;
- (id)configureHomeGroupsOffsetSliderCell:(id)arg0 value:(id)arg1 enabled:(id)arg2;
- (id)homeGroupsOffsetSliderChanged:(id)arg0;
- (id)homeGroupsOffsetSliderDone:(id)arg0;
- (id)configureChatBubbleCompactGapSliderCell:(id)arg0 title:(id)arg1 key:(id)arg2 value:(id)arg3 enabled:(id)arg4;
- (id)configureChatIndentSliderCell:(id)arg0 title:(id)arg1 key:(id)arg2 value:(id)arg3 enabled:(id)arg4;
- (id)configureAvatarCardSliderCell:(id)arg0 title:(id)arg1 key:(id)arg2 value:(id)arg3 minimum:(id)arg4 maximum:(id)arg5 enabled:(id)arg6;
- (id)chatBubbleCompactGapSliderChanged:(id)arg0;
- (id)chatBubbleCompactGapSliderDone:(id)arg0;
- (id)configureAvatarScaleSliderCell:(id)arg0 title:(id)arg1 key:(id)arg2 value:(id)arg3 enabled:(id)arg4;
- (id)avatarScaleSliderChanged:(id)arg0;
- (id)avatarScaleSliderDone:(id)arg0;
- (id)wclgPresentSingleBubblePositionPicker;
- (id)wclgPresentBubblePackPicker;
- (id)wclgBubbleActionThumbnailForName:(id)arg0;
- (id)wclgAttachBubbleThumbnailForName:(id)arg0 toAction:(id)arg1;
- (id)wclgPresentBubbleRolePickerSender:(id)arg0 dark:(id)arg1;
- (id)configureMergeInsetSliderCell:(id)arg0 title:(id)arg1 detail:(id)arg2 key:(id)arg3 value:(id)arg4 enabled:(id)arg5;
- (id)mergeInsetSliderChanged:(id)arg0;
- (id)mergeInsetSliderDone:(id)arg0;
- (id)configureHomeGroupsGapSliderCell:(id)arg0 value:(id)arg1 enabled:(id)arg2;
- (id)homeGroupsGapSliderChanged:(id)arg0;
- (id)homeGroupsGapSliderDone:(id)arg0;
- (id)configureHomeGroupsWidthSliderCell:(id)arg0 value:(id)arg1 enabled:(id)arg2;
- (id)homeGroupsWidthSliderChanged:(id)arg0;
- (id)homeGroupsWidthSliderDone:(id)arg0;
- (id)configureHomeGroupsStripFontSliderCell:(id)arg0 value:(id)arg1 enabled:(id)arg2;
- (id)homeGroupsStripFontSliderChanged:(id)arg0;
- (id)homeGroupsStripFontSliderDone:(id)arg0;
- (id)configureHomeGroupsStripWidthSliderCell:(id)arg0 value:(id)arg1 enabled:(id)arg2;
- (id)homeGroupsStripWidthSliderChanged:(id)arg0;
- (id)homeGroupsStripWidthSliderDone:(id)arg0;
- (id)configureHomeGroupsStripOffsetSliderCell:(id)arg0 value:(id)arg1 enabled:(id)arg2;
- (id)homeGroupsStripOffsetSliderChanged:(id)arg0;
- (id)homeGroupsStripOffsetSliderDone:(id)arg0;
- (id)wclgDefaultExpandedGroupName;
- (id)presentHomeGroupsFullscreenEdgePicker;
- (id)wclgFullscreenDefaultGroupName;
- (id)presentHomeGroupsFullscreenDefaultGroupPicker;
- (id)presentHomeGroupsDefaultExpandedPicker;
- (id)presentHomeGroupsDefaultActionsAtIndex:(id)arg0;
- (id)presentHomeListCardValuePickerWithTitle:(id)arg0 message:(id)arg1 options:(id)arg2 optionTitler:(id)arg3 currentValue:(id)arg4 onPick:(id)arg5;
- (id)configureHomeListCardInsetSliderCell:(id)arg0 value:(id)arg1 enabled:(id)arg2;
- (id)homeListCardInsetSliderChanged:(id)arg0;
- (id)homeListCardInsetSliderDone:(id)arg0;
- (id)configureHomeCardCornerSliderCell:(id)arg0 title:(id)arg1 value:(id)arg2 key:(id)arg3 enabled:(id)arg4;
- (id)homeCardCornerSliderChanged:(id)arg0;
- (id)homeCardCornerSliderDone:(id)arg0;
- (id)presentHomeListCardGapPicker;
- (id)pushHomeListCardColorPicker;
- (id)presentHomeGroupsTextColorPicker;
- (id)pushHomeGroupsPillColorPickerSelected:(id)arg0;
- (id)presentHomeGroupsBadgeColorPicker;
- (id)pushHomeGroupsStripSelectedColorPicker;
- (id)presentHomePinnedBadgeColorPicker;
- (id)presentHomeGroupMembersForGroupID:(id)arg0;
- (id)rootCardTapped:(id)arg0;
- (id)pushHomeTextContentEditor;
- (id)pushFunctionCardHTMLEditor;
- (id)pushFunctionCardCodeLibrary;
- (id)pushFunctionCardURLEditor;
- (id)pushHomeCapsulePinnedColorPickerTitle:(id)arg0 lightKey:(id)arg1 darkKey:(id)arg2 lightMode:(id)arg3 darkMode:(id)arg4;
- (id)pushFunctionCardColorPickerKey:(id)arg0 title:(id)arg1;
- (id)pushVoiceWaveColorPicker;
- (id)pushHomeTextFontSizesEditor;
- (id)pushHomeTextFontWeightsEditor;
- (id)pushSearchTabBarPlaceholderEditor;
- (id)presentSearchTabBarBadgeColorPicker;
- (id)pushChatBottomPlaceholderEditor;
- (id)pushHomeTextColorPickerWithPurpose:(id)arg0 key:(id)arg1 darkKey:(id)arg2 defaultMode:(id)arg3;
- (id)pushPaymentBubbleTextColorPicker;
- (id)pushAvatarCardColorPickerTitle:(id)arg0 lightKey:(id)arg1 darkKey:(id)arg2;
- (id)promptAvatarCardTimeFormatForSelf:(id)arg0;
- (id)pushChatTextColorPickerForSend:(id)arg0;
- (id)pushChatBottomSMSSendColorPicker;
- (id)wclgPromptChatTopCapsuleSubtitle;
- (id)pushSMSBottomBarIconColorPicker;
- (id)openImagePickerWithPurpose:(id)arg0 allowsEditing:(id)arg1;
- (id)openChatBottomTGAvatarImagePicker;
- (id)openHomePinnedMaskImagePickerForDark:(id)arg0;
- (id)openHomePinnedMaskDocumentPickerForDark:(id)arg0;
- (id)documentPicker:(id)arg0 didPickDocumentsAtURLs:(id)arg1;
- (id)presentHomePinnedMaskPicker;
- (id)openChatWallpaperImagePickerForDarkMode:(id)arg0;
- (id)openHomeWallpaperImagePickerForDarkMode:(id)arg0;
- (id)presentChatBottomTGAvatarPicker;
- (id)presentChatWallpaperPickerForDarkMode:(id)arg0;
- (id)presentHomeWallpaperPickerForDarkMode:(id)arg0;
- (id)refreshLibraryFooter;
- (id)buildImageLibraryFooterWithWidth:(id)arg0 category:(id)arg1 title:(id)arg2;
- (id)currentLibraryCategory;
- (id)presentMultiPhotoPickerForLibraryCategory:(id)arg0;
- (id)presentMultiDocumentPickerForLibraryCategory:(id)arg0;
- (id)finishLibraryBatchAdd:(id)arg0 category:(id)arg1;
- (id)picker:(id)arg0 didFinishPicking:(id)arg1;
- (id)imageLibraryAddTapped:(id)arg0;
- (id)imageLibraryThumbTapped:(id)arg0;
- (id)presentSubtitleIconLibraryActionsForItem:(id)arg0 sourceView:(id)arg1;
- (id)presentWallpaperHistoryActionsForItem:(id)arg0 sourceView:(id)arg1;
- (id)presentAvatarLibraryActionsForItem:(id)arg0 sourceView:(id)arg1;
- (id)afterImageLibraryChanged;
- (id)roundedThumbForImage:(id)arg0 side:(id)arg1;
- (id)displayNameForWxid:(id)arg0;
- (id)configureAvatarUserCell:(id)arg0 wxid:(id)arg1;
- (id)handleAvatarReplaceSelectionAtRow:(id)arg0 sourceView:(id)arg1;
- (id)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1;
- (id)imagePickerControllerDidCancel:(id)arg0;
- (id)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (id)pushTabBarRightSearchSizePicker;
- (id)pushSearchTabBarSizePicker;
- (id)pushColorPickerOutgoing:(id)arg0;
- (id)pushFlowColorPickerStart:(id)arg0;
- (id)pushChatTopMorphDefaultPickerForGroup:(id)arg0;
- (id)pushBottomGlassModePicker;
- (id)pushGlassSizePicker;
- (id)showAdminContactAlert;
- (id)tableView;
- (id)setTableView:(id)arg0;
- (id)backgroundContainer;
- (id)setBackgroundContainer:(id)arg0;
- (id)backgroundGradientA;
- (id)setBackgroundGradientA:(id)arg0;
- (id)backgroundGradientB;
- (id)setBackgroundGradientB:(id)arg0;
- (id)panel;
- (id)setPanel:(id)arg0;
- (id)rootTableRevealed;
- (id)setRootTableRevealed:(id)arg0;
- (id)rootTopFadeView;
- (id)setRootTopFadeView:(id)arg0;
- (id)rootBottomFadeView;
- (id)setRootBottomFadeView:(id)arg0;
- (id)rootEdgeFadeMask;
- (id)setRootEdgeFadeMask:(id)arg0;
@end

@interface WCLGTabBarVisualHostView : UIVisualEffectView
@end

@interface WCLGGetButton : UIControl
{
    BOOL _downloading; // B
    id /* block */ _onTap; // @?
    UIView * _pill; // @"UIView"
    UIImageView * _pillIcon; // @"UIImageView"
    UILabel * _pillLabel; // @"UILabel"
    CAShapeLayer * _track; // @"CAShapeLayer"
    CAShapeLayer * _ring; // @"CAShapeLayer"
    CALayer * _stopSquare; // @"CALayer"
}
- (id)initWithFrame:(id)arg0;
- (id)setIdleTitle:(id)arg0 icon:(id)arg1;
- (id)setDownloading:(id)arg0;
- (id)setProgress:(id)arg0;
- (id)layoutSubviews;
- (id)tapped;
- (id)onTap;
- (id)setOnTap:(id)arg0;
- (id)pill;
- (id)setPill:(id)arg0;
- (id)pillIcon;
- (id)setPillIcon:(id)arg0;
- (id)pillLabel;
- (id)setPillLabel:(id)arg0;
- (id)track;
- (id)setTrack:(id)arg0;
- (id)ring;
- (id)setRing:(id)arg0;
- (id)stopSquare;
- (id)setStopSquare:(id)arg0;
- (id)downloading;
@end

@interface WCLGImageZoom : UIViewController
{
    UIImage * _image; // @"UIImage"
    UIScrollView * _scroll; // @"UIScrollView"
    UIImageView * _imageView; // @"UIImageView"
}
- (id)initWithImage:(id)arg0;
- (id)viewDidLoad;
- (id)viewForZoomingInScrollView:(id)arg0;
- (id)doubleTap:(id)arg0;
- (id)dismissSelf;
- (id)image;
- (id)setImage:(id)arg0;
- (id)scroll;
- (id)setScroll:(id)arg0;
- (id)imageView;
- (id)setImageView:(id)arg0;
@end

@interface WCLGThemeDetailViewController : UIViewController
{
    WCLGGlassTheme * _theme; // @"WCLGGlassTheme"
    id /* block */ _downloadHandler; // @?
    WKWebView * _cardPreviewWebView; // @"WKWebView"
    NSString * _cardPreviewMediaScope; // @"NSString"
    WCLGGlassBackgroundView * _bg; // @"WCLGGlassBackgroundView"
    UIScrollView * _scroll; // @"UIScrollView"
    WCLGGetButton * _getButton; // @"WCLGGetButton"
    UILabel * _speedLabel; // @"UILabel"
    BOOL _downloadedNow; // B
    BOOL _readyToApply; // B
    BOOL _appliedNow; // B
    UIView * _cardPreviewContainer; // @"UIView"
    UIScrollView * _cardPreviewViewport; // @"UIScrollView"
    NSObject * _cardPreviewMediaController; // @"NSObject"
    UILabel * _cardPreviewStatus; // @"UILabel"
    WKNavigation * _cardPreviewNavigation; // @"WKNavigation"
    NSUInteger _cardPreviewGeneration; // Q
    double _cardPreviewLayoutWidth; // d
}
- (id)initWithTheme:(id)arg0 download:(id)arg1;
- (id)dealloc;
- (id)viewDidLoad;
- (id)stateTitle;
- (id)stateIcon;
- (id)buildContent;
- (id)addSubPackagesAtY:(id)arg0 width:(id)arg1 pad:(id)arg2;
- (id)subPackageTapped:(id)arg0;
- (id)wclgDismissModal;
- (id)addLiveCardPreviewAtY:(id)arg0 width:(id)arg1 pad:(id)arg2;
- (id)layoutLiveCardPreviewForWidth:(id)arg0;
- (id)viewDidLayoutSubviews;
- (id)loadLiveCardPreview;
- (id)renderLiveCardPreviewHTML:(id)arg0 generation:(id)arg1;
- (id)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id)arg2;
- (id)webView:(id)arg0 didFinishNavigation:(id)arg1;
- (id)webView:(id)arg0 didFailNavigation:(id)arg1 withError:(id)arg2;
- (id)webView:(id)arg0 didFailProvisionalNavigation:(id)arg1 withError:(id)arg2;
- (id)showCardPreviewNavigationError:(id)arg0 navigation:(id)arg1 inWebView:(id)arg2;
- (id)traitCollectionDidChange:(id)arg0;
- (id)addSeparatorAtY:(id)arg0 width:(id)arg1 pad:(id)arg2;
- (id)previewTapped:(id)arg0;
- (id)startDownload;
- (id)primaryButtonTapped;
- (id)percentText:(id)arg0;
- (id)speedText:(id)arg0;
- (id)toast:(id)arg0;
- (id)theme;
- (id)setTheme:(id)arg0;
- (id)downloadHandler;
- (id)setDownloadHandler:(id)arg0;
- (id)bg;
- (id)setBg:(id)arg0;
- (id)scroll;
- (id)setScroll:(id)arg0;
- (id)getButton;
- (id)setGetButton:(id)arg0;
- (id)speedLabel;
- (id)setSpeedLabel:(id)arg0;
- (id)downloadedNow;
- (id)setDownloadedNow:(id)arg0;
- (id)readyToApply;
- (id)setReadyToApply:(id)arg0;
- (id)appliedNow;
- (id)setAppliedNow:(id)arg0;
- (id)cardPreviewContainer;
- (id)setCardPreviewContainer:(id)arg0;
- (id)cardPreviewViewport;
- (id)setCardPreviewViewport:(id)arg0;
- (id)cardPreviewWebView;
- (id)setCardPreviewWebView:(id)arg0;
- (id)cardPreviewMediaController;
- (id)setCardPreviewMediaController:(id)arg0;
- (id)cardPreviewMediaScope;
- (id)setCardPreviewMediaScope:(id)arg0;
- (id)cardPreviewStatus;
- (id)setCardPreviewStatus:(id)arg0;
- (id)cardPreviewNavigation;
- (id)setCardPreviewNavigation:(id)arg0;
- (id)cardPreviewGeneration;
- (id)setCardPreviewGeneration:(id)arg0;
- (id)cardPreviewLayoutWidth;
- (id)setCardPreviewLayoutWidth:(id)arg0;
@end

@interface WCLGThemeManageCell : UITableViewCell
{
    UIImageView * _themeIconView; // @"UIImageView"
    UILabel * _nameLabel; // @"UILabel"
    UILabel * _detailLabel; // @"UILabel"
    UILabel * _activeLabel; // @"UILabel"
    UIImageView * _menuIconView; // @"UIImageView"
}
- (id)initWithStyle:(id)arg0 reuseIdentifier:(id)arg1;
- (id)configureWithItem:(id)arg0 active:(id)arg1;
- (id)configureNoneForType:(id)arg0 active:(id)arg1;
- (id)themeIconView;
- (id)setThemeIconView:(id)arg0;
- (id)nameLabel;
- (id)setNameLabel:(id)arg0;
- (id)detailLabel;
- (id)setDetailLabel:(id)arg0;
- (id)activeLabel;
- (id)setActiveLabel:(id)arg0;
- (id)menuIconView;
- (id)setMenuIconView:(id)arg0;
@end

@interface WCLGThemeManageViewController : UIViewController
{
    UISegmentedControl * _seg; // @"UISegmentedControl"
    UIView * _segBar; // @"UIView"
    UILabel * _currentLabel; // @"UILabel"
    WCLGGlassBackgroundView * _bg; // @"WCLGGlassBackgroundView"
    UITableView * _tableView; // @"UITableView"
    UILabel * _emptyLabel; // @"UILabel"
    NSArray * _bubbles; // @"NSArray"
    NSArray * _cards; // @"NSArray"
    NSDictionary * _catalogIconURLs; // @"NSDictionary"
    BOOL _loadingCatalogIcons; // B
    BOOL _catalogIconsLoaded; // B
}
- (id)viewDidLoad;
- (id)viewWillAppear:(id)arg0;
- (id)viewDidLayoutSubviews;
- (id)reload;
- (id)loadCatalogIconsIfNeeded;
- (id)segChanged;
- (id)current;
- (id)currentType;
- (id)activeThemeId;
- (id)isActiveItem:(id)arg0;
- (id)updateCurrentStatus;
- (id)updateEmpty;
- (id)tableView:(id)arg0 numberOfRowsInSection:(id)arg1;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (id)deactivateCurrentTheme;
- (id)presentActionsForTheme:(id)arg0 sourceView:(id)arg1;
- (id)confirmRevoke:(id)arg0;
- (id)applyTheme:(id)arg0;
- (id)removeLocal:(id)arg0;
- (id)revoke:(id)arg0;
- (id)toast:(id)arg0;
- (id)dismissSelf;
- (id)seg;
- (id)setSeg:(id)arg0;
- (id)segBar;
- (id)setSegBar:(id)arg0;
- (id)currentLabel;
- (id)setCurrentLabel:(id)arg0;
- (id)bg;
- (id)setBg:(id)arg0;
- (id)tableView;
- (id)setTableView:(id)arg0;
- (id)emptyLabel;
- (id)setEmptyLabel:(id)arg0;
- (id)bubbles;
- (id)setBubbles:(id)arg0;
- (id)cards;
- (id)setCards:(id)arg0;
- (id)catalogIconURLs;
- (id)setCatalogIconURLs:(id)arg0;
- (id)loadingCatalogIcons;
- (id)setLoadingCatalogIcons:(id)arg0;
- (id)catalogIconsLoaded;
- (id)setCatalogIconsLoaded:(id)arg0;
- (id)tableView:(id)arg0 numberOfRowsInSection:(id)arg1;
- (id)tableView:(id)arg0 numberOfRowsInSection:(id)arg1;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
@end

@interface WCLGVoiceWaveView : UIView
{
    NSMutableArray * _bars; // @"NSMutableArray"
    UILabel * _timeLabel; // @"UILabel"
    NSInteger _status; // q
    UIColor * _baseColor; // @"UIColor"
    NSInteger _lastWholeSecond; // q
    CADisplayLink * _link; // @"CADisplayLink"
    BOOL _lockColor; // B
    double _startTime; // d
}
- (id)initWithFrame:(id)arg0;
- (id)wclgColorForStatus:(id)arg0;
- (id)wclgApplyColors;
- (id)dealloc;
- (id)wclgBarsArea;
- (id)layoutSubviews;
- (id)wclgLayoutBarsWithProvider:(id)arg0;
- (id)setStatus:(id)arg0;
- (id)setBaseColor:(id)arg0;
- (id)setLockColor:(id)arg0;
- (id)startRecording;
- (id)stopRecording;
- (id)wclgTick:(id)arg0;
- (id)status;
- (id)baseColor;
- (id)lockColor;
- (id)bars;
- (id)setBars:(id)arg0;
- (id)timeLabel;
- (id)setTimeLabel:(id)arg0;
- (id)link;
- (id)setLink:(id)arg0;
- (id)startTime;
- (id)setStartTime:(id)arg0;
- (id)lastWholeSecond;
- (id)setLastWholeSecond:(id)arg0;
@end
