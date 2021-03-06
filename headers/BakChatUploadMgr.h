//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "BakChatUploadNetworkDelegate.h"
#import "MMService.h"

@class BakChatUploadBreakPointStruct, BakChatUploadFileHelper, BakChatUploadNetworkHelper, NSCondition, NSOperationQueue, NSString;

@interface BakChatUploadMgr : MMService <MMService, BakChatUploadNetworkDelegate>
{
    BakChatUploadFileHelper *m_bakChatUploadFileHelper;
    BakChatUploadNetworkHelper *m_bakChatUploadNetworkHelper;
    BakChatUploadBreakPointStruct *m_bakChatUploadBreakPointStruct;
    NSCondition *m_condition;
    NSOperationQueue *m_operationQueue;
    _Bool m_operationCancel;
    _Bool m_bError;
    _Bool m_producerEnd;
}

- (void).cxx_destruct;
- (_Bool)onServiceMemoryWarning;
- (void)onServiceTerminate;
- (void)onServiceEnterBackground;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)OnFailureEncryptData:(id)arg1;
- (void)OnFailureGetBakChatUploadEnd;
- (void)OnGetBakChatUploadEnd:(unsigned int)arg1;
- (void)OnTryUploadAfterFailureUploadBakChatUploadPackage;
- (void)OnFailureUploadBakChatPackage:(id)arg1;
- (void)OnSuccessUploadBakChatPackage:(id)arg1;
- (void)OnFailureGetBakChatUploadHead;
- (void)OnGetBakChatUploadHead:(unsigned int)arg1;
- (void)handleFailureGetBakChatUploadEnd;
- (void)handleGetBakChatUploadEnd:(id)arg1;
- (void)handleTryUploadAfterFailureBakChatUploadPackage;
- (void)handleFailureUploadBakChatPackage:(id)arg1;
- (void)handleSuccessUploadBakChatPackage:(id)arg1;
- (void)handleFailureGetBakChatUploadHead;
- (void)handleGetBakChatUploadHead:(id)arg1;
- (void)CloseAllObvesever;
- (void)CancelBakChatUpload;
- (void)StopBakChatUpload;
- (void)StartBakChatUpload:(id)arg1 WithPassword:(id)arg2 WithAllSessionSelected:(_Bool)arg3;
- (void)StartBakChatUpload:(id)arg1 WithAllSessionSelected:(_Bool)arg2;
- (void)ContinueBakChatUpload;
- (void)RestartOrRecoverBakChatUpload;
- (_Bool)TryRestartOrRecoverBakChatUpload;
- (void)GetEachSessionSize:(id)arg1;
- (void)cancelBakChatUpload;
- (void)stopBakChatUpload;
- (void)startBakChatUpload:(id)arg1;
- (void)continuBakChatUpload;
- (void)recoverBreakPoint;
- (void)recoverCurrentStatus;
- (_Bool)tryRestartOrRecoverBakChatUpload;
- (void)SendMessageToMainThread:(int)arg1 WithErrorMessage:(int)arg2 AndProgress:(float)arg3 AndTotalCount:(unsigned int)arg4 AndCurrentCount:(unsigned int)arg5;
- (void)OnBakChatUploadMessageOnMainThread:(id)arg1;
- (id)SafeGetBakChatUploadBreakPointStruct;
- (void)SafeSaveBakChatUploadBreakPointStruct:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

