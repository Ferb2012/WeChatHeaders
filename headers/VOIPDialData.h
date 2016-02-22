//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CContact, NSData, NSMutableArray, NSString;

@interface VOIPDialData : NSObject
{
    int mStrategy;
    int mRoomId;
    int mRoomMemberId;
    int mLinkDisconnectHbInterval;
    int mLinkDisconnectHbCnt;
    int mEncryptLength;
    int _mDataChannelType;
    NSData *mLocalPid;
    NSData *mLocalCapInfo;
    NSData *mRemotePid;
    NSData *mRemoteCapInfo;
    long long mRoomKey;
    CContact *mContact;
    NSString *mCaller;
    NSData *mClientSigns;
    NSMutableArray *mRelaySvrIp;
    NSMutableArray *mRelaySvrPort;
    NSMutableArray *mPunchSvrIp;
    NSMutableArray *mPunchSvrPort;
}

@property(nonatomic) int mDataChannelType; // @synthesize mDataChannelType=_mDataChannelType;
@property(retain, nonatomic) NSMutableArray *mPunchSvrPort; // @synthesize mPunchSvrPort;
@property(retain, nonatomic) NSMutableArray *mPunchSvrIp; // @synthesize mPunchSvrIp;
@property(retain, nonatomic) NSMutableArray *mRelaySvrPort; // @synthesize mRelaySvrPort;
@property(retain, nonatomic) NSMutableArray *mRelaySvrIp; // @synthesize mRelaySvrIp;
@property(retain, nonatomic) NSData *mClientSigns; // @synthesize mClientSigns;
@property(nonatomic) int mEncryptLength; // @synthesize mEncryptLength;
@property(nonatomic) int mLinkDisconnectHbCnt; // @synthesize mLinkDisconnectHbCnt;
@property(nonatomic) int mLinkDisconnectHbInterval; // @synthesize mLinkDisconnectHbInterval;
@property(retain, nonatomic) NSString *mCaller; // @synthesize mCaller;
@property(retain, nonatomic) CContact *mContact; // @synthesize mContact;
@property(nonatomic) long long mRoomKey; // @synthesize mRoomKey;
@property(nonatomic) int mRoomMemberId; // @synthesize mRoomMemberId;
@property(nonatomic) int mRoomId; // @synthesize mRoomId;
@property(nonatomic) int mStrategy; // @synthesize mStrategy;
@property(retain, nonatomic) NSData *mRemoteCapInfo; // @synthesize mRemoteCapInfo;
@property(retain, nonatomic) NSData *mRemotePid; // @synthesize mRemotePid;
@property(retain, nonatomic) NSData *mLocalCapInfo; // @synthesize mLocalCapInfo;
@property(retain, nonatomic) NSData *mLocalPid; // @synthesize mLocalPid;
- (void).cxx_destruct;
- (_Bool)isValidKey;
- (void)reset;
- (void)SetRoomKey:(long long)arg1;
- (void)SetRoomMemberId:(int)arg1;
- (void)SetRoomId:(int)arg1;
- (void)dealloc;
- (id)init;

@end
