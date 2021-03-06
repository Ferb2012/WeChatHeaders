//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTableViewCellInfo.h"

#import "IBrandServiceSearchExt.h"
#import "MMRefreshTableFooterDelegate.h"
#import "MMSearchBarDelegate.h"
#import "PBMessageObserverDelegate.h"
#import "SearchContactDataProviderDelegate.h"
#import "UIAlertViewDelegate.h"
#import "contactInfoDelegate.h"

@class CContact, MMLoadingView, MMSearchBar, MMUILabel, MMUIViewController, NSString, SearchContactDataProvider, UIButton, UITextField, UIView, WCTimeLineFooterView;

@interface FindContactSearchViewCellInfo : MMTableViewCellInfo <SearchContactDataProviderDelegate, MMRefreshTableFooterDelegate, IBrandServiceSearchExt, PBMessageObserverDelegate, contactInfoDelegate, UIAlertViewDelegate, MMSearchBarDelegate>
{
    UITextField *m_userNameTextField;
    MMLoadingView *m_loadingView;
    NSString *m_nsUserNameToFind;
    MMUIViewController *m_containViewController;
    MMSearchBar *m_searchBar;
    UIView *m_backGroundView;
    UIButton *m_backGroundBlurView;
    unsigned int _requestEventID;
    _Bool _didSearchContactDone;
    _Bool _isSearching;
    CContact *_foundContact;
    unsigned long long _searchContactState;
    SearchContactDataProvider *_searchContactDataProvider;
    WCTimeLineFooterView *_footerView;
    MMUILabel *_nonResultLabel;
}

@property(nonatomic) _Bool isSearching; // @synthesize isSearching=_isSearching;
@property(nonatomic) _Bool didSearchContactDone; // @synthesize didSearchContactDone=_didSearchContactDone;
@property(retain, nonatomic) MMUILabel *nonResultLabel; // @synthesize nonResultLabel=_nonResultLabel;
@property(retain, nonatomic) WCTimeLineFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) SearchContactDataProvider *searchContactDataProvider; // @synthesize searchContactDataProvider=_searchContactDataProvider;
@property(nonatomic) unsigned long long searchContactState; // @synthesize searchContactState=_searchContactState;
@property(retain, nonatomic) CContact *foundContact; // @synthesize foundContact=_foundContact;
@property(retain, nonatomic) NSString *m_nsUserNameToFind; // @synthesize m_nsUserNameToFind;
@property(retain, nonatomic) UITextField *m_userNameTextField; // @synthesize m_userNameTextField;
- (void).cxx_destruct;
- (void)onGetSearchDetailPageResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)do_LogExt:(int)arg1;
- (void)onSearchResultViewNeedPushViewController:(id)arg1;
- (void)onSearchResultViewNeedReload;
- (void)openContactInfoViewForGoogle:(id)arg1;
- (void)openContactInfoViewForPhone:(id)arg1;
- (void)openContactInfoViewForQQ:(id)arg1;
- (void)showContactInfoView:(id)arg1;
- (void)showContactListInfoView:(id)arg1;
- (void)onGetNonResult;
- (void)SearchBarBecomeUnActive;
- (void)SearchBarBecomeActive;
- (void)onSearch:(id)arg1;
- (void)removeNoResultLabelWhenSearching;
- (_Bool)searchKeyMatchesCommand:(id)arg1;
- (_Bool)allTextIsBlank;
- (void)newMessageFromContactInfo:(id)arg1;
- (void)addToContactsFromContactInfo:(id)arg1;
- (void)addFriendScene:(id)arg1;
- (_Bool)isBestGuessPhoneNumber:(id)arg1;
- (_Bool)isObj:(id)arg1 match:(id)arg2;
- (id)filterUserName:(id)arg1;
- (id)getSearchBarText;
- (void)stopLoading;
- (void)startLoading;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)sendBrandContactListRequest;
- (void)onGetSearchContactRet:(id)arg1 req:(id)arg2;
- (void)doSearch;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)didScrollViewScroll:(id)arg1;
- (void)didSearchViewTableSelect:(id)arg1;
- (double)heightForSearchViewTable:(id)arg1;
- (id)cellForIndex:(id)arg1 ForSearchViewTable:(id)arg2;
- (id)getAddressBookPersonImage:(id)arg1;
- (id)titleForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (id)viewForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (double)heightForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (long long)numberOfRowsInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (long long)numberOfSectionsForSearchViewTable:(id)arg1;
- (void)mmSearchDisplayControllerDidHideSearchResultsTableView:(id)arg1;
- (void)mmSearchDisplayControllerWillShowSearchResultsTableView:(id)arg1;
- (void)hideDimmingView;
- (void)setSearchDisplayControllerContainerViewIn:(id)arg1 hidden:(_Bool)arg2;
- (void)mmSearchDisplayControllerWillEndSearch;
- (void)cancelSearch;
- (void)mmSearchDisplayControllerDidBeginSearch;
- (void)mmSearchDisplayControllerWillBeginSearch;
- (void)mmsearchBarSearchButtonClicked:(id)arg1;
- (void)doSearch:(id)arg1 Pre:(_Bool)arg2;
- (void)makeCell:(id)arg1;
- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;
- (void)initFooterView;
- (void)layoutViews;
- (id)initWithContentController:(id)arg1 backGroundView:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

