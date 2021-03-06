//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNScheduler-Protocol.h>

@class NSString;
@protocol CNScheduler;

@interface CNTimeProfilingSchedulerDecorator : NSObject <CNScheduler>
{
    id <CNScheduler> _scheduler;
    NSUInteger _blockCounter;
}

+ (id)os_log;
@property(readonly, nonatomic) NSUInteger blockCounter; // @synthesize blockCounter=_blockCounter;
@property(readonly, nonatomic) id <CNScheduler> scheduler; // @synthesize scheduler=_scheduler;
// - (void).cxx_destruct;
@property(readonly) double timestamp;
- (id)afterDelay:(double)arg1 performBlock:(id /* CDUnknownBlockType */)arg2 qualityOfService:(NSUInteger)arg3;
- (id)afterDelay:(double)arg1 performBlock:(id /* CDUnknownBlockType */)arg2;
- (id)performCancelableBlock:(id /* CDUnknownBlockType */)arg1 qualityOfService:(NSUInteger)arg2;
- (id)performCancelableBlock:(id /* CDUnknownBlockType */)arg1;
- (void)performBlock:(id /* CDUnknownBlockType */)arg1 qualityOfService:(NSUInteger)arg2;
- (void)performBlock:(id /* CDUnknownBlockType */)arg1;
- (NSUInteger)nextBlockNumber;
@property(readonly, copy) NSString *description;
- (id)initWithScheduler:(id)arg1;

@end

