//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCBizBaseViewController.h"

#import "ILinkEventExt.h"
#import "IWCMallControlLogicExt.h"
#import "IWCPayControlLogicExt.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCBizMainBannerViewDelegate.h"
#import "WCMallAcrivityLoopPageScrollViewDataSourceDelegate.h"
#import "WCMallFunctionActivityViewDelegate.h"
#import "WCPayLogicMgrExt.h"
#import "WCPayPwdViewControllerDelegate.h"

@class NSMutableArray, NSString, UIButton, UIImageView, UIView, UrlLabel, WCMallAcrivityLoopPageScrollView, WCMallControlData, WCPayControlData, WCUIPageControl;

@interface WCBizMainViewController : WCBizBaseViewController <WCBizMainBannerViewDelegate, UITableViewDelegate, WCActionSheetDelegate, WCPayLogicMgrExt, WCPayPwdViewControllerDelegate, IWCPayControlLogicExt, IWCMallControlLogicExt, ILinkEventExt, WCMallAcrivityLoopPageScrollViewDataSourceDelegate, WCMallFunctionActivityViewDelegate>
{
    unsigned int m_uiNewOrderCount;
    NSMutableArray *m_arrPayCardDetailView;
    WCMallControlData *m_oMallData;
    WCPayControlData *m_oPayData;
    UrlLabel *m_oBroadCastLabel;
    WCMallAcrivityLoopPageScrollView *m_oLoopPageScrollView;
    WCUIPageControl *_bigImagePageControl;
    UIView *m_oTipsView;
    UIView *m_oPrePageCurView;
    UIView *m_oNextPageCurView;
    _Bool m_bGetPayCardList;
    unsigned int m_uiCurrentShowedTipsActivityID;
    UIView *_topHeaderView;
    UIImageView *_redDotViewForTranslate;
    UIButton *_balanceBtn;
    UIButton *_cardListBtn;
}

@property(nonatomic) unsigned int m_uiNewOrderCount; // @synthesize m_uiNewOrderCount;
- (void).cxx_destruct;
- (void)onOpenTouchIDAuth;
- (void)showTouchIDConfirmIfNeed;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)removeRedDotForTransferNowAndForever;
- (_Bool)needToShowRedDotForTransfer;
- (void)makeActivityCell:(id)arg1 cellInfo:(id)arg2;
- (double)contentHeightWithActivityCount:(unsigned long long)arg1;
- (struct CGRect)tableViewFrame;
- (struct CGSize)tableViewContentSize;
- (void)onBannerTapped:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)OnEntranceStatusChanged;
- (void)OnGetFunctionList:(id)arg1 FromLocalCache:(_Bool)arg2;
- (void)OnFinishedWCPayLogic:(id)arg1 CompleteStatus:(int)arg2;
- (void)OnGetLocalCachePayCardList:(id)arg1;
- (void)OnPayCardListChanged:(id)arg1;
- (void)OnWCPayPwdViewControllerBack;
- (void)OnStatusChangedOrderListCountChanged:(unsigned int)arg1;
- (void)didReceiveMemoryWarning;
- (void)OnTransferMoney:(id)arg1;
- (void)OnOrderHistory;
- (void)OnWCMallFunctionActivityViewButtonDown:(id)arg1;
- (void)OnClickPrePage:(id)arg1;
- (void)OnClickNextPage:(id)arg1;
- (void)onClickJumpToActivityPage:(id)arg1;
- (void)onClickAddCardButton:(id)arg1;
- (void)onClickCardListButton:(id)arg1;
- (void)onClickCard:(id)arg1;
- (id)makeNewOrderRecord:(id)arg1;
- (void)onPageControllerChangePage:(id)arg1;
- (void)onLinkClicked:(id)arg1 backupUrl:(id)arg2 withRect:(struct CGRect)arg3;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)openPWDViewController;
- (void)onOperate:(id)arg1;
- (void)onAddPayCardInUnregView;
- (void)onAddPayCard;
- (void)showAddCardView;
- (void)refreshViewWithMallControlData:(id)arg1;
- (void)refreshViewWithPayControlData:(id)arg1;
- (id)testMakeLabel:(id)arg1;
- (void)onCardListBtnCancel;
- (void)onCardListBtnDown;
- (void)onCardListClick;
- (void)onBalanceBtnCancel;
- (void)onBalanceBtnDown;
- (void)onBalanceClick;
- (float)headerViewPaddingTop;
- (float)headerViewHeight;
- (void)makeCardHeaderView:(id)arg1;
- (double)testRowHeight;
- (void)refreshView;
- (void)OnStepInOfflinePay;
- (void)didChangeToPage:(unsigned int)arg1;
- (int)totalNumOfPage;
- (id)viewForPage:(id)arg1 pageNum:(unsigned int)arg2;
- (id)getBannerHeaderView;
- (void)reloadNavigationItem;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
