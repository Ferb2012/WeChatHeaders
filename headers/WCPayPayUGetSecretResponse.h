//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCPayPayUGetSecretResponse : NSObject
{
    unsigned int m_errCode;
    NSString *m_errMsg;
    NSString *m_id;
    NSString *m_des;
}

@property(retain, nonatomic) NSString *m_des; // @synthesize m_des;
@property(retain, nonatomic) NSString *m_id; // @synthesize m_id;
@property(retain, nonatomic) NSString *m_errMsg; // @synthesize m_errMsg;
@property(nonatomic) unsigned int m_errCode; // @synthesize m_errCode;
- (void).cxx_destruct;
- (void)dealloc;

@end

