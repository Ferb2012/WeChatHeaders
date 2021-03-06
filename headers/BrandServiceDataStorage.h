//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface BrandServiceDataStorage : NSObject
{
    NSMutableArray *itemList;
    _Bool isCacheValid;
    unsigned int hash;
    unsigned int lastUpdateTime;
}

+ (_Bool)IsStorageExist;
+ (id)pathForCache;
@property(nonatomic) unsigned int lastUpdateTime; // @synthesize lastUpdateTime;
@property(nonatomic) unsigned int hash; // @synthesize hash;
@property(nonatomic) _Bool isCacheValid; // @synthesize isCacheValid;
@property(retain, nonatomic) NSMutableArray *itemList; // @synthesize itemList;
- (void).cxx_destruct;
- (_Bool)loadStorage;
- (_Bool)saveStorage;

@end

