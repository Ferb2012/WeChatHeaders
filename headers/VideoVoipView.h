//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIWindow.h"

#import "AVVideoDeviceDelegate.h"
#import "IVOIPExt.h"
#import "IVOIPModeSwitchExt.h"
#import "IVOIPVideoDeviceDelegate.h"
#import "MMVoipMinimizeWindowExt.h"
#import "SmallCameraViewDelegate.h"
#import "VideoVoipNetStatusViewDelegate.h"
#import "VideoVoipTalkingViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class AVAudioPlayer, AVCaptureVideoPreviewLayer, CContact, CMessageWrap, MMHDHeadImageView, MMHeadImageView, NSString, NSTimer, UIAlertView, UIImageView, UILabel, UIView, VideoVoipNetStatusView, VideoVoipTalkingView, VoipMinimizeReportObject;

@interface VideoVoipView : MMUIWindow <WCActionSheetDelegate, MMVoipMinimizeWindowExt, VideoVoipNetStatusViewDelegate, IVOIPModeSwitchExt, IVOIPExt, AVVideoDeviceDelegate, SmallCameraViewDelegate, VideoVoipTalkingViewDelegate, IVOIPVideoDeviceDelegate>
{
    UIAlertView *_alertView;
    int _status;
    CContact *_contact;
    _Bool _isEndCall;
    UIView *_containerView;
    UIImageView *_backgroundView;
    CMessageWrap *_msgWrap;
    _Bool _isConnectOK;
    AVAudioPlayer *_player;
    _Bool _isAcceptVoice;
    _Bool _canUpdateStatusMachine;
    unsigned int _startTalkingTime;
    int m_viewInitMode;
    UILabel *m_mainStatusLabel;
    _Bool m_forceToVoice;
    AVCaptureVideoPreviewLayer *m_previewLayer;
    _Bool m_hasStopBellSound;
    _Bool m_hasInvokeToAudioAnimation;
    _Bool m_hasCalculateBlurView;
    _Bool m_isMinimizeMode;
    _Bool _m_shouldChange;
    _Bool _m_isLandSpaceMode;
    MMHDHeadImageView *m_headImageView;
    UILabel *m_usrnameLabel;
    UIView *m_blurView;
    UIImageView *m_profileBackgroundView;
    MMHeadImageView *m_blurHeadImageView;
    VideoVoipTalkingView *m_talkingView;
    VoipMinimizeReportObject *m_reportObject;
    VideoVoipNetStatusView *m_netStatusView;
    NSTimer *m_netStatusUpdateTimer;
    long long m_netStatusShowCount;
    double _m_oldOriginY;
}

+ (void)updateLabel:(id)arg1 WithWidth:(double)arg2 WithHeight:(double)arg3 AndLastLineWidth:(double)arg4 AndUpDownMargin:(double)arg5;
@property(nonatomic) _Bool m_isLandSpaceMode; // @synthesize m_isLandSpaceMode=_m_isLandSpaceMode;
@property(nonatomic) double m_oldOriginY; // @synthesize m_oldOriginY=_m_oldOriginY;
@property(nonatomic) _Bool m_shouldChange; // @synthesize m_shouldChange=_m_shouldChange;
@property(nonatomic) long long m_netStatusShowCount; // @synthesize m_netStatusShowCount;
@property(retain, nonatomic) NSTimer *m_netStatusUpdateTimer; // @synthesize m_netStatusUpdateTimer;
@property(retain, nonatomic) VideoVoipNetStatusView *m_netStatusView; // @synthesize m_netStatusView;
@property(retain, nonatomic) VoipMinimizeReportObject *m_reportObject; // @synthesize m_reportObject;
@property(nonatomic) _Bool m_isMinimizeMode; // @synthesize m_isMinimizeMode;
@property(retain, nonatomic) VideoVoipTalkingView *m_talkingView; // @synthesize m_talkingView;
@property(retain, nonatomic) MMHeadImageView *m_blurHeadImageView; // @synthesize m_blurHeadImageView;
@property(nonatomic) _Bool m_hasCalculateBlurView; // @synthesize m_hasCalculateBlurView;
@property(retain, nonatomic) UIImageView *m_profileBackgroundView; // @synthesize m_profileBackgroundView;
@property(retain, nonatomic) UIView *m_blurView; // @synthesize m_blurView;
@property(retain, nonatomic) UILabel *m_usrnameLabel; // @synthesize m_usrnameLabel;
@property(retain, nonatomic) MMHDHeadImageView *m_headImageView; // @synthesize m_headImageView;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *m_previewLayer; // @synthesize m_previewLayer;
@property(retain, nonatomic) UILabel *m_mainStatusLabel; // @synthesize m_mainStatusLabel;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (void)clearNetworkSpeedState;
- (void)onVoipNetStatusViewShowEnd;
- (void)onVoipNetStatusViewShowStart;
- (void)checkCurrentNetworkSpeed;
- (void)initNetStatusView;
- (id)getContact;
- (void)calculateBlurView;
- (void)switchToAudioModeAnimation;
- (_Bool)isInitVideoMode;
- (_Bool)isVideoMode;
- (void)setMainStatusString:(id)arg1;
- (void)onVoipChangeToMinimizeDisplay;
- (void)onVoipChangeToFullScreenDisplay;
- (void)clearWindowAnimation;
- (_Bool)hasClickChangeToAudioMode;
- (void)OnTalkingViewSwitchToSmall;
- (_Bool)isInitWithVideoMode;
- (void)TalkingViewEndCall;
- (void)OnTalkingViewHangUp;
- (void)forceEndCall;
- (void)endCallAfterDelay:(double)arg1;
- (void)updateNetTypeStatus;
- (void)OnVideoModeChangeToVoiceMode;
- (void)OnOneWayLocalEarModeForBadNetwork;
- (void)OnOneWayRemoteEarModeForBadNetwork;
- (void)OnRemoteEarMode;
- (void)OnLocalEarMode;
- (void)OnRemoteEarModeFor2G;
- (void)OnLocalEarModeFor2G;
- (void)switchToTalkingView;
- (void)OnTalkingViewLoad:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)onConfirm;
- (void)stopPlaySound;
- (void)playEndingSound;
- (void)playSound:(id)arg1 OfType:(id)arg2 numberOfLoops:(long long)arg3;
- (_Bool)isCaller;
- (void)onVideoSessionStartComplete;
- (void)disAppearWithAnimation;
- (void)appearWithAnimation;
- (void)stopDisAppearWithAnimation;
- (void)dealloc;
- (_Bool)shouldOpenCameraFirst;
- (void)preSetAudioCategory;
- (id)initWithFrame:(struct CGRect)arg1 andContact:(id)arg2 isEarMode:(_Bool)arg3 andInitViewMode:(int)arg4;
- (void)initTalkingView;
- (void)initView;
- (void)initTipsView;
- (void)onClickMinimizeButton;
- (void)initProfileContainerView;
- (void)initLogoView;
- (void)initBackgroundView;
- (void)updateStatusLabel;
- (void)formVOIPMessageWhenCallFromMyself:(_Bool)arg1;
- (void)formVOIPSysMsgView;
- (_Bool)accessibilityViewIsModal;
- (_Bool)shouldSpecialAdapter;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)DidEnterForeground;
- (void)DidEnterBackground;
- (void)onVoipWindowDisappear;
- (void)onVoipWindowDidAppear;
- (float)ipad4iOS8_3WindowOffset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
