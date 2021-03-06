//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, UIColor, UIFont;

@interface ZCWScrollNumView : UIView
{
    NSMutableArray *_numberViews;
    unsigned long long _dotPos;
    unsigned long long numberSize;
    unsigned long long numberValue;
    UIView *backgroundView;
    UIView *digitBackgroundView;
    UIFont *digitFont;
    double splitSpaceWidth;
    double topAndBottomPadding;
    UIColor *_digitColor;
    unsigned long long _randomLength;
}

+ (unsigned long long)digitFromNum:(unsigned long long)arg1 withIndex:(unsigned long long)arg2;
@property(nonatomic) unsigned long long randomLength; // @synthesize randomLength=_randomLength;
@property(retain, nonatomic) UIColor *digitColor; // @synthesize digitColor=_digitColor;
@property(nonatomic) unsigned long long _dotPos; // @synthesize _dotPos;
@property(nonatomic) double topAndBottomPadding; // @synthesize topAndBottomPadding;
@property(nonatomic) double splitSpaceWidth; // @synthesize splitSpaceWidth;
@property(readonly, nonatomic) NSArray *numberViews; // @synthesize numberViews=_numberViews;
@property(retain, nonatomic) UIFont *digitFont; // @synthesize digitFont;
@property(retain, nonatomic) UIView *digitBackgroundView; // @synthesize digitBackgroundView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView;
@property(readonly, nonatomic) unsigned long long numberValue; // @synthesize numberValue;
@property(nonatomic) unsigned long long numberSize; // @synthesize numberSize;
- (void).cxx_destruct;
- (void)didConfigFinish;
- (unsigned long long)digitIndex:(unsigned long long)arg1;
- (void)setNumber:(unsigned long long)arg1 withAnimationType:(int)arg2 animationTime:(double)arg3;
- (void)initScrollNumView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

