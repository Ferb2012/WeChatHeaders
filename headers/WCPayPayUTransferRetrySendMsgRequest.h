//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCPayPayUTransferRetrySendMsgRequest : NSObject
{
    NSString *m_trans_id;
    NSString *m_invalid_time;
    NSString *m_receiver_name;
    NSString *m_total_fee;
    NSString *m_fee_type;
}

@property(retain, nonatomic) NSString *m_trans_id; // @synthesize m_trans_id;
@property(retain, nonatomic) NSString *m_receiver_name; // @synthesize m_receiver_name;
@property(retain, nonatomic) NSString *m_invalid_time; // @synthesize m_invalid_time;
@property(retain, nonatomic) NSString *m_fee_type; // @synthesize m_fee_type;
@property(retain, nonatomic) NSString *m_total_fee; // @synthesize m_total_fee;
- (void).cxx_destruct;
- (void)dealloc;

@end

