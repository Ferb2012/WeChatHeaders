//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IVOIPExt.h"
#import "MMConfigMgrExt.h"
#import "MMKernelExt.h"
#import "MMService.h"
#import "VoipAlertViewDelegate.h"

@class CContact, MMVoipMinimizeWindow, MMVoipStatusBarWindow, MMVoipToastWindow, NSString, VideoVoipCallerView, VideoVoipReceiverView, VoipAlertView;

@interface VoipUIManager : MMService <MMKernelExt, MMService, IVOIPExt, VoipAlertViewDelegate, MMConfigMgrExt>
{
    CContact *m_tempContact;
    VoipAlertView *m_voipAlertView;
    VideoVoipCallerView *m_videoVoipCallerViewController;
    VideoVoipReceiverView *m_videoVoipReceiverViewController;
    MMVoipStatusBarWindow *m_voipStatusBarWindow;
    MMVoipMinimizeWindow *m_voipMinimizeWindow;
    MMVoipToastWindow *m_voipToastWindow;
}

+ (_Bool)canForceStartVoiceWithContact:(id)arg1;
+ (_Bool)canStartVoiceWithContact:(id)arg1;
+ (_Bool)canStartVideoWithContact:(id)arg1;
@property(retain, nonatomic) MMVoipToastWindow *m_voipToastWindow; // @synthesize m_voipToastWindow;
@property(retain, nonatomic) MMVoipMinimizeWindow *m_voipMinimizeWindow; // @synthesize m_voipMinimizeWindow;
@property(retain, nonatomic) MMVoipStatusBarWindow *m_voipStatusBarWindow; // @synthesize m_voipStatusBarWindow;
@property(retain, nonatomic) VideoVoipReceiverView *m_videoVoipReceiverViewController; // @synthesize m_videoVoipReceiverViewController;
@property(retain, nonatomic) VideoVoipCallerView *m_videoVoipCallerViewController; // @synthesize m_videoVoipCallerViewController;
@property(retain, nonatomic) VoipAlertView *m_voipAlertView; // @synthesize m_voipAlertView;
@property(retain, nonatomic) CContact *m_tempContact; // @synthesize m_tempContact;
- (void).cxx_destruct;
- (void)onPreQuit;
- (void)onMMDynamicConfigUpdated;
- (void)OnTellMeViewIsExist:(_Bool *)arg1;
- (void)SendInvite:(int)arg1;
- (void)Cancel;
- (void)switchToSpeakPhoneMode:(_Bool)arg1;
- (void)clearCurrentString;
- (struct CGRect)minimizeWindowFrame;
- (_Bool)isUsingEarDevice;
- (void)changeToMinimizeToast;
- (void)changeToAudioToast;
- (void)changeToVideoToast;
- (void)addScrollingString:(id)arg1 withDisplayTime:(double)arg2;
- (_Bool)isMinimizeMode;
- (void)showCannotStartVoipTwice;
- (id)getConflictWording;
- (void)showConflictWording;
- (void)recoverVoipAudioMode;
- (_Bool)isVoipSpeakerMode;
- (_Bool)isVideoVoipWorking;
- (_Bool)isVoipWorking;
- (_Bool)showVideoEntranceInMainFrame;
- (void)closeVoiceVoipViewByMsgWrap:(id)arg1;
- (void)closeVideoVoipViewByMsgWrap:(id)arg1;
- (void)closeVideoVoipView;
- (void)openVoipViewWithContact:(id)arg1 isCaller:(_Bool)arg2 andMsgWrap:(id)arg3;
- (void)hangupForNotSupportVoiceVoip;
- (_Bool)isTheSameContactWithCurrentVoip:(id)arg1;
- (void)openVideoVoipViewWithContact:(id)arg1 isCaller:(_Bool)arg2 andMsgWrap:(id)arg3 isEarMode:(_Bool)arg4;
- (_Bool)canStartVoip;
- (_Bool)canOpenVoipByTimeLogic:(id)arg1;
- (void)onServiceReloadData;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

