//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class MMWebImageView, UILabel;

@interface EmoticonStoreCollectionView : MMUIView
{
    MMWebImageView *m_iconView;
    MMWebImageView *m_tagImageView;
    UILabel *m_titleLabel;
}

@property(retain, nonatomic) UILabel *m_titleLabel; // @synthesize m_titleLabel;
@property(retain, nonatomic) MMWebImageView *m_tagImageView; // @synthesize m_tagImageView;
@property(retain, nonatomic) MMWebImageView *m_iconView; // @synthesize m_iconView;
- (void).cxx_destruct;
- (void)setLabelTitle:(id)arg1;
- (void)setTagUrl:(id)arg1;
- (void)setIconUrl:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
