//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBLayoutStateTransitionObserver-Protocol.h>

@class NSString, SBMainWorkspaceTransitionRequest, SBUIAnimationController;
@protocol SBSwitcherLiveContentOverlayCoordinatorDelegate;

@protocol SBSwitcherLiveContentOverlayCoordinating <SBLayoutStateTransitionObserver>
@property(nonatomic) __weak id <SBSwitcherLiveContentOverlayCoordinatorDelegate> delegate;
@property(nonatomic) long long containerOrientation;
@property(nonatomic, getter=areLiveContentOverlayUpdatesSuspended) _Bool liveContentOverlayUpdatesSuspended;
- (void)noteKeyboardFocusDidChangeToSceneID:(NSString *)arg1;
- (SBUIAnimationController *)animationControllerForTransitionRequest:(SBMainWorkspaceTransitionRequest *)arg1;
@end
