//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "EmoticonDescMgrExt.h"
#import "IAppDataExt.h"
#import "IContactMgrExt.h"
#import "IEnterpriseContactMgrExt.h"
#import "IHeadImageExt.h"
#import "IKFContactExt.h"
#import "IQQContactMgrExt.h"
#import "IStrangerContactMgrExt.h"
#import "MMIconActionSheetDelegate.h"
#import "WCActionSheetDelegate.h"

@class AppMessageBlockButton, CBaseContact, CMessageWrap, CTRichTextView, MMCPLabel, MMIconActionSheet, NSArray, NSString, UIActivityIndicatorView, UIButton, UIImageView, UIView;

@interface BaseMessageNodeView : MMUIView <IHeadImageExt, IContactMgrExt, IQQContactMgrExt, IStrangerContactMgrExt, WCActionSheetDelegate, IAppDataExt, MMIconActionSheetDelegate, EmoticonDescMgrExt, IKFContactExt, IEnterpriseContactMgrExt>
{
    CMessageWrap *m_oMessageWrap;
    CBaseContact *m_oContact;
    CBaseContact *m_oChatContact;
    id <messageNodeViewDelegate> m_delegate;
    unsigned int m_uiTouchBeginTime;
    _Bool m_bIsLongPressHandled;
    unsigned int m_eNodeType;
    UIView *m_oContentView;
    UIView *m_oHeadImageView;
    UIButton *m_oCommentButton;
    MMCPLabel *m_oChatRoomNameLabel;
    UIImageView *m_oBkgImageView;
    _Bool m_bHasLayout;
    double m_fContentViewLeftMargin;
    double m_fContentViewRightMargin;
    long long m_orientation;
    NSArray *m_arrMenuItems;
    UIButton *m_oSendFailButton;
    UIImageView *m_oSendOKView;
    UIActivityIndicatorView *m_oActivityIndicator;
    UIButton *m_oAppBottomButton;
    AppMessageBlockButton *m_oAppMessageBlockButton;
    _Bool m_donorIconHidden;
    _Bool m_bSendOKShowAnimate;
    double m_fHeightInSizeForFrame;
    _Bool m_bMenuVC;
    MMIconActionSheet *m_iconActionSheet;
    NSString *m_cpKeyForChatRoomMessage;
    _Bool m_isChatRoomMessageUnsafe;
    CTRichTextView *m_crashWarningLabel;
    NSString *m_cpKeyForChatRoomDisplayName;
    _Bool m_isChatRoomDisplayNameUnsafe;
}

+ (_Bool)canCreateMessageNodeViewInstanceWithMessageWrap:(id)arg1;
@property(readonly, nonatomic) UIView *m_oContentView; // @synthesize m_oContentView;
@property(nonatomic) long long m_orientation; // @synthesize m_orientation;
@property(nonatomic) unsigned int m_eNodeType; // @synthesize m_eNodeType;
@property(nonatomic) __weak id <messageNodeViewDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)onModifyEnterpriseContact:(id)arg1;
- (void)onKFContactHeadImgUpdate:(id)arg1;
- (void)onModifyKFContact:(id)arg1;
- (void)onGetEmoticonDesc:(id)arg1 forMd5:(id)arg2;
- (void)revokeMsg:(id)arg1;
- (id)getCurrentNodeAccessibilityDescription:(id)arg1;
- (id)getMoreMainInfomationAccessibilityDescription;
- (void)launch:(id)arg1;
- (id)m_msgWrap;
- (void)OnAppInfoChanged:(id)arg1;
- (void)OnAppWatermarkChanged:(id)arg1;
- (void)onMenuItemWillHide;
- (void)onEndTouch;
- (void)onTouchCancel;
- (void)onLongTouch;
- (void)onTouchUpInside;
- (void)onTouchDownRepeat;
- (void)onTouchDown;
- (void)layoutSubviewsInternal;
- (struct CGSize)sizeForFrame:(struct CGRect)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)isTouchInView:(id)arg1;
- (void)pressedEvents;
- (void)LongPressEvents;
- (void)resend:(id)arg1;
- (void)dealloc;
- (void)onModifyQQContact:(id)arg1;
- (void)onStrangerContactUpdated:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onHeadImageChange:(id)arg1;
- (void)onComment;
- (void)onHeadImageClicked:(id)arg1;
- (void)OnLongPressGesture:(id)arg1;
- (void)onClearResource;
- (void)onDisappear;
- (void)updateMessageContent:(id)arg1;
- (_Bool)isShowChatRoomDisplayName;
- (void)updateChatContact:(id)arg1;
- (void)layoutSubviews;
- (void)onOrientationChanged;
- (void)setOrientation:(long long)arg1;
- (void)reLayoutSubviews;
- (void)layoutForCrashWarning;
- (void)updateBkgImage:(_Bool)arg1;
- (void)calculateSize;
- (void)initCrashWarningLabel;
- (void)initHeadImageView;
- (void)updateChatRoomDisplayNameCrashProtectedState;
- (void)updateChatRoomMessageCrashProtectedState;
- (void)updateThumbImage;
- (void)updateNodeStatus:(id)arg1;
- (void)updateStatus:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 didDismissWithItem:(id)arg2;
- (void)setupWatchSourceBadgeIfNeed;
- (void)setDonorIconHidden:(_Bool)arg1;
- (void)showConnectorSheet:(id)arg1;
- (void)onRestore:(id)arg1;
- (void)onDebug:(id)arg1;
- (void)onBrandConnector:(id)arg1;
- (void)onDelete:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)MenuControllerWillHide:(id)arg1;
- (void)showOperationMenu:(id)arg1 NeedDelete:(_Bool)arg2;
- (void)onForward:(id)arg1;
- (void)showOperationMenuWithoutDelete:(id)arg1 CanBeForward:(_Bool)arg2;
- (void)showOperationMenu:(id)arg1;
- (_Bool)canShowFavMenu;
- (_Bool)canShowRevokeMenu;
- (_Bool)canShowMoreMenu;
- (_Bool)hasForwardInList:(id)arg1;
- (_Bool)isLocationMessage;
- (_Bool)shouldShowForwardBrandItem;
- (_Bool)isPortait;
- (void)calculateLeftRightMargin;
- (void)initChatRoomNameLabel;
- (void)initCommentButton;
- (void)showUIStatus;
- (void)hideUIStatus;
- (void)updateAppBottomButton;
- (void)clearAppBottomButton;
- (void)initAppBottomButton;
- (void)initAppMessageBlockButton;
- (void)clearActivityView;
- (void)initAcitivityView;
- (void)clearSendFailButton;
- (void)clearSendOKView;
- (void)initSendOKView;
- (struct CGPoint)getSendOKViewOrgin;
- (void)initSendFailButton;
- (id)initWithMessageWrap:(id)arg1 Contact:(id)arg2 ChatContact:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

