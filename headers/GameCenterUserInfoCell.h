//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class MMHeadImageView, UIImageView, UILabel;

@interface GameCenterUserInfoCell : MMTableViewCell
{
    MMHeadImageView *_headImageView;
    UILabel *_nickLabel;
    UILabel *_msgLabel;
    UIImageView *_levelBadgeView;
}

- (void).cxx_destruct;
- (id)levelBadgeImage:(unsigned int)arg1;
- (void)updateWithContact:(id)arg1 andUserInfo:(id)arg2 andMsg:(id)arg3;
- (void)initSubviews;
- (void)layoutSubviews;
- (struct UIEdgeInsets)layoutMargins;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
