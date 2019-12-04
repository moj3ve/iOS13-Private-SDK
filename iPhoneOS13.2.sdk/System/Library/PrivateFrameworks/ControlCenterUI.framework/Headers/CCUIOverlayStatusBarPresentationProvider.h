//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ControlCenterUI/CCUIOverlayFlickGestureBehavior-Protocol.h>
#import <ControlCenterUI/CCUIOverlayPresentationProvider-Protocol.h>

@class NSString;
@protocol CCUIOverlayFlickGestureBehavior, CCUIOverlayMetricsProvider, CCUIOverlayViewProvider;

@interface CCUIOverlayStatusBarPresentationProvider : NSObject <CCUIOverlayFlickGestureBehavior, CCUIOverlayPresentationProvider>
{
    id <CCUIOverlayViewProvider> _viewProvider;
    id <CCUIOverlayMetricsProvider> _metricsProvider;
}

+ (id)_moduleAlphaCAAnimationParametersForTransitionState:(id)arg1;
+ (id)_moduleScaleCAAnimationParametersForTransitionState:(id)arg1;
+ (id)_moduleC2AnimationParametersForTransitionState:(id)arg1 layoutRect:(struct CCUILayoutRect)arg2;
+ (id)_reducedMotionStatusBarStateCAAnimationParameters;
+ (id)_expandedTrailingStatusBarAlphaCAAnimationParametersForTransitionState:(id)arg1;
+ (id)_expandedLeadingStatusBarAlphaCAAnimationParametersForTransitionState:(id)arg1;
+ (id)_compactTrailingStatusBarAlphaCAAnimationParametersForTransitionState:(id)arg1;
+ (id)_trailingStatusBarCAAnimationParametersForTransitionState:(id)arg1;
+ (id)_leadingStatusBarCAAnimationParametersForTransitionState:(id)arg1;
+ (id)_baseC2AnimationParametersForTransitionState:(id)arg1;
+ (id)_hiddenStatusBarFadeAnimationParameters;
@property(nonatomic) __weak id <CCUIOverlayMetricsProvider> metricsProvider; // @synthesize metricsProvider=_metricsProvider;
@property(nonatomic) __weak id <CCUIOverlayViewProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
- (double)_delayForTransitionState:(id)arg1 layoutRect:(struct CCUILayoutRect)arg2;
- (struct CGAffineTransform)_transformForTransitionState:(id)arg1 rubberBandingHeight:(double)arg2;
- (void)_addModuleAlphaAnimationsToBatch:(id)arg1 transitionState:(id)arg2;
- (struct CGAffineTransform)_moduleViewScaleTransformForTransitionState:(id)arg1 layoutRect:(struct CCUILayoutRect)arg2;
- (void)_addModuleScaleAnimationsToBatch:(id)arg1 transitionState:(id)arg2;
- (struct CGAffineTransform)_moduleViewTransformForTransitionState:(id)arg1 layoutRect:(struct CCUILayoutRect)arg2;
- (void)_addModuleTransformAnimationsToBatch:(id)arg1 transitionState:(id)arg2;
- (void)_addReducedMotionStatusBarStateAnimationToBatch:(id)arg1 transitionState:(id)arg2;
- (void)_addStatusBarAlphaAnimationToBatch:(id)arg1 transitionState:(id)arg2;
- (void)_addStatusBarStateAnimationToBatch:(id)arg1 transitionState:(id)arg2;
- (struct CGAffineTransform)_headerViewTransformForTransitionState:(id)arg1;
- (struct CGAffineTransform)_compactStatusBar:(id)arg1 transformForTransitionState:(id)arg2;
- (void)_addHeaderContentTransformAnimationToBatch:(id)arg1 transitionState:(id)arg2;
- (double)_leadingStatusBarAlphaForTransitionState:(id)arg1;
- (void)_addLeadingStatusBarAlphaAnimationToBatch:(id)arg1 transitionState:(id)arg2;
- (void)_addBackgroundViewWeightingAnimationToBatch:(id)arg1 transitionState:(id)arg2;
- (void)_addScrollViewContentOffsetAnimationToBatch:(id)arg1 transitionState:(id)arg2;
- (struct CGRect)_headerViewFrameForContentSize:(struct CGSize)arg1 withinBounds:(struct CGRect)arg2 contentInset:(struct UIEdgeInsets)arg3 contentEdgeInsets:(struct UIEdgeInsets)arg4 orientation:(long long)arg5;
- (struct UIEdgeInsets)_edgeInsetsForContentSize:(struct CGSize)arg1 withinBounds:(struct CGRect)arg2 contentEdgeInsets:(struct UIEdgeInsets)arg3 orientation:(long long)arg4;
- (struct CGRect)_presentedViewFrame;
@property(readonly, nonatomic) unsigned long long dismissalFlickAllowedDirections;
@property(readonly, nonatomic) double dismissalFlickMinimumVelocity;
@property(readonly, nonatomic) double dismissalFlickMaximumTime;
- (id)cleanupForDismissal;
- (id)prepareForPresentation;
- (id)secondaryAnimationBatchForTransitionState:(id)arg1 previousTransitionState:(id)arg2;
@property(readonly, copy, nonatomic) id <CCUIOverlayFlickGestureBehavior> flickGestureBehavior;
@property(readonly, nonatomic) unsigned long long headerMode;
- (_Bool)tapAllowsDismissalForLocation:(struct CGPoint)arg1;
- (id)animationBatchForTransitionState:(id)arg1 previousTransitionState:(id)arg2;
- (void)layoutViews;
- (unsigned long long)finalTransitionTypeForState:(id)arg1 gestureTranslation:(struct CGPoint)arg2 gestureVelocity:(struct CGPoint)arg3;
- (id)transitionStateForType:(unsigned long long)arg1 interactive:(_Bool)arg2 translation:(struct CGPoint)arg3;
- (_Bool)backdropViewShouldUseAlphaTransformer;
@property(readonly, nonatomic) _Bool allowHotPocketDuringTransition; // @dynamic allowHotPocketDuringTransition;
@property(readonly, nonatomic, getter=isZoomEnabled) _Bool zoomEnabled; // @dynamic zoomEnabled;
@property(readonly, nonatomic, getter=isPanDismissalAvailable) _Bool panDismissalAvailable; // @dynamic panDismissalAvailable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
