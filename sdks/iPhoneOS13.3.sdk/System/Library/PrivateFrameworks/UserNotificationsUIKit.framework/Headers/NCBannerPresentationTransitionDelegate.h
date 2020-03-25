//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsUIKit/NCBannerPresentationAnimatorDelegate-Protocol.h>
#import <UserNotificationsUIKit/NCViewControllerTransitioningDelegate-Protocol.h>

@class UIGestureRecognizer, UIViewController;
@protocol NCBannerPresentationTransitioningDelegateObserver;

@interface NCBannerPresentationTransitionDelegate : NSObject <NCBannerPresentationAnimatorDelegate, NCViewControllerTransitioningDelegate>
{
    UIViewController *_presentedViewController;
    BOOL _transitioning;
    id <NCBannerPresentationTransitioningDelegateObserver> _transitioningDelegateObserver;
    UIGestureRecognizer *_activeGesture;
}

@property(retain, nonatomic) UIGestureRecognizer *activeGesture; // @synthesize activeGesture=_activeGesture;
@property(readonly, nonatomic, getter=isTransitioning) BOOL transitioning; // @synthesize transitioning=_transitioning;
@property(nonatomic) __weak id <NCBannerPresentationTransitioningDelegateObserver> transitioningDelegateObserver; // @synthesize transitioningDelegateObserver=_transitioningDelegateObserver;
// - (void).cxx_destruct;
- (void)transitionAnimator:(id)arg1 didCommitToTransitionWithCoordinator:(id)arg2;
- (void)bannerPresentationAnimator:(id)arg1 didFinishTransition:(BOOL)arg2;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)_animatorForPresentation:(BOOL)arg1;

@end
