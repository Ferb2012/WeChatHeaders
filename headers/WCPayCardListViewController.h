//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "ILinkEventExt.h"
#import "MMWebViewDelegate.h"
#import "WCPayLogicMgrExt.h"

@class NSMutableArray, NSString;

@interface WCPayCardListViewController : WCPayBaseViewController <WCPayLogicMgrExt, ILinkEventExt, MMWebViewDelegate>
{
    NSMutableArray *m_arrPayCardDetailView;
}

- (void).cxx_destruct;
- (void)webViewReturn:(id)arg1;
- (void)gotoLoanMoney;
- (void)didReceiveMemoryWarning;
- (void)onClickCard:(id)arg1;
- (void)onClickBalanceView:(id)arg1;
- (void)onClickWXBorrowMoneyItemView:(id)arg1;
- (void)onClickWXBorrowMoneyItem:(id)arg1;
- (void)onClickVirtualCardAndChecking:(id)arg1;
- (void)onClickVirtualCard:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)didShowAddCard;
- (void)showOfflinePay;
- (void)makeLoanMoneyCell:(id)arg1;
- (void)makeAddCardCell:(id)arg1;
- (void)makeOfflinePayCell:(id)arg1;
- (void)makeVirtualCardCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeWXBorrowMoneyItemCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeBaseExtentionCell:(id)arg1;
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

