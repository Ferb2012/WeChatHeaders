//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface WCBizMainBannerView : UIView
{
    id <WCBizMainBannerViewDelegate> _delegate;
    NSArray *_bannerDics;
}

+ (double)height;
@property(retain, nonatomic) NSArray *bannerDics; // @synthesize bannerDics=_bannerDics;
@property(nonatomic) __weak id <WCBizMainBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onTapped:(id)arg1;
- (void)commonInit;
- (id)initWithBannerDictionarys:(id)arg1;

@end

