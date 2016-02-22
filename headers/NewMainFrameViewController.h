//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTabBarBaseViewController.h"

#import "CreateChatLogicDelegate.h"
#import "IAcctStorageMgrExt.h"
#import "IAutoSetRemarkExt.h"
#import "IMMFacebookMgrExt.h"
#import "IVOIPUILogicMgrExt.h"
#import "IWCDeviceBrandMgrExt.h"
#import "IWXTalkPresentExt.h"
#import "MMKernelExt.h"
#import "MMSearchBarDelegate.h"
#import "MMVoiceSearchBarDelegate.h"
#import "MMVoiceSearchDelegate.h"
#import "MainFrameHeaderDelegate.h"
#import "MainTableDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UISearchBarDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCBarMessageWindowDelegate.h"
#import "contactInfoDelegate.h"
#import "mainFrameLogicControllerDelegate.h"

@class CreateChatLogic, MFTitleView, MMLoadingView, MMMainTableView, MMSessionInfo, MainFrameHeaderLogic, MainFrameLogicController, MassSendShortVideoLogic, NSString, SightMainframeIconView, UIImageView, VoiceSearchMutilLevelViewController, WCBarMessageWindow;

@interface NewMainFrameViewController : MMTabBarBaseViewController <IMMFacebookMgrExt, mainFrameLogicControllerDelegate, UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, UISearchDisplayDelegate, WCActionSheetDelegate, contactInfoDelegate, CreateChatLogicDelegate, MMVoiceSearchDelegate, MMSearchBarDelegate, MMVoiceSearchBarDelegate, MMKernelExt, IWXTalkPresentExt, IVOIPUILogicMgrExt, IAutoSetRemarkExt, UIGestureRecognizerDelegate, IAcctStorageMgrExt, UIAlertViewDelegate, WCBarMessageWindowDelegate, MainTableDelegate, IWCDeviceBrandMgrExt, MainFrameHeaderDelegate>
{
    MainFrameLogicController *m_mainFrameLogicController;
    MMMainTableView *m_tableView;
    UIImageView *logoImageView;
    MFTitleView *m_titleView;
    MMLoadingView *m_loadingView;
    _Bool m_bSearching;
    struct CGPoint m_tableContentOffset;
    _Bool m_bFromReg;
    unsigned int m_uiTipStatus;
    CreateChatLogic *m_createChatLogic;
    _Bool m_tableViewReady;
    MainFrameHeaderLogic *m_headerLogic;
    NSString *m_nsTitle;
    int m_voiceSearchLevelNumber;
    VoiceSearchMutilLevelViewController *voiceSearchMultilLevelViewController;
    _Bool m_bFirstInitView;
    _Bool m_bOnMemoryWarningToFinishedSearchBar;
    struct CGPoint m_tableViewOffset;
    _Bool m_bIsLastViewStatusBarHidden;
    _Bool m_hasAddBlurEffectView;
    _Bool m_needResetTableViewOffset;
    SightMainframeIconView *m_sightIconView;
    double m_preContentOffset;
    WCBarMessageWindow *m_barMessageWindow;
    _Bool m_forbidShowTip;
    MassSendShortVideoLogic *m_massSendShortVideoLogic;
    MMSessionInfo *_peekedSession;
    _Bool m_firstLoadFinished;
}

@property(retain, nonatomic) NSString *m_nsTitle; // @synthesize m_nsTitle;
@property(retain, nonatomic) MassSendShortVideoLogic *m_massSendShortVideoLogic; // @synthesize m_massSendShortVideoLogic;
@property(retain, nonatomic) CreateChatLogic *m_createChatLogic; // @synthesize m_createChatLogic;
@property(nonatomic) _Bool m_bFromReg; // @synthesize m_bFromReg;
- (void).cxx_destruct;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)checkDBAutoRecover;
- (void)initDeepLinkConfig;
- (id)getVCWithDeepLinkName:(id)arg1;
- (void)onWCDeviceUnbindEnd:(id)arg1 Error:(id)arg2;
- (void)onTranslateSessionChanged:(id)arg1;
- (void)onBarTipClicked;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)getSubImage:(struct CGRect)arg1 inImage:(id)arg2;
- (void)startSightWindowAnimation:(double)arg1;
- (void)handleSightPanGesture:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onSettingChange;
- (void)onSetStrangerRemark:(id)arg1;
- (void)OnTrackRoomMemberChange:(id)arg1 withNewMemberList:(id)arg2;
- (void)OnRoomMemberChange:(id)arg1 withNewMemberList:(id)arg2;
- (void)onVideoVoipViewDisappear;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)updateItem:(id)arg1;
- (void)onAuthOK;
- (void)displayControllerSetActive:(_Bool)arg1 animated:(_Bool)arg2;
- (id)getSessionInfoByContact:(id)arg1;
- (void)SearchBarBecomeUnActive;
- (_Bool)shouldShowTabbar;
- (void)SearchBarBecomeActive;
- (void)addBlurEffectView;
- (void)setSearchTableResultText:(id)arg1;
- (void)OnVoiceSearchButtonDown;
- (double)getMainTableHeight;
- (void)updateViewWhenSelectTab:(_Bool)arg1;
- (void)changeNetworkStatus:(unsigned int)arg1;
- (unsigned int)getTotalUnreadCount;
- (void)clearResource;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2 animated:(_Bool)arg3;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2 animated:(_Bool)arg3 FromOtherTab:(_Bool)arg4;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2 animated:(_Bool)arg3 FromOtherTab:(_Bool)arg4 reuse:(_Bool)arg5 extraInfo:(id)arg6;
- (void)resetTableViewOffset:(id)arg1;
- (void)tapStatusBarMessage;
- (void)animationShow;
- (void)newMessageFromContactInfo:(id)arg1;
- (void)popToMainFrameAnimated:(_Bool)arg1;
- (void)updateStatusBar;
- (void)stopLoading;
- (void)startLoading;
- (void)initLoadingView;
- (void)deleteSessionCell:(unsigned int)arg1 withUser:(id)arg2;
- (void)selectCellForName:(id)arg1;
- (void)cancelSelectedCell;
- (void)updateAllItemTimeLabel;
- (void)updateSession:(id)arg1;
- (void)reloadSessions;
- (void)searchDisplayControllerDidBeginSearch:(id)arg1;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)MMVoiceSearchBarCancelButtonClicked:(id)arg1;
- (void)MMVoiceSearchBarSearchButtonClicked:(id)arg1;
- (void)MMVoiceSearchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)MMVoiceSearchBarShouldBeginEditing:(id)arg1;
- (void)cancelSearch;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)showBrandUnsubscribeActionSheet:(unsigned long long)arg1;
- (void)handleBrandUnsubscribe:(id)arg1;
- (void)handleCommitEdit:(unsigned long long)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showEditActionSheet:(unsigned long long)arg1;
- (id)getDestructiveBtnTitle:(unsigned long long)arg1;
- (id)getActionSheetTitle:(unsigned long long)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)handleSelectIndexPath:(id)arg1 tableView:(id)arg2;
- (void)openContactInfoView:(id)arg1;
- (_Bool)isNeedMutilLevelView:(id)arg1;
- (_Bool)isNeedShowProfileInVoiceSearch:(int)arg1;
- (_Bool)isOpenPluginContactInfoView:(id)arg1;
- (void)openPluginContactInfoView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeCellBackGroundBySession:(id)arg1 cell:(id)arg2 showTopList:(_Bool)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)getSectionType:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)openMessageContentView:(id)arg1 startSendMessage:(_Bool)arg2 msgWrapToAdd:(id)arg3 animated:(_Bool)arg4 jumpToFirstUnreadNode:(_Bool)arg5 indexPath:(id)arg6 reuse:(_Bool)arg7 extraInfo:(id)arg8;
- (void)tryMoveToMainFrameTab;
- (void)openMessageContentView:(id)arg1 startSendMessage:(_Bool)arg2 msgWrapToAdd:(id)arg3 animated:(_Bool)arg4 jumpToFirstUnreadNode:(_Bool)arg5 indexPath:(id)arg6;
- (void)openMessageContentView:(id)arg1 startSendMessage:(_Bool)arg2 msgWrapToAdd:(id)arg3 animated:(_Bool)arg4 jumpToFirstUnreadNode:(_Bool)arg5;
- (void)openEnterpriseChatSessionListView:(id)arg1 animated:(_Bool)arg2;
- (void)openEnterpriseBrandSessionView:(id)arg1;
- (void)openBrandSessionView;
- (void)openSyncPhoneContactsView;
- (void)openFloatBottleContentView;
- (void)openQQOfflineMsgView;
- (void)updateNearMode;
- (void)onCreateChatContactReturn:(id)arg1;
- (_Bool)isSeachActive;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)hideSearchBar;
- (_Bool)shouldShowTitleWindow;
- (void)finishSearchBarImmediately;
- (_Bool)hasShowSearchBar;
- (void)resetSearchBar;
- (id)getVoiceSearchBar;
- (_Bool)isTopRightMenuShowID:(id)arg1;
- (void)initBarItem;
- (void)reloadHeaderView;
- (void)initSearchController;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)resetViewStatus;
- (void)unLoadView;
- (void)unLoadData;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidPush:(_Bool)arg1;
- (void)viewDidPop:(_Bool)arg1;
- (void)viewWillPop:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setTableViewContentInsetForSearchBar;
- (void)initView;
- (void)initBarMessageWindow;
- (void)initStatusBar;
- (void)initFooterView;
- (void)cancelMassSendSightTask:(id)arg1;
- (void)redoMassSendSightTask:(id)arg1;
- (void)OpenContactInfo:(id)arg1;
- (void)PopViewContoller;
- (void)PushViewController:(id)arg1;
- (void)updateRow:(unsigned int)arg1;
- (void)removeRow:(unsigned int)arg1;
- (void)insertRow:(unsigned int)arg1;
- (_Bool)checkHeaderRowValid:(unsigned int)arg1;
- (void)reloadAll;
- (void)onShowPhoneFriend;
- (void)onShowQQFriend;
- (void)onShowGoogleFriend;
- (void)resetHeaderView;
- (void)initHeaderView;
- (void)initTableView;
- (double)getMainTableBottomInset;
- (void)initShadowLogo;
- (double)getLogoContentInsetTop;
- (void)initTitle;
- (void)initTitleView;
- (void)checkDelayLoadData;
- (void)setReadyToLoadData;
- (void)initData;
- (void)viewDidLayoutSubviews;
- (void)reLayoutSubviews;
- (void)popToSelfViewController;
- (void)updateUnReadCount;
- (void)willAppear;
- (void)setTableViewContentOffset:(struct CGPoint)arg1;
- (void)setNewMainFrameTableViewContentOffsetToTheFirstUnreadSession;
- (void)setNewMainFrameTableViewContentOffset:(struct CGPoint)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
