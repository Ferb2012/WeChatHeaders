//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayLogicMgr.h"

@interface WCPayLogicMgr (CardControl)
- (void)setLocalBadgetIndex:(unsigned int)arg1;
- (unsigned int)getLocalBadgetIndex;
- (void)SetShowedRedCodeForWXBorrowMoneyItem:(id)arg1 WithRedCodeIndex:(unsigned int)arg2;
- (_Bool)IsShowedRedCodeForWXBorrowMoneyItem:(id)arg1 WithRedCodeIndex:(unsigned int)arg2;
- (void)SetShowedFaceToFaceReceiveMoneyTips:(_Bool)arg1;
- (_Bool)IsShowedFaceToFaceReceiveMoneyTips;
- (void)SetShowedFaceToFaceTransferViewTips:(_Bool)arg1;
- (_Bool)IsShowedFaceToFaceTransferViewTips;
- (void)SetShowedBalanceDescription:(_Bool)arg1;
- (_Bool)IsShowedBalanceDescription;
- (id)GetLastBankCard;
- (id)GetMainBankCard;
- (void)SetMainBankCard:(id)arg1;
- (void)GetAvailableBank;
- (void)UnBindCard:(id)arg1 WCPayPassword:(id)arg2;
- (void)GetCardBinAndAvailableBankWithoutOrderID:(id)arg1;
- (void)GetCardBinAndAvailableBank:(id)arg1;
- (void)GetBindingCardBin:(id)arg1;
- (void)addParametersForBalance:(id)arg1;
- (void)addParametersForTouchID:(id)arg1;
- (void)GetPayCardListAndUsrVerifiedInfo:(_Bool)arg1 ToMainServiceSearch:(_Bool)arg2 UsedMemoryCacheCard:(_Bool)arg3 UsedLocalCacheCard:(_Bool)arg4 Scene:(int)arg5;
- (void)GetPayCardListAndUsrVerifiedInfo:(_Bool)arg1 ToMainServiceSearch:(_Bool)arg2 UsedMemoryCacheCard:(_Bool)arg3 UsedLocalCacheCard:(_Bool)arg4;
- (void)GetPayCardListAndUsrVerifiedInfo:(_Bool)arg1 ToMainServiceSearch:(_Bool)arg2;
- (void)GetPayCardListAndUsrVerifiedInfo:(_Bool)arg1 ToMainServiceSearch:(_Bool)arg2 UsedMemoryCacheCard:(_Bool)arg3;
- (void)callBackBufferGetPayCardListAndUsrVerifiedInfo:(id)arg1;
- (void)insideCallBackSetMainBankCardErrorResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackSetMainBankCardResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackUnBindCard:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackGetCardBinAndAvailableBank:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackGetAvailableBank:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackGetCardBin:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackGetPayCardListAndUsrVerifiedInfo:(id)arg1 OnRequest:(id)arg2 NewInfo:(_Bool)arg3;
@end

