//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, NSNumber, UIView, _UIPageCurlState;

@interface _UIPageCurl : NSObject
{
    long long _spineLocation;
    CGRect _contentRect;
    UIView *_contentView;
    _UIPageCurlState *_manualPageCurlState;
    NSMutableArray *_pendingStateQueue;
    NSMutableArray *_activeStateQueue;
    NSMutableSet *_completedStates;
    double _delayBetweenSuccessiveAnimations;
    double _pageDiagonalAngle;
    double _pageDiagonalLength;
    double _manualPageCurlMaxDAngle;
}

@property(nonatomic, setter=_setManualPageCurlMaxDAngle:) double _manualPageCurlMaxDAngle; // @synthesize _manualPageCurlMaxDAngle;
@property(readonly, nonatomic) long long _spineLocation; // @synthesize _spineLocation;
// - (void).cxx_destruct;
- (void)_pageCurlAnimationDidStop:(id)arg1 withState:(id)arg2;
- (void)_abortManualCurlAtLocation:(CGPoint)arg1 withSuggestedVelocity:(double)arg2;
- (void)_completeManualCurlAtLocation:(CGPoint)arg1 withSuggestedVelocity:(double)arg2;
- (void)_endManualCurlAtLocation:(CGPoint)arg1 withSuggestedVelocity:(double)arg2 shouldComplete:(BOOL)arg3;
- (double)_durationForManualCurlEndAnimationWithSuggestedVelocity:(double)arg1 shouldComplete:(BOOL)arg2;
- (void)_updateManualCurlToLocation:(CGPoint)arg1;
- (void)_beginCurlWithState:(id)arg1 previousState:(id)arg2;
- (void)_cancelAllActiveTransitionsAndAbandonCallbacks:(BOOL)arg1;
- (void)_cancelTransitionWithState:(id)arg1 invalidatingPageCurl:(BOOL)arg2;
- (void)_forceCleanupState:(id)arg1 finished:(BOOL)arg2 completed:(BOOL)arg3;
- (void)_cleanupState:(id)arg1;
- (void)_enqueueCurlOfType:(long long)arg1 fromLocation:(CGPoint)arg2 inDirection:(long long)arg3 withView:(id)arg4 revealingView:(id)arg5 completion:(id /* CDUnknownBlockType */)arg6 finally:(id /* CDUnknownBlockType */)arg7;
- (BOOL)_isPreviousCurlCompatibleWithCurlOfType:(long long)arg1 inDirection:(long long)arg2;
- (long long)_validatedPageCurlTypeForPageCurlType:(long long)arg1 inDirection:(long long)arg2;
- (CGPoint)_referenceLocationForInitialLocation:(CGPoint)arg1 direction:(long long)arg2;
- (void)_updateCurlFromState:(id)arg1 withTime:(double)arg2 radius:(double)arg3 angle:(double)arg4 addingAnimations:(id)arg5;
- (id)_animationKeyPaths;
- (void)_updatedInputsFromState:(id)arg1 forLocation:(CGPoint)arg2 time:(double )arg3 radius:(double )arg4 angle:(double )arg5;
- (double)_distanceToTravelWithCurrentSpineLocation;
- (double)_inputTimeForProgress:(double)arg1 distanceToTravel:(double)arg2 radius:(double )arg3 minRadius:(double)arg4 angle:(double)arg5 dAngle:(double)arg6 touchLocation:(CGPoint)arg7 state:(id)arg8;
- (void)_ensureCurlFilterOnLayer:(id)arg1;
- (void)_fromValue:(double )arg1 toValue:(double )arg2 fromState:(id)arg3 forAnimationWithKeyPath:(id)arg4;
- (BOOL)_populateFromValue:(double )arg1 toValue:(double )arg2 fromState:(id)arg3 forAnimationWithKeyPath:(id)arg4;
- (double)_baseAngleOffsetForState:(id)arg1;
- (id)_newAnimationForState:(id)arg1 withKeyPath:(id)arg2 duration:(double)arg3 fromValue:(id)arg4;
- (id)_newCurlFilter;
- (CGRect)_pageViewFrame:(BOOL)arg1;
- (void)_setContentRect:(CGRect)arg1;
@property(readonly, nonatomic) NSNumber *_wrappedManualPageCurlDirection;
- (BOOL)_areAnimationsInFlightOrPending;
@property(readonly, nonatomic, getter=_isManualPageCurlInProgressAndUncommitted) BOOL _manualPageCurlInProgressAndUncommitted;
- (void)dealloc;
- (id)initWithSpineLocation:(long long)arg1 andContentRect:(CGRect)arg2 inContentView:(id)arg3;

@end

