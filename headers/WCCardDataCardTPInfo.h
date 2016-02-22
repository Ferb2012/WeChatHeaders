//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSArray, NSString, WCCardOperationRegion, WCCardUsedStoreInfo;

@interface WCCardDataCardTPInfo : MMObject
{
    unsigned int _cardType;
    unsigned int _shopCount;
    unsigned int _blockMask;
    unsigned int _controlflag;
    NSString *_cardTypeName;
    NSString *_cardCategory;
    NSString *_acceptWording;
    NSString *_buttonWording;
    NSString *_color;
    NSString *_logoUrl;
    NSString *_logoName;
    NSString *_appId;
    NSString *_appUserName;
    NSArray *_primaryFields;
    NSString *_primarySubTitle;
    NSString *_middleIconUrl;
    NSString *_notice;
    NSString *_servicePhone;
    NSArray *_introduceFields;
    NSString *_imageTextUrl;
    NSString *_sourceIconUrl;
    NSString *_source;
    NSString *_h5ShowUrl;
    WCCardUsedStoreInfo *_oneShopInfo;
    NSString *_advertiseWording;
    NSString *_advertiseUrl;
    NSString *_publicServiceName;
    NSString *_publicServiceTip;
    WCCardOperationRegion *_announcement;
}

@property(retain, nonatomic) WCCardOperationRegion *announcement; // @synthesize announcement=_announcement;
@property(retain, nonatomic) NSString *publicServiceTip; // @synthesize publicServiceTip=_publicServiceTip;
@property(retain, nonatomic) NSString *publicServiceName; // @synthesize publicServiceName=_publicServiceName;
@property(retain, nonatomic) NSString *advertiseUrl; // @synthesize advertiseUrl=_advertiseUrl;
@property(retain, nonatomic) NSString *advertiseWording; // @synthesize advertiseWording=_advertiseWording;
@property(nonatomic) unsigned int controlflag; // @synthesize controlflag=_controlflag;
@property(retain, nonatomic) WCCardUsedStoreInfo *oneShopInfo; // @synthesize oneShopInfo=_oneShopInfo;
@property(nonatomic) unsigned int blockMask; // @synthesize blockMask=_blockMask;
@property(retain, nonatomic) NSString *h5ShowUrl; // @synthesize h5ShowUrl=_h5ShowUrl;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *sourceIconUrl; // @synthesize sourceIconUrl=_sourceIconUrl;
@property(retain, nonatomic) NSString *imageTextUrl; // @synthesize imageTextUrl=_imageTextUrl;
@property(nonatomic) unsigned int shopCount; // @synthesize shopCount=_shopCount;
@property(retain, nonatomic) NSArray *introduceFields; // @synthesize introduceFields=_introduceFields;
@property(retain, nonatomic) NSString *servicePhone; // @synthesize servicePhone=_servicePhone;
@property(retain, nonatomic) NSString *notice; // @synthesize notice=_notice;
@property(retain, nonatomic) NSString *middleIconUrl; // @synthesize middleIconUrl=_middleIconUrl;
@property(retain, nonatomic) NSString *primarySubTitle; // @synthesize primarySubTitle=_primarySubTitle;
@property(retain, nonatomic) NSArray *primaryFields; // @synthesize primaryFields=_primaryFields;
@property(retain, nonatomic) NSString *appUserName; // @synthesize appUserName=_appUserName;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *logoName; // @synthesize logoName=_logoName;
@property(retain, nonatomic) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
@property(retain, nonatomic) NSString *color; // @synthesize color=_color;
@property(retain, nonatomic) NSString *buttonWording; // @synthesize buttonWording=_buttonWording;
@property(retain, nonatomic) NSString *acceptWording; // @synthesize acceptWording=_acceptWording;
@property(retain, nonatomic) NSString *cardCategory; // @synthesize cardCategory=_cardCategory;
@property(retain, nonatomic) NSString *cardTypeName; // @synthesize cardTypeName=_cardTypeName;
@property(nonatomic) unsigned int cardType; // @synthesize cardType=_cardType;
- (void).cxx_destruct;
- (void)dealloc;

@end
