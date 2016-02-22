//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class CContact, MMCPLabel, MMMaskHeadImageView, NSString, UIButton, UIColor, UIImageView;

@interface NewChatRoomMemberItemView : MMUIView
{
    MMCPLabel *m_labelDisplayName;
    UIButton *m_addMemberBtn;
    UIButton *m_deleteMemberBtn;
    MMMaskHeadImageView *m_headImageView;
    UIImageView *m_trackIcon;
    UIImageView *m_talkIcon;
    UIButton *m_smallDeleteBtn;
    CContact *m_contact;
    CContact *m_groupContact;
    id <NewChatRoomMemberItemViewDelegate> m_delegate;
    SEL m_updateItemViewForDeleteSel;
    SEL initSubViewSel;
    _Bool m_bDeleteStatus;
    unsigned int m_uiIndex;
    UIColor *m_textColor;
    UIColor *m_shadowColor;
    _Bool m_noDisplayName;
    NSString *m_cpKeyForNickname;
    NSString *m_cpKeyForChatRoomDisplayName;
    _Bool m_isNickNameUnsafe;
    _Bool m_isChatRoomDisplayNameUnsafe;
}

@property(nonatomic) unsigned int m_uiIndex; // @synthesize m_uiIndex;
@property(retain, nonatomic) CContact *m_groupContact; // @synthesize m_groupContact;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
@property(nonatomic) __weak id <NewChatRoomMemberItemViewDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (_Bool)isDisplayNameUnsafe;
- (void)updateCPState;
- (void)setNoDisplayName:(_Bool)arg1;
- (id)initViewInChatRoomProfile;
- (void)updateDeleteItemSubview;
- (void)updateAddItemSubview;
- (void)updateContactItemSubview;
- (void)updateWithDeleteMemberBtnAtIndexEx:(unsigned long long)arg1;
- (void)updateWithDeleteMemberBtnAtIndexEx:(unsigned long long)arg1 withColumn:(unsigned long long)arg2;
- (void)updateWithAddMemberBtnAtIndexEx:(unsigned long long)arg1;
- (void)updateWithAddMemberBtnAtIndexEx:(unsigned long long)arg1 withColumn:(unsigned long long)arg2;
- (void)updateWithContactEx:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)updateWithContactEx:(id)arg1 atIndex:(unsigned long long)arg2 withColumn:(unsigned long long)arg3;
- (void)hiddenAllSubViews;
- (void)updateAtIndexEx:(unsigned long long)arg1 withColumn:(unsigned long long)arg2;
- (id)initWithContact:(id)arg1 atIndex:(unsigned int)arg2;
- (id)initWithContact:(id)arg1 atIndex:(unsigned int)arg2 withColumn:(unsigned long long)arg3;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithDeleteMemberBtnAtIndex:(unsigned int)arg1;
- (id)initWithDeleteMemberBtnAtIndex:(unsigned int)arg1 withColumn:(unsigned long long)arg2;
- (id)initWithAddMemberBtnAtIndex:(unsigned int)arg1;
- (id)initWithAddMemberBtnAtIndex:(unsigned int)arg1 withColumn:(unsigned long long)arg2;
- (id)initAtIndex:(unsigned int)arg1 withColumn:(unsigned long long)arg2;
- (void)handleLongPressEx:(id)arg1;
- (void)initSubView;
- (void)showTrackFlag;
- (void)showTalkFlag;
- (void)setTextColor:(id)arg1 shadowColor:(id)arg2;
- (void)initContactItemSubview;
- (void)initDeleteItemSubview;
- (void)initAddItemSubview;
- (void)updateItemViewForDelete:(_Bool)arg1;
- (void)updateContactItemViewForDelete;
- (void)updateDeleteItemViewForDelete;
- (void)updateAddItemViewForDelete;
- (void)updateContact;
- (void)OnClickDeleteBtn;
- (void)OnClickHeadImage;

@end
