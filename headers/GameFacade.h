//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "GameNotifyMsgsMgrDelegate.h"
#import "MMService.h"

@class GameMsgDB, GameNotifyMsgsMgr, NSString;

@interface GameFacade : MMService <GameNotifyMsgsMgrDelegate, MMService>
{
    GameNotifyMsgsMgr *m_gameNotifyMsgsMgr;
    GameMsgDB *m_gameMsgDB;
}

- (void).cxx_destruct;
- (id)getMsgByMsgType:(unsigned long long)arg1 appID:(id)arg2 beginTime:(unsigned long long)arg3 maxCount:(unsigned long long)arg4;
- (_Bool)incrementAdDisplayCount:(id)arg1;
- (_Bool)incrementDisplayCount:(id)arg1;
- (id)getXmlContentByLocalMsgID:(unsigned int)arg1;
- (_Bool)setAllBubbleMsgReadIncludingOthers:(_Bool)arg1;
- (id)getLastUnreadBubbleMsg;
- (id)getMsgWithPushMsgId:(id)arg1;
- (_Bool)hasUnreadMessages;
- (id)getUnreadMsgList;
- (id)getLastUnreadMsg;
- (unsigned int)getUnreadMessageCount;
- (_Bool)deleteAllVisibleMsgs;
- (_Bool)deleteGameMsgByLocalMsgID:(unsigned int)arg1;
- (_Bool)deleteGameMsgByMsgID:(unsigned int)arg1;
- (id)getMsgByMsgID:(unsigned int)arg1;
- (_Bool)setAllMsgRead;
- (_Bool)insertMsg:(id)arg1 XMLObject:(id)arg2;
- (void)getNextPageMsgListByCurMinUpdateTime:(unsigned int)arg1;
- (void)getFirstPageMsgList;
- (void)onGotBizAppInfo;
- (void)onUpdateGamePersonalInfoList;
- (void)onGotGameIntroList:(id)arg1 errType:(int)arg2;
- (void)onGameNewAppCountChanged;
- (void)onGameGiftInfoChanged;
- (void)onGameAdInfoChanged;
- (void)onGameMessageUnReadCountChanged;
- (void)onGetUserRankListFail:(unsigned int)arg1 appID:(id)arg2;
- (void)onGetUserRankListSuccess:(id)arg1 count:(unsigned long long)arg2 hasReportScore:(_Bool)arg3;
- (_Bool)incrementGiftDisplayCount:(id)arg1;
- (id)getLatestGiftInfo;
- (_Bool)shouldShowGameEntranceRedDotForGift;
- (_Bool)shouldShowGiftEntranceRedDot;
- (void)markShowGameEntranceRedDotForGift;
- (void)markShowGiftEntranceRedDot;
- (_Bool)shouldShowGameV2NewMessageOuterNotify;
- (void)setGameV2NewMessageOuterNotify:(_Bool)arg1;
- (id)getAllGameAds;
- (void)setGameAdDownloadSuccess:(_Bool)arg1 withAppID:(id)arg2;
- (_Bool)markGameAdAsRead:(id)arg1;
- (id)getGameAdsForDisplay;
- (void)markAppNotNew:(id)arg1;
- (id)getNewAppDict;
- (_Bool)isNewApp:(id)arg1;
- (void)deleteAllMessages;
- (id)getMessagesFrom:(id)arg1 maxCount:(unsigned int)arg2;
- (_Bool)isShowGameCenterEntrance;
- (id)init;
- (void)dealloc;
- (_Bool)onServiceMemoryWarning;
- (void)onServiceTerminate;
- (void)onServiceEnterBackground;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)onServiceReloadData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

