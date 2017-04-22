//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@interface BaseMsgContentViewController
{
    NSMutableArray *m_arrMessageNodeData;	// 136 = 0x88
    unsigned int m_uLastTime;	// 144 = 0x90
    unsigned int m_uLastMoreMsgTime;	// 148 = 0x94
    _Bool m_bKeyboardShow;	// 152 = 0x98
    _Bool m_bToolViewHidden;	// 153 = 0x99
    unsigned long long m_moreMsgIndex;	// 160 = 0xa0
    _Bool m_bReadtToLoadMoreMsg;	// 168 = 0xa8
    id <BaseMsgContentDelgate> m_delegate;	// 176 = 0xb0
    id <BaseMsgContentInBackgroundThreadDelgate> m_backgroundThreadDelegate;	// 184 = 0xb8
    Class m_delegateClass;	// 192 = 0xc0
    MMTimer *m_LockerTimer;	// 200 = 0xc8
    MMTimer *m_updateTimeLabelTimer;	// 208 = 0xd0
    MMTableView *m_tableView;	// 216 = 0xd8
    UIActivityIndicatorView *m_activityView;	// 224 = 0xe0
    UIView *m_headerView;	// 232 = 0xe8
    MMInputToolView *_inputToolView;	// 240 = 0xf0
    UIView *m_backgroundView;	// 248 = 0xf8
    NSMutableArray *m_arrDeleteRows;	// 256 = 0x100
    UIView *m_deleteContainView;	// 264 = 0x108
    _Bool m_bViewDidAppear;	// 272 = 0x110
    TrackRoomTipsView *m_trackTipsView;	// 280 = 0x118
//    struct vector<Class, std::__1::allocator<Class>> m_messageNodeClass;	// 288 = 0x120
    _Bool m_bViewUnloaded;	// 312 = 0x138
    struct CGPoint m_pTableViewOffset;	// 320 = 0x140
    long long m_keyboardHeight;	// 336 = 0x150
    NSString *m_text;	// 344 = 0x158
    int m_inputMode;	// 352 = 0x160
    int m_positionMode;	// 356 = 0x164
    int m_contentMode;	// 360 = 0x168
    double m_fKeyboardAnimationDuration;	// 368 = 0x170
//    MsgSearchHelper *m_oMsgSearchHelper;	// 376 = 0x178
    int m_iInitTableViewContentOffset;	// 384 = 0x180
    _Bool m_bNeedAdjustTableViewContentOffset;	// 388 = 0x184
    unsigned int m_uiSearchResultNodeViewHeight;	// 392 = 0x188
    long long m_uiInterfaceOrientation;	// 400 = 0x190
//    MMLoadingView *m_loadingView;	// 408 = 0x198
//    ShareMessageConfirmLogicHelper *_shareMessageConfirmLogicHelper;	// 416 = 0x1a0
//    WXGesture *_gesture;	// 424 = 0x1a8
//    MMMultiSelectToolView *_multiSelectView;	// 432 = 0x1b0
    NSMutableArray *m_arrSelectMsgLocalID;	// 440 = 0x1b8
    UIView *m_msgReceivingTipsView;	// 448 = 0x1c0
    unsigned int m_uiSelectSearchMsgID;	// 456 = 0x1c8
//    TipsView *m_chatAddFriend;	// 464 = 0x1d0
//    TipsView *m_recommandFriend;	// 472 = 0x1d8
//    TipsView *m_securityBanner;	// 480 = 0x1e0
    _Bool m_bChatAddFriendShow;	// 488 = 0x1e8
    _Bool m_bSecurityBannerShow;	// 489 = 0x1e9
    _Bool m_bShouldShowKeyboardAnimation;	// 490 = 0x1ea
    _Bool m_bNeedToUpdateTitle;	// 491 = 0x1eb
    _Bool m_bIsRevokeAdding;	// 492 = 0x1ec
    int m_msgCounerDurOneSync;	// 496 = 0x1f0
    _Bool m_bHightlightedSearchedMsgNode;	// 500 = 0x1f4
    NSMutableDictionary *m_dicMesIdForCellIndex;	// 504 = 0x1f8
    struct CGPoint m_decelerateTarget;	// 512 = 0x200
    CMessageWrap *m_firstUnReadMsg;	// 528 = 0x210
//    FirstUnReadTipView *m_jumpFirstUnReadBtn;	// 536 = 0x218
    unsigned long long m_unreadCount;	// 544 = 0x220
//    MMScrollActionSheet *m_scrollActionSheet;	// 552 = 0x228
//    MMUIWindow *m_fullScreenWindow;	// 560 = 0x230
    CMessageNodeData *m_fullScreenNodeData;	// 568 = 0x238
    _Bool m_isMsgReceiveTipsJacking;	// 576 = 0x240
    unsigned int m_openTrackScene;	// 580 = 0x244
    struct timeval m_menuHideTime;	// 584 = 0x248
    _Bool m_shouldScrollToBottomAfterRotate;	// 600 = 0x258
    _Bool m_resignInputToolViewFirstResponder;	// 601 = 0x259
    _Bool m_textFloatPreviewHiding;	// 602 = 0x25a
    _Bool m_scrollingTableToBottom;	// 603 = 0x25b
    struct _NSRange m_scrollingInvisibleRange;	// 608 = 0x260
    _Bool m_scrollingToFirstUnRead;	// 624 = 0x270
    CMessageWrap *m_lastMsgInNewArray;	// 632 = 0x278
    _Bool m_needLoadMoreWhenScrollToFistUnRead;	// 640 = 0x280
    _Bool m_needHideFirstUnReadBtn;	// 641 = 0x281
    _Bool m_isInGestureTransition;	// 642 = 0x282
    _Bool m_bMovingToMainFrameTab;	// 643 = 0x283
    double m_bannerHeight;	// 648 = 0x288
    _Bool m_isPeekPreview;	// 656 = 0x290
//    MsgImgFullScreenWindow *m_imgFullScreenWnd;	// 664 = 0x298
    unsigned int m_uiEnterRoomTime;	// 672 = 0x2a0
    unsigned int m_uiEnterRoomUnreadCount;	// 676 = 0x2a4
    _Bool m_bCloseForViewDetail;	// 680 = 0x2a8
    UIImageView *m_showNewView;	// 688 = 0x2b0
    _Bool _m_bIsInMainFrame;	// 696 = 0x2b8
    int m_searchScene;	// 700 = 0x2bc
    NSMutableArray *m_shareContacts;	// 704 = 0x2c0
//    BadRoomLogicController *_m_badRoomLogicController;	// 712 = 0x2c8
}

@property(retain, nonatomic) BadRoomLogicController *m_badRoomLogicController; // @synthesize m_badRoomLogicController=_m_badRoomLogicController;
@property(nonatomic) _Bool m_bIsInMainFrame; // @synthesize m_bIsInMainFrame=_m_bIsInMainFrame;
@property(nonatomic) int m_searchScene; // @synthesize m_searchScene;
@property(retain, nonatomic) NSMutableArray *m_shareContacts; // @synthesize m_shareContacts;
@property(retain, nonatomic) UIView *m_msgReceivingTipsView; // @synthesize m_msgReceivingTipsView;
@property(retain, nonatomic) WXGesture *gesture; // @synthesize gesture=_gesture;
@property(retain, nonatomic) MMTimer *m_LockerTimer; // @synthesize m_LockerTimer;
@property(retain, nonatomic) MMInputToolView *toolView; // @synthesize toolView=_inputToolView;
@property(retain, nonatomic) MMTimer *m_updateTimeLabelTimer; // @synthesize m_updateTimeLabelTimer;
@property(nonatomic) __weak id <BaseMsgContentInBackgroundThreadDelgate> m_backgroundThreadDelegate; // @synthesize m_backgroundThreadDelegate;
@property(nonatomic) __weak id <BaseMsgContentDelgate> m_delegate; // @synthesize m_delegate;

- (void)showAttachmentView;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (id)previewActionItems;
- (_Bool)isPeekPreview;
- (void)setIsPeekPreview:(_Bool)arg1;
- (void)onIdleTimerUtilVoipQuit;
- (void)onFullScreenWindowWillHide;
- (struct CGRect)getVisibleRectInScreen:(id)arg1;
- (struct CGRect)getInnerVisibleRectInScreen:(struct CGRect)arg1;
- (long long)getMessageNodePosition:(id)arg1;
- (id)getNodeDataByIndex:(unsigned long long)arg1;
- (void)onJumpToViewDetail:(id)arg1;
- (void)onMsgImgPreviewDataRequired:(id)arg1;
- (void)onSightViewDetail:(id)arg1 vc:(id)arg2;
- (void)onPlayAttachVideo:(id)arg1 vc:(id)arg2;
- (void)onImgMsgLocate:(id)arg1 vc:(id)arg2;
- (void)onCurrentPageMsgReMoved:(id)arg1;
- (void)onMsgImgWindowDidHideToMsg:(id)arg1;
- (void)onMsgImgWindowWillHideToMsg:(id)arg1;
- (void)onMsgImgWindowDidShowFromMsg:(id)arg1;
- (void)onMsgImgWindowWillShowFromMsg:(id)arg1;
- (void)onSYncEnd;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)showReceiveMsgTips;
- (void)stopReceiveMsg;
- (void)startReceiveMsgWithTips:(id)arg1;
- (double)getInvisibleHeight;
- (_Bool)isContactSizeOverScreen;
- (void)endSearchAndDisplay;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)OnMultiMsgMoreOperation:(id)arg1;
- (void)ShowMultiSelectMoreOperation:(id)arg1;
- (void)OnMultiEmailMessage:(id)arg1;
- (void)OnMultiForwardMessage;
- (void)OnMultiDeleteMessage:(id)arg1;
- (void)OnMultiFavAddMessage;
- (void)showAlertTooMany;
- (void)onMoreOperateWithMsgId:(id)arg1;
- (void)gestureWillEndTransition:(id)arg1 isCanceld:(_Bool)arg2;
- (void)gestureWillBeginTransition:(id)arg1;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)rotate:(long long)arg1 duration:(double)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (_Bool)ToolViewStatusCanSupportAutorotateToInterfaceOrientation:(long long)arg1;
- (_Bool)shouldOtherPreventedAutorotateToInterfaceOrientation;
- (void)onTrackRoomTipsViewClick;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)hideTrackRoomTips;
- (void)showTrackRoomTips;
- (void)updateBanner;
- (_Bool)shouldHideOrginInputToolView;
- (double)getCustomizedAreaWidth;
- (void)loadingAfterForwardMessageOK;
- (void)stopLoadingAndShowOkWithText:(id)arg1;
- (void)stopLoadingAndShowOk;
- (void)stopLoading;
- (void)showLoadingViewWithText:(id)arg1;
- (void)showLoadingView;
- (void)updateChatRoomData:(id)arg1;
- (id)GetCurrentViewController;
- (_Bool)canShowEnterpriseBrandEntry;
- (_Bool)canShowLocation;
- (_Bool)canShowFavEntry;
- (void)initAllowNameCardFollowRedEnvelope;
- (void)initAllowWxTalkFollowSight;
- (void)initAllowRecommendApp;
- (void)initAllowMultiTalk;
- (void)initAllowWxTalk;
- (_Bool)isAllowWxTalk;
- (void)initAllowVoiceInput;
- (_Bool)isAllowVoiceInput;
- (void)initAllowVoip;
- (_Bool)isAllowVoip;
- (void)OnMsgDownloadVideoCommonFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadVideoExpiredFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadAppAttachCommonFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadAppAttachExpiredFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadThumbFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadThumbOK:(id)arg1 MsgWrap:(id)arg2;
- (id)documentInteractionControllerViewControllerForPreview:(id)arg1;
- (void)OnAppDataPreview:(id)arg1 MsgWrap:(id)arg2;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)PreviewAppNode:(id)arg1 MsgWrap:(id)arg2 Pop:(_Bool)arg3;
- (void)updateToolViewOrigin;
- (void)onTopBarFrameChanged;
- (void)adjustViewAndNavBarRect;
- (void)adjustDeleteViewRect;
- (void)hideToolViewAnimated:(_Bool)arg1;
- (void)onDeleteAllMsg;
- (void)ReloadView;
- (void)Reset;
- (id)init;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidUnload;
- (void)my_viewWillUnload;
- (void)my_viewDidUnload;
- (void)resetToolView;
- (void)viewDidLoad;
- (void)onChatBackgroundChanged:(id)arg1;
- (void)OnSendMessageCancel:(id)arg1;
- (void)OnSendMessageFail:(id)arg1 WithError:(int)arg2;
- (void)OnSendMessageOK:(id)arg1;
- (void)systemActived:(id)arg1;
- (void)systemResigned:(id)arg1;
- (void)MenuControllerWillHide:(id)arg1;
- (void)MenuControllerWillShow:(id)arg1;
- (void)stopLabelTimer;
- (void)beginLabelTimer;
- (void)lockerTimesup;
- (void)beginLockerTimer;
- (void)stopLockerTimesup;
- (void)onTipViewClick:(id)arg1;
- (id)getLastContentMessageNodeFromArray:(id)arg1;
- (id)getFirstContentMessageNodeFromArray:(id)arg1;
- (void)scrollToFirstUnReadMessage:(id)arg1 animated:(_Bool)arg2;
- (unsigned long long)getFirstUnReadMessageIndex;
- (unsigned long long)getFirstUnReadSplitNodeIndex;
- (void)onScrollToFirstUnReadMsg;
- (void)tryAddUnReadSplitNode;
- (void)updateFirstUnReadButtonOnShowBanner:(double)arg1;
- (void)animateHideFirstUnReadButton;
- (void)animateShowFirstUnReadButton:(float)arg1;
- (void)tryShowFirstUnReadButtonAnimated:(_Bool)arg1;
- (void)onTrySHowFirstUnReadButton;
- (double)getVisibleHeight;
- (double)getTableViewVisibleHeightWithOrientation:(long long)arg1;
- (void)willShow;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePresented:(_Bool)arg1;
- (void)viewWillPresent:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillPop:(_Bool)arg1;
- (void)removeVoipAndPhoneTip;
- (void)removeVoiceTip;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)tryMoveToMainFrame;
- (void)viewDidPop:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)onViewDisappear;
- (void)willDisshow;
- (void)willAppear;
- (void)statEnterMsgChat;
- (void)didExitRoom;
- (void)willEnterRoom;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidPush:(_Bool)arg1;
- (void)viewWillPush:(_Bool)arg1;
- (id)tagForCurrentPage;
- (id)tagForActivePage;
- (void)viewDidAppear:(_Bool)arg1;
- (id)findSearchedMsgIndexPath;
- (_Bool)shouldEnableKeyboardInteractivePop;
- (_Bool)shouldInteractivePop;
- (void)willDismissAndShow;
- (void)viewWillAppear:(_Bool)arg1;
- (void)trySetInputToolviewFirstResponder;
- (void)fixInputToolViewKeyboard;
- (void)SetVoiceEnabled:(_Bool)arg1;
- (id)GetContact;
- (void)updateMessageNodeStatus:(id)arg1;
- (void)onDeleteMessage:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleDeleteAllMessage;
- (void)deleteAllMessage;
- (void)handleAfterDeleteAllMessage;
- (void)onHideMultiSelectView;
- (void)onFinishMultiSelect:(id)arg1;
- (void)onReturn:(id)arg1;
- (void)onEditMessage:(id)arg1;
- (void)updateDeleteCount;
- (void)sendShortVideoMsg:(id)arg1 thumbImg:(id)arg2;
- (void)onSightPictureTaken:(id)arg1;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 sentImmediately:(_Bool)arg3;
- (void)onTextDeleteAll;
- (_Bool)hasCardPkgEntry;
- (_Bool)hasRedEnvelopesEntry;
- (_Bool)hasTransferMoneyEntry;
- (_Bool)hasServiceEntry;
- (id)getServiceAppList;
- (id)getAttachmentViewServiceAppList;
- (void)openServiceApp:(id)arg1;
- (void)redEnvelopesLogic;
- (void)transferMoneyLogic;
- (void)openServiceAppListController;
- (void)onOpenMyCardPkgViewController;
- (void)openMyFavoritesListController;
- (_Bool)canShowSight;
- (void)onOpenTrackRoom:(unsigned int)arg1;
- (_Bool)shouldShowOpenTrackRoom;
- (void)onSelectLocation;
- (void)onVideoVoipInvite;
- (void)onVoipInvite;
- (void)onMultiTalkButtonClick;
- (void)onShareCard;
- (void)SendEmoticonMesssageToolView:(id)arg1;
- (void)openCameraController;
- (void)openMediaBrowser;
- (void)CancelRecording;
- (void)StopRecording;
- (void)StartRecording;
- (void)TextDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)scrollRectToVisiblePosition:(struct CGRect)arg1;
- (_Bool)isRectVisibleInTableView:(struct CGRect)arg1;
- (_Bool)isInputViewPositionDown;
- (void)willShowMenuController:(id)arg1;
- (void)keyboardWillHide;
- (_Bool)shouldHideToolViewOnKeyboardHide;
- (void)onToolViewDidMoveToWindow;
- (void)reloadMessages;
- (void)reloadMessagesInternal;
- (void)onPositionModeChangeTo:(int)arg1 Animated:(_Bool)arg2;
- (void)HasCustomInputToolViewAndDontNeedShowToolView:(_Bool *)arg1;
- (void)ToolViewPositionDidChanged:(_Bool)arg1 animated:(_Bool)arg2;
- (void)adjustTableViewRect;
- (void)updateTableContentOffsetAnimated:(_Bool)arg1 OffsetDelta:(float)arg2;
- (void)scrollTableToBottomAnimated:(_Bool)arg1 init:(_Bool)arg2;
- (void)updateTableLayoutAnimateDuration:(double)arg1 Orientation:(long long)arg2;
- (void)SendEmojiArtMessageToolView:(id)arg1;
- (void)SendTextMessageToolView:(id)arg1;
- (void)AsyncSendMessage:(id)arg1;
- (id)getCurrentChatName;
- (void)sendCaptruedImage:(id)arg1;
- (void)pasteImage:(id)arg1;
- (_Bool)shouldInitWXEmoticonView;
- (void)clearCaptureViewParams;
- (id)captureViewParams;
- (void)onTouchDown;
- (void)touchesEnded_TableView:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan_TableView:(id)arg1 withEvent:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)onPan:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)didFinishedLoading:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSections;
- (void)makeCell:(id)arg1 row:(unsigned long long)arg2;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)initGestureRecognizer;
- (void)onSwipeGestureRecognizer:(id)arg1;
- (void)adjustTableViewOffset;
- (void)reloadBackgroundView;
- (void)initSearchBar;
- (void)resetMsgSearchHelper;
- (void)initMsgSearchHelper:(int)arg1;
- (double)getSearchBarHeight;
- (_Bool)showTrackExitAlert;
- (void)onBackButtonClicked:(id)arg1;
- (void)initNavigationView;
- (void)updateRightBar;
- (id)getLeftBarButton;
- (id)getRightBarButton;
- (void)openHomePage:(id)arg1;
- (void)openVoiceCall;
- (void)openVideoCall;
- (id)getVoipBarButton;
- (id)getHomePageBarButton;
- (void)OnFinished;
- (void)initMultiSelectToolView;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)isViewControllerAnimated;
- (_Bool)ShouldShowKeyboardAnimation;
- (void)initToolView;
- (void)initToolEmoticonView;
- (void)changeRect:(_Bool)arg1 animated:(_Bool)arg2 init:(_Bool)arg3;
- (void)initTableView;
- (void)reloadTableHeaderView:(_Bool)arg1;
- (void)startVoiceAnimatingAtNodeId:(unsigned int)arg1;
- (void)initTableHeaderView;
- (void)updateOpBtnState:(_Bool)arg1;
- (void)MoreMsgBtnUpdate:(unsigned int)arg1 unReadCount:(unsigned int)arg2;
- (void)initData;
- (void)onLoadDownMoreMessage:(id)arg1;
- (void)onSightTipsOK;
- (_Bool)canBecomeFirstResponder;
- (void)onLoadMessageFail;
- (void)onLoadMoreMessage;
- (void)initHistroyMessageNodeData;
- (void)removeLastTimeNode;
- (void)addMessageNode:(id)arg1 layout:(_Bool)arg2 addMoreMsg:(_Bool)arg3;
- (void)OnRevokeMsg:(id)arg1 MsgWrap:(id)arg2 ResultCode:(unsigned int)arg3 ResultMsg:(id)arg4 EducationMsg:(id)arg5;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2 SysMsg:(id)arg3;
- (double)getMaxContentHeightForNodeView:(id)arg1;
- (id)addSplitNode:(id)arg1 addMoreMsg:(_Bool)arg2;
- (void)addTimeNode:(id)arg1 layout:(_Bool)arg2 addMoreMsg:(_Bool)arg3;
- (void)preCreateMessageContentNode:(id)arg1;
- (id)getMessageChatContactByMessageWrap:(id)arg1;
- (id)newMessageNodeViewForMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (_Bool)isShowHeadImage:(id)arg1;
- (void)updateMessageNodeViewForOrientation:(id)arg1;
- (void)preCreateMessageSplitNode:(id)arg1;
- (void)updateTimeNodeViewForOrientation:(id)arg1;
- (void)preCreateMessageTimeNode:(id)arg1;
- (void)contactInfoReturn;
- (void)newMessageFromContactInfo:(id)arg1;
- (void)addToContactsFromContactInfo:(id)arg1;
- (void)switchEarMode;
- (void)onCommentOnMessageWrap:(id)arg1;
- (void)jumpToShakeView:(unsigned int)arg1;
- (void)jumpToUserProfile:(id)arg1 Displayname:(id)arg2 Scence:(unsigned int)arg3 fromBanner:(_Bool)arg4;
- (void)jumpToUserProfile:(id)arg1 Displayname:(id)arg2 Scence:(unsigned int)arg3;
- (void)onMassSendSendAgain:(id)arg1;
- (void)onForwardMessageOK;
- (void)onHideKeyboard;
- (void)onScrollToBottom;
- (void)onNodeViewChanged;
- (void)reloadNodeWithMessageWrap:(id)arg1;
- (void)reloadTableViewNode;
- (void)tagLink:(id)arg1 messageWrap:(id)arg2;
- (void)deleteMail:(id)arg1;
- (void)longPressOnHeadImageForDebug:(id)arg1;
- (void)longPressOnHeadImage:(id)arg1;
- (void)deleteNode:(id)arg1;
- (_Bool)isMsgCanRevoke:(id)arg1;
- (_Bool)isLastMsg:(id)arg1;
- (_Bool)isMsgLastSend:(id)arg1;
- (id)getLastSentMsg;
- (_Bool)isChatStatusNotifyOpen;
- (void)shareMsgToOpenSDKByNodeView:(id)arg1;
- (void)revokeMsgByNodeView:(id)arg1;
- (void)StartDownloadShortVideo:(id)arg1;
- (void)StartDownloadVideo:(id)arg1;
- (void)StartUploadVideo:(id)arg1;
- (void)StopDownloadVideo:(id)arg1;
- (void)StopUploadVideo:(id)arg1;
- (struct CGRect)getNodeRectInScreen:(unsigned int)arg1;
- (struct CGRect)getImageNodeRectInScreen:(unsigned int)arg1;
- (id)GetMessageNodeDataArray;
- (id)GetMessagesWrapArray;
- (void)ShowVolumeTips;
- (void)ShowEarTips;
- (void)ShowEarBackTips;
- (void)StopPlayingNodeView:(unsigned int)arg1;
- (void)StartPlayingNodeView:(unsigned int)arg1;
- (void)stopAllShortVideo;
- (void)EndPlaying:(id)arg1;
- (void)OnEndPlaying:(id)arg1;
- (void)BeginPlaying:(id)arg1 FromTouch:(_Bool)arg2;
- (void)SetMsgPlayed:(id)arg1;
- (void)setSecurityTipShow:(_Bool)arg1;
- (void)setAddFriendTipShow:(_Bool)arg1 contact:(id)arg2;
- (void)showAddFriendTip:(_Bool)arg1;
- (double)getSecurityBannerTipHeight;
- (double)getAddFriendTipHeight;
- (double)getTipsHeight;
- (void)checkShowSecurityBannerTip:(_Bool)arg1;
- (void)checkShowRecommandFriendTip:(_Bool)arg1;
- (void)checkTips:(_Bool)arg1;
- (void)onReceiveSecurityBannerMsg:(id)arg1 withWording:(id)arg2;
- (void)onShareVideoToTimeline:(_Bool)arg1;
- (void)onShareVideoToFriend:(id)arg1;
- (void)onClickFavVideoMenu;
- (void)onClosePlayerForViewDetail:(id)arg1;
- (void)jumpToDetail:(id)arg1;
- (void)onClosePlayer;
- (_Bool)stopAtLastVideoFrameWhenPlayEnd;
- (void)JumpToViewStreamVideo:(id)arg1;
- (void)onMultiSelectContactReturn:(id)arg1;
- (id)contactShareMsgFromUser:(id)arg1 toUser:(id)arg2 sharedContact:(id)arg3;
- (void)clickLinkToDelChatroomMember:(id)arg1 fromScene:(_Bool)arg2;
- (void)clickReceiveBrandMsg;
- (void)clickShieldBrandMsg;
- (void)clickLinkToExpose;
- (void)onPerformIconAction:(id)arg1;
- (void)onPerformExposeAction:(id)arg1;
- (void)showExposeViewController;
- (void)onPerformAction:(id)arg1;
- (void)onTipsViewClose:(id)arg1;
- (void)onTipsViewClick:(id)arg1;
- (void)showEarModeTips;
- (void)headerImageClicked:(id)arg1;
- (void)enterChat:(id)arg1;
- (void)PlayShortVideo:(id)arg1;
- (void)PlayVideo:(id)arg1;
- (void)showMultiTalkMessageInfoWithSessionItem:(id)arg1 msgLocalID:(unsigned int)arg2;
- (void)showMultiTalkSessionInfo:(id)arg1;
- (void)tapText_NodeView:(id)arg1;
- (void)tapAppNodeView:(id)arg1;
- (void)tapFriendCard_NodeView:(id)arg1 WithContact:(id)arg2 WithMsg:(id)arg3;
- (void)tapPushContact_NodeView:(id)arg1;
- (void)tapPushMail_NodeView:(id)arg1 withPushMailWrap:(id)arg2;
- (void)tapReader_NodeView:(id)arg1;
- (void)tapImage_NodeView:(id)arg1;
- (void)tapLocation_NodeView:(id)arg1;
- (void)tapVideoStatus_NodeView:(id)arg1;
- (void)tapStatus_NodeView:(id)arg1;
- (void)hasTapReaderNodeView;
- (id)getViewController;
- (void)updateTypingTitle:(id)arg1;
- (void)PreviewImage:(id)arg1;
- (id)chatContactForMessageWrap:(id)arg1;
- (void)unHighLightSelectSearchCell;
- (void)highLightSelectSearchCell;
- (void)didSelectSearchResultForMessageWrap:(id)arg1 indexPath:(id)arg2;
- (void)didSelectSearchResultForMessageWrap:(id)arg1;
- (void)locateToMsg:(id)arg1;
- (id)QueryMsgText:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(unsigned int)arg4 LeftCount:(unsigned int *)arg5;
- (void)msgSearchBarSearchByTime;
- (void)msgSearchBarSearchByName;
- (void)msgSearchBarDoSearch;
- (void)msgSearchBarCancel;
- (id)getParentTableView;
- (id)getParentView;
- (void)deleteNode:(id)arg1 withDB:(_Bool)arg2 animated:(_Bool)arg3;
- (void)openChatInfo:(id)arg1;
- (void)onUpdateTimeLabelTimer:(id)arg1;
- (void)addReceiveMessageNode:(id)arg1;
- (void)sendMessageWithMsgWrap:(id)arg1;
- (void)updateMessageNodeImageLoadingPercent:(unsigned int)arg1 percent:(unsigned int)arg2;
- (void)tryScrollToBottomAnimated:(_Bool)arg1;
- (_Bool)isScrollToBottom;
- (void)ScrollToBottomAnimated:(_Bool)arg1;
- (void)ScrollToBottomAnimatedAndLoadMoreNode;
- (id)getNavigationButton:(id)arg1;
- (void)updateTitleView:(id)arg1;
- (void)viewDidTransitionToNewSize;
- (id)getTitleLableViewWithMaxWidth:(double)arg1 title:(id)arg2;
- (_Bool)ifJumpToPreviewAfterDownloadSuccess:(unsigned int)arg1;
- (_Bool)isMessageShowInTableViewWithLocalID:(unsigned int)arg1;
- (void)locateTableViewWithLocalID:(unsigned int)arg1;
- (unsigned long long)getMsgContentSizeHeight:(unsigned int)arg1;
- (unsigned long long)getCurContentSizeHeight;
- (unsigned long long)getLastNodePreContentSizeHeight;
- (unsigned long long)getRowHeight:(id)arg1;
- (id)findImageNodeView:(unsigned int)arg1;
- (id)findNodeDataByLocalId:(unsigned int)arg1;
- (void)updateTableViewRowWithLocalID:(unsigned int)arg1;
- (void)removeObjectsFromMessageNodeDatas:(id)arg1;
- (void)removeAllObjectsFromMessageNodeDatas;
- (unsigned long long)findNodeIndexByLocalId:(unsigned int)arg1;
- (id)findNodeDataByView:(id)arg1;
- (unsigned long long)getMsgNodeCount;
- (void)initMessageNodeClass;

@end
