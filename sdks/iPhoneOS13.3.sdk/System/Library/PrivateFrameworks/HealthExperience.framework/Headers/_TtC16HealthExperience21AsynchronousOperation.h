//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class MISSING_TYPE, NSString;

@interface _TtC16HealthExperience21AsynchronousOperation : NSOperation
{
    MISSING_TYPE *autoFinishesOnCancel;
    MISSING_TYPE *operationState;
    MISSING_TYPE *workLock;
    MISSING_TYPE *didBeginWork;
}

// - (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
- (void)main;
- (void)cancel;
- (void)start;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isCancelled;
- (BOOL)isAsynchronous;

@end

