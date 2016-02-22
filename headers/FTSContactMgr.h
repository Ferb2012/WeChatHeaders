//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IContactLabelMgrExt.h"
#import "IContactMgrExt.h"
#import "IFriendListMgrExt.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface FTSContactMgr : NSObject <IContactMgrExt, IFriendListMgrExt, IContactLabelMgrExt>
{
    _Bool _hasInited;
    _Bool _onlyInitContactScene;
    NSMutableArray *_arrTopHitContactItem;
    NSMutableArray *_arrTopHitAddressBookItem;
    NSMutableArray *_arrAddressBookFriend;
    NSMutableDictionary *_dicNickNameToFriends;
    NSMutableDictionary *_dicAddressBook;
    NSMutableArray *_arrContact;
    NSMutableDictionary *_dicContact;
    NSMutableDictionary *_dicNewestCreateTimeForSession;
    NSMutableArray *_arrSessionContact;
    NSMutableArray *_arrTopHitResultContactValue;
    NSMutableArray *_arrTopHitResultAddressBookValue;
    NSMutableArray *_arrTopHitResultContact;
    NSMutableArray *_arrTopHitResultAddressBookFriend;
    NSMutableArray *_arrTopHitNormalContact;
    NSMutableArray *_arrTopHitGroupContact;
    NSMutableArray *_arrTopHitBrandContact;
    NSMutableArray *_arrFilterContact;
    NSMutableArray *_arrFilterAddressBookFriend;
    NSMutableArray *_arrNormalContact;
    NSMutableArray *_arrGroupContact;
    NSMutableArray *_arrBrandContact;
    NSString *_lastQueryText;
    NSString *_newestQueryText;
    NSMutableArray *_arrLastQueryKeywords;
    NSMutableDictionary *_dicSearchMatchTip;
    NSMutableArray *_arrGroupContactForDetailPage;
    NSMutableArray *_arrSourceGroupContact;
    NSString *_lastQueryTextForDetailPage;
    NSString *_newestQueryTextForDetailPage;
    NSMutableArray *_arrLastQueryKeywordsForDetailPage;
    NSMutableDictionary *_dicSearchMatchTipForDetailPage;
    NSMutableDictionary *_dicChinesePinYin;
    NSMutableDictionary *_dicMatchWeChatID;
    NSMutableDictionary *_dicTagNames;
    NSMutableDictionary *_dicCacheFilterContact;
    NSMutableDictionary *_dicCacheFilterAddressBookFriend;
    NSMutableArray *_arrSourceSingleContact;
    NSMutableArray *_arrSingleContactForDetailPage;
    NSMutableArray *_arrAddressBookFriendForDetailPage;
    _Bool _hasLoadedAddressContact;
    _Bool _hasLoadedSessionContact;
    _Bool _needMonitorReport;
}

@property(nonatomic) _Bool needMonitorReport; // @synthesize needMonitorReport=_needMonitorReport;
@property(nonatomic) _Bool onlyInitContactScene; // @synthesize onlyInitContactScene=_onlyInitContactScene;
@property(retain, nonatomic) NSMutableArray *arrLastQueryKeywordsForDetailPage; // @synthesize arrLastQueryKeywordsForDetailPage=_arrLastQueryKeywordsForDetailPage;
@property(retain, nonatomic) NSString *newestQueryTextForDetailPage; // @synthesize newestQueryTextForDetailPage=_newestQueryTextForDetailPage;
@property(retain, nonatomic) NSString *lastQueryTextForDetailPage; // @synthesize lastQueryTextForDetailPage=_lastQueryTextForDetailPage;
@property(retain, nonatomic) NSArray *arrLastQueryKeywords; // @synthesize arrLastQueryKeywords=_arrLastQueryKeywords;
@property(retain, nonatomic) NSString *newestQueryText; // @synthesize newestQueryText=_newestQueryText;
@property(retain, nonatomic) NSString *lastQueryText; // @synthesize lastQueryText=_lastQueryText;
- (void).cxx_destruct;
- (id)syncSearchTextForSingleContact:(id)arg1 limitCount:(unsigned int)arg2;
- (void)onContactTagNameUpdate:(id)arg1;
- (void)onAllTagNameUpdate;
- (void)onFriendListUpdated:(id)arg1 ErrorCode:(unsigned int)arg2 Message:(id)arg3;
- (void)onContactListUpdate:(unsigned int)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (id)getAddressBookFriendForDetailPage:(id)arg1;
- (id)getSingleContactsForDetailPage:(id)arg1;
- (id)getNormalContactsForDetailPage:(id)arg1;
- (_Bool)hasSearchDoneForDetailPageOfSingleContact:(id)arg1;
- (id)getDetailPageMatchTipOfSingleContactForUserName:(id)arg1;
- (void)cancelSearchForDetailPageOfSingleContact;
- (void)asyncSearchTextForDetailPageOfSingleContact:(id)arg1;
- (void)doSearchForDetailPageOfSingleContact:(id)arg1;
- (id)getSourceSingleContactContactForDetailPage;
- (id)getGroupContactsForDetailPage:(id)arg1;
- (_Bool)hasSearchDoneForDetailPage:(id)arg1;
- (id)getDetailPageMatchTipForUserName:(id)arg1;
- (void)cancelSearchForDetailPage;
- (void)asyncSearchTextForDetailPage:(id)arg1;
- (void)doSearchForDetailPage:(id)arg1;
- (id)getSourceGroupContactForDetailPage;
- (_Bool)hasMatchWechatID:(id)arg1;
- (id)getMatchTipForUserName:(id)arg1;
- (void)cancelSearch;
- (void)asyncSearchText:(id)arg1;
- (_Bool)hasAllContactLoaded;
- (void)monitorReport;
- (void)doSearch:(id)arg1;
- (void)searchCompletely:(id)arg1;
- (void)searchTextCompletely:(id)arg1;
- (void)searchTextAndNotNotify:(id)arg1;
- (void)searchTopHitContacts:(id)arg1 matchTips:(id)arg2;
- (id)getSourceAddressBook;
- (id)getSourceFilterAddressFriend:(id)arg1;
- (id)getSourceFilterContact:(id)arg1;
- (id)getCacheFilterAddressFriend:(id)arg1;
- (_Bool)hasCacheFilterAddressFriend:(id)arg1;
- (id)getCacheFilterContact:(id)arg1;
- (_Bool)hasCacheFilterContact:(id)arg1;
- (void)cacheSearchResult;
- (unsigned int)getBrandContactsCount;
- (id)getBrandContacts;
- (_Bool)hasBrandContacts;
- (unsigned int)getGroupContactsCount;
- (id)getGroupContacts;
- (_Bool)hasGroupContacts;
- (unsigned int)getAddressBookFriendsCount;
- (id)getAddressBookFriendsByNickName:(id)arg1;
- (id)getAddressBookFriends;
- (_Bool)hasAddressBookeFriends;
- (unsigned int)getNormalContactsCount;
- (id)getNormalContacts;
- (_Bool)hasNormalContacts;
- (unsigned int)getTopHitBrandContactsCount;
- (id)getTopHitBrandContacts;
- (unsigned int)getTopHitGroupContactsCount;
- (id)getTopHitGroupContacts;
- (unsigned int)getTopHitAddressFriendsCount;
- (id)getTopHitAddressFriends;
- (unsigned int)getTopHitNormalContactsCount;
- (id)getTopHitNormalContacts;
- (unsigned int)getTopHitContactsCount;
- (_Bool)hasTopHitContacts;
- (void)selectAddressFriend:(id)arg1;
- (void)selectContact:(id)arg1;
- (void)addScore:(id)arg1 arrTopHitItem:(id)arg2;
- (_Bool)selectTopHitKey:(id)arg1 arrTopHitItem:(id)arg2 arrTopHitResultValue:(id)arg3;
- (void)sortTopHitValueList:(id)arg1;
- (void)trySaveTopHitItem;
- (void)trySaveTopHitAddressBookItem;
- (void)trySaveTopHitContactItem;
- (void)tryLoadTopHitItem;
- (id)pathForTopHitAddressBookItem;
- (id)pathForTopHitContactItem;
- (unsigned int)getTotalCount;
- (_Bool)hasSearchResult;
- (void)tryInitSessionContactTime;
- (void)loadAllSessionContact;
- (void)asyncLoadAllSessionContact;
- (id)loadSessionUserName;
- (void)sortAddressBookFriends:(id)arg1 matchTips:(id)arg2;
- (void)sortContacts:(id)arg1 matchTips:(id)arg2;
- (void)tryLoadContacts;
- (void)addBrandContacts:(id)arg1;
- (void)addPluginContact:(id)arg1 pluginType:(int)arg2;
- (void)tryLoadAddressBook;
- (void)tryLoadAddressBookFriends;
- (void)sortFriendList;
- (void)DeepCopyArrSessionContact:(id)arg1;
- (_Bool)hasInitSessionContact;
- (id)getArrSessionContact;
- (void)doInitWorker;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
