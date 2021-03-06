//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSMutableDictionary, NSNumber, NSString, UIImage, UIView;

@interface WXGestureMgr : MMService <MMService>
{
    NSMutableDictionary *_snapshotArray;
    UIImage *_navBarSnapshot;
    UIView *_lastView;
    _Bool _isShowTabBar;
    NSNumber *_lastKey;
    _Bool lastViewExtendedLayoutIncludesOpaqueBars;
    _Bool isPrepareAnimation;
}

@property(nonatomic) _Bool isPrepareAnimation; // @synthesize isPrepareAnimation;
@property(nonatomic) _Bool lastViewExtendedLayoutIncludesOpaqueBars; // @synthesize lastViewExtendedLayoutIncludesOpaqueBars;
@property(retain, nonatomic) NSNumber *lastKey; // @synthesize lastKey=_lastKey;
@property(nonatomic) _Bool isShowTabBar; // @synthesize isShowTabBar=_isShowTabBar;
@property(retain, nonatomic) UIView *lastView; // @synthesize lastView=_lastView;
@property(retain, nonatomic) UIImage *navBarSnapshot; // @synthesize navBarSnapshot=_navBarSnapshot;
@property(retain, nonatomic) NSMutableDictionary *snapshotArray; // @synthesize snapshotArray=_snapshotArray;
- (void).cxx_destruct;
- (void)formLastViewsSnapshot;
- (void)onServiceReloadData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

