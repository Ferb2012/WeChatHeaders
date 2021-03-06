//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCDBCoding.h"

@class NSString;

@interface DBQQContact : NSObject <WCDBCoding>
{
    unsigned int uin;
    unsigned int type;
    unsigned int sex;
    unsigned int age;
    unsigned int imageKey;
    unsigned int extKey;
    unsigned int imageKeyLast;
    unsigned int extKeyLast;
    unsigned int createTime;
    unsigned int ConIntRes1;
    unsigned int ConIntRes2;
    unsigned int ConIntRes3;
    NSString *userName;
    NSString *nickName;
    NSString *email;
    NSString *mobile;
    NSString *address;
    NSString *sign;
    NSString *birthday;
    NSString *fullPinYin;
    NSString *shortPinYin;
    NSString *image;
    NSString *remark;
    NSString *remarkPinYinShort;
    NSString *remarkPinYinFull;
    NSString *ConStrRes1;
    NSString *ConStrRes2;
    NSString *ConStrRes3;
}

+ (id)dummyObject;
+ (void)initialize;
@property(retain, nonatomic) NSString *ConStrRes3; // @synthesize ConStrRes3;
@property(retain, nonatomic) NSString *ConStrRes2; // @synthesize ConStrRes2;
@property(retain, nonatomic) NSString *ConStrRes1; // @synthesize ConStrRes1;
@property(retain, nonatomic) NSString *remarkPinYinFull; // @synthesize remarkPinYinFull;
@property(retain, nonatomic) NSString *remarkPinYinShort; // @synthesize remarkPinYinShort;
@property(retain, nonatomic) NSString *remark; // @synthesize remark;
@property(retain, nonatomic) NSString *image; // @synthesize image;
@property(retain, nonatomic) NSString *shortPinYin; // @synthesize shortPinYin;
@property(retain, nonatomic) NSString *fullPinYin; // @synthesize fullPinYin;
@property(retain, nonatomic) NSString *birthday; // @synthesize birthday;
@property(retain, nonatomic) NSString *sign; // @synthesize sign;
@property(retain, nonatomic) NSString *address; // @synthesize address;
@property(retain, nonatomic) NSString *mobile; // @synthesize mobile;
@property(retain, nonatomic) NSString *email; // @synthesize email;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName;
@property(nonatomic) unsigned int ConIntRes3; // @synthesize ConIntRes3;
@property(nonatomic) unsigned int ConIntRes2; // @synthesize ConIntRes2;
@property(nonatomic) unsigned int ConIntRes1; // @synthesize ConIntRes1;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
@property(nonatomic) unsigned int extKeyLast; // @synthesize extKeyLast;
@property(nonatomic) unsigned int imageKeyLast; // @synthesize imageKeyLast;
@property(nonatomic) unsigned int extKey; // @synthesize extKey;
@property(nonatomic) unsigned int imageKey; // @synthesize imageKey;
@property(nonatomic) unsigned int age; // @synthesize age;
@property(nonatomic) unsigned int sex; // @synthesize sex;
@property(nonatomic) unsigned int type; // @synthesize type;
@property(nonatomic) unsigned int uin; // @synthesize uin;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;
- (void).cxx_destruct;
- (const basic_string_a490aa4c *)getWCDBPrimaryColumnName;
- (const struct WCDBIndexHelper *)getWCDBIndexArray;
- (unsigned long long)getWCDBIndexArrayCount;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (const map_0e718273 *)getFileValueTagIndexMap;
- (id)getFileValueTypeTable;
- (const map_0e718273 *)getPackedValueTagIndexMap;
- (id)getPackedValueTypeTable;
- (const map_7a576766 *)getValueNameIndexMap;
- (id)getValueTable;
- (const WCDBCondition_22fabacd *)db_ConStrRes3;
- (const WCDBCondition_22fabacd *)db_ConStrRes2;
- (const WCDBCondition_22fabacd *)db_ConStrRes1;
- (const WCDBCondition_22fabacd *)db_remarkPinYinFull;
- (const WCDBCondition_22fabacd *)db_remarkPinYinShort;
- (const WCDBCondition_22fabacd *)db_remark;
- (const WCDBCondition_22fabacd *)db_image;
- (const WCDBCondition_22fabacd *)db_shortPinYin;
- (const WCDBCondition_22fabacd *)db_fullPinYin;
- (const WCDBCondition_22fabacd *)db_birthday;
- (const WCDBCondition_22fabacd *)db_sign;
- (const WCDBCondition_22fabacd *)db_address;
- (const WCDBCondition_22fabacd *)db_mobile;
- (const WCDBCondition_22fabacd *)db_email;
- (const WCDBCondition_22fabacd *)db_nickName;
- (const WCDBCondition_c6db074e *)db_ConIntRes3;
- (const WCDBCondition_c6db074e *)db_ConIntRes2;
- (const WCDBCondition_c6db074e *)db_ConIntRes1;
- (const WCDBCondition_c6db074e *)db_createTime;
- (const WCDBCondition_c6db074e *)db_extKeyLast;
- (const WCDBCondition_c6db074e *)db_imageKeyLast;
- (const WCDBCondition_c6db074e *)db_extKey;
- (const WCDBCondition_c6db074e *)db_imageKey;
- (const WCDBCondition_c6db074e *)db_age;
- (const WCDBCondition_c6db074e *)db_sex;
- (const WCDBCondition_c6db074e *)db_type;
- (const WCDBCondition_c6db074e *)db_uin;
- (const WCDBCondition_22fabacd *)db_userName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

