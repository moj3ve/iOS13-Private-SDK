//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIViewImplicitlyAnimating-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _UIViewPropertyAnimatorTrackingGroup : NSObject <UIViewImplicitlyAnimating>
{
    NSArray *_trackingAnimators;
}

@property(readonly, nonatomic) NSArray *trackingAnimators; // @synthesize trackingAnimators=_trackingAnimators;
- (void)finishAnimationAtPosition:(long long)arg1;
- (void)stopAnimation:(_Bool)arg1;
- (void)pauseAnimation;
- (void)startAnimationAfterDelay:(double)arg1;
- (void)startAnimation;
@property(nonatomic) double fractionComplete;
@property(nonatomic, getter=isReversed) _Bool reversed;
@property(readonly, nonatomic, getter=isRunning) _Bool running;
@property(readonly, nonatomic) long long state;
- (void)addCompletion:(id /* block */)arg1;
- (void)continueAnimationWithTimingParameters:(id)arg1 durationFactor:(double)arg2;
- (id)initWithAnimators:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
