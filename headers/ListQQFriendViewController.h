//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMSearchBarDisplayController.h"

#import "ContactInfoViewControllerDelegate.h"
#import "ContactsItemViewDelegate.h"
#import "PBMessageObserverDelegate.h"
#import "SendVerifyMsgViewControllerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "contactInfoDelegate.h"
#import "contactVerifyLogicDelegate.h"

@class CContactVerifyLogic, CQQFiendWrap, CQQGroupWrap, ContactInfoViewController, MMTableView, NSMutableArray, NSMutableDictionary, NSString;

@interface ListQQFriendViewController : MMSearchBarDisplayController <UITableViewDelegate, UITableViewDataSource, PBMessageObserverDelegate, contactInfoDelegate, ContactInfoViewControllerDelegate, UIAlertViewDelegate, ContactsItemViewDelegate, contactVerifyLogicDelegate, SendVerifyMsgViewControllerDelegate>
{
    CQQGroupWrap *m_oQQGroupWrap;
    CQQFiendWrap *m_oCurrentFriendWrap;
    NSMutableArray *m_arrQQFriendWrap;
    MMTableView *m_tableView;
    NSMutableArray *m_arrFilteredFriendList;
    unsigned int m_uiViewControllerType;
    ContactInfoViewController *m_CurrentFriendItemView;
    CContactVerifyLogic *m_oContactVerifyLogic;
    NSMutableArray *m_arrKey;
    NSMutableDictionary *m_dicFriendList;
}

@property(retain, nonatomic) ContactInfoViewController *m_CurrentFriendItemView; // @synthesize m_CurrentFriendItemView;
@property(retain, nonatomic) CQQFiendWrap *m_oCurrentFriendWrap; // @synthesize m_oCurrentFriendWrap;
@property(retain, nonatomic) NSMutableArray *m_arrQQFriendWrap; // @synthesize m_arrQQFriendWrap;
@property(retain, nonatomic) CQQGroupWrap *m_oQQGroupWrap; // @synthesize m_oQQGroupWrap;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithVCType:(unsigned int)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchDisplayControllerDidBeginSearch:(id)arg1;
- (void)doSearch:(id)arg1;
- (void)newMessageFromContactInfo:(id)arg1;
- (void)addToContactsFromContactInfo:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onUpdateContact:(id)arg1;
- (void)onRemoveContact;
- (void)onAddContact;
- (id)findContactsItemView:(id)arg1 atTableView:(id)arg2;
- (void)onContactsItemViewRightButtonClick:(id)arg1;
- (void)verifyContactWithOpCode:(id)arg1 opcode:(unsigned int)arg2;
- (void)onContactVerifyFillVerifyMsg:(id)arg1;
- (void)onSendVerifyMsgCancel;
- (void)onSendVerifyMsgOK;
- (void)contactVerifyOk:(id)arg1 opCode:(unsigned int)arg2;
- (void)onContactVerifyFail;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onSendQQMsg:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)initView;
- (void)initData;
- (void)LoadQQGroupFriend;
- (void)SaveQQFriend;
- (void)LoadQQGroupFriendNetworkEvent;
- (void)sort;
- (void)FullfillQQFriendInfo;
- (_Bool)isABtestNewStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
