//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVInteractivePlaybackTransitioning-Protocol.h>
#import <SilexVideo/SVPlaybackTransitionCoordinator-Protocol.h>

@class NFStateMachine, NFStateMachineState, NSMutableArray;
@protocol SVPlaybackTransitionContext;

@interface SVPlaybackTransitionCoordinator : NSObject <SVInteractivePlaybackTransitioning, SVPlaybackTransitionCoordinator>
{
    NSMutableArray *_transitionAlongsideBlocks;
    NSMutableArray *_completionBlocks;
    id <SVPlaybackTransitionContext> _context;
    NFStateMachine *_stateMachine;
    NFStateMachineState *_transitioningState;
}

@property(readonly, nonatomic) NFStateMachineState *transitioningState; // @synthesize transitioningState=_transitioningState;
@property(readonly, nonatomic) NFStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) id <SVPlaybackTransitionContext> context; // @synthesize context=_context;
@property(readonly, nonatomic) NSMutableArray *completionBlocks; // @synthesize completionBlocks=_completionBlocks;
@property(readonly, nonatomic) NSMutableArray *transitionAlongsideBlocks; // @synthesize transitionAlongsideBlocks=_transitionAlongsideBlocks;
// - (void).cxx_destruct;
- (void)transitionAlongside:(id /* CDUnknownBlockType */)arg1 withCompletionBlock:(id /* CDUnknownBlockType */)arg2;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)updateInteractiveTransition:(double)arg1;
- (void)startInteractiveTransitionWithContext:(id)arg1;
- (id)init;

@end

