//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMsgExt.h"
#import "INetworkStatusMgrExt.h"

@interface MMWebCacheUpdater : NSObject <INetworkStatusMgrExt, IMsgExt>
{
}

- (void)handleSyncPushInfo:(id)arg1;
- (void)handleAsyncPushInfo:(id)arg1;
- (void)tryStartDownloadPushInfo:(id)arg1;
- (id)parseNewXml:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (id)init;
- (void)dealloc;

@end
