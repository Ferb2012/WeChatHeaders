//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IPreEnterWechatLogicExt.h"
#import "UIAlertViewDelegate.h"

@class NSString, NSURL;

@interface WeChatPayHandler : NSObject <IPreEnterWechatLogicExt, UIAlertViewDelegate>
{
    NSString *m_nsAppID;
    NSURL *m_nsAppUrl;
}

- (void).cxx_destruct;
- (void)createWeChatePay;
- (id)parseURLParams:(id)arg1;
- (void)onPreEnterWechatDone;
- (void)cancelWeChatPay;
- (void)startWeChatPay:(id)arg1 payInfo:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

