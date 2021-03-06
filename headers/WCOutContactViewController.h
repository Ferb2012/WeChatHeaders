//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IWCOutFacadeExt.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class MMTableView, NSArray, NSMutableArray, NSMutableDictionary, NSString, NSTimer, UIButton, UILabel, UIView, WCOutPhoneContact;

@interface WCOutContactViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, IWCOutFacadeExt, WCActionSheetDelegate>
{
    MMTableView *m_tableView;
    UILabel *m_noDataLabel;
    UIView *m_showNewView;
    UIButton *m_callBtn;
    NSMutableDictionary *m_allContactsDic;
    NSMutableArray *m_sectionKeyArray;
    NSMutableDictionary *m_nonAddressBookContactsDic;
    NSMutableDictionary *m_contactToArchiveDic;
    NSMutableArray *m_lastCallArchives;
    double m_lastScrollViewOffset;
    NSTimer *m_hideIndexTitleTimer;
    long long m_lastScrollTime;
    NSString *m_curLanguage;
    WCOutPhoneContact *m_selectedContactInActionSheet;
    NSArray *m_phoneArrayShowInActionSheet;
    _Bool _bShowIndexTitle;
}

@property(nonatomic) _Bool bShowIndexTitle; // @synthesize bShowIndexTitle=_bShowIndexTitle;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)updateAccountRedDotWithNeedShow:(_Bool)arg1;
- (void)addNewCall:(id)arg1;
- (void)updateWCOutContactsInfo;
- (void)updateWCOutContacts:(id)arg1;
- (void)didTagDetailButton:(id)arg1 forEvent:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)lastCallCellAtRow:(unsigned long long)arg1;
- (id)contactCellAtIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)hideIndexTitle;
- (void)deleteRecentCallItemAtIndex:(long long)arg1;
- (void)showWellcomeTips;
- (void)showProfileForContact:(id)arg1 AndIsFromLastCallContact:(_Bool)arg2;
- (void)onClickBottomBtn;
- (void)configCallBtn;
- (void)configBottomBtn;
- (void)configFooterViewWithCount:(unsigned long long)arg1;
- (void)configTableView;
- (void)configNoDataHintsLabel;
- (void)configView;
- (void)configRecentCallContacts;
- (void)configData;
- (void)OnOpenAccount;
- (void)configRightBarButtonItem;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

