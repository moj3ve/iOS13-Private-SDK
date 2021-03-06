//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ChatKit/CKBrowserViewControllerSendDelegate-Protocol.h>
#import <ChatKit/CKCamPhysicalCaptureNotifierDelegate-Protocol.h>

@class CKCamPhysicalCaptureNotifier, CKConversation, IMBalloonPlugin, UIView;
@protocol CKBrowserViewControllerProtocol, CKFunCameraViewControllerDelegate;

@interface CKFunCameraViewController : UIViewController <CKBrowserViewControllerSendDelegate, CKCamPhysicalCaptureNotifierDelegate>
{
    id <CKFunCameraViewControllerDelegate> _delegate;
    IMBalloonPlugin *_balloonPlugin;
    UIView *_funCameraView;
    UIViewController<CKBrowserViewControllerProtocol> *_funCameraAppViewController;
    CKCamPhysicalCaptureNotifier *_physicalCaptureNotifier;
    CKConversation *_conversation;
}

@property(retain, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
@property(retain, nonatomic) CKCamPhysicalCaptureNotifier *physicalCaptureNotifier; // @synthesize physicalCaptureNotifier=_physicalCaptureNotifier;
@property(retain, nonatomic) UIViewController<CKBrowserViewControllerProtocol> *funCameraAppViewController; // @synthesize funCameraAppViewController=_funCameraAppViewController;
@property(retain, nonatomic) UIView *funCameraView; // @synthesize funCameraView=_funCameraView;
@property(retain, nonatomic) IMBalloonPlugin *balloonPlugin; // @synthesize balloonPlugin=_balloonPlugin;
@property(nonatomic) __weak id <CKFunCameraViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)physicalCaptureNotifierDidChangeState:(id)arg1;
- (void)_dismissAndPresentPhotosApp:(BOOL)arg1;
- (void)stageAssetArchive:(id)arg1 skipShelf:(BOOL)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)commitSticker:(id)arg1 withDragTarget:(id)arg2;
- (void)commitSticker:(id)arg1;
- (id)dragControllerTranscriptDelegate;
- (void)dismissToKeyboard:(BOOL)arg1;
- (void)requestPresentationStyleExpanded:(BOOL)arg1;
- (void)dismissAndPresentPhotosApp;
- (void)dismiss;
- (void)dismissAndReloadInputViews:(BOOL)arg1;
- (void)openURL:(id)arg1 applicationIdentifier:(id)arg2 pluginID:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)openURL:(id)arg1 pluginID:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)setLocalUserIsTyping:(BOOL)arg1;
- (void)startEditingPayload:(id)arg1 dismiss:(BOOL)arg2;
- (void)startEditingPayload:(id)arg1;
- (BOOL)commitPayload:(id)arg1 forPlugin:(id)arg2 allowAllCommits:(BOOL)arg3 error:(id )arg4;
- (void)commitPayload:(id)arg1;
- (void)_handleRemoteConnectionInterrupted:(id)arg1;
- (id)contentViewControllerForPlugin:(id)arg1;
- (id)configuredContentViewControllerForPlugin:(id)arg1;
- (id)traitCollection;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (BOOL)prefersStatusBarHidden;
- (id)initWithConversation:(id)arg1;

@end

