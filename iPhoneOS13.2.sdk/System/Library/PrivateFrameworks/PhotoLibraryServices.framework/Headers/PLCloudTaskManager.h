//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface PLCloudTaskManager : NSObject
{
    NSMutableDictionary *_pendingTaskForTaskIdentifier;
    NSMutableDictionary *_highPriorityResourceToTaskIdentifierMap;
    NSMutableDictionary *_lowPriorityResourceToTaskIdentifierMap;
    NSObject<OS_dispatch_queue> *_isolationQueue;
}

- (id)_identifierForResource:(id)arg1;
- (void)_removeTaskIdentifiersForResource:(id)arg1 highPriority:(_Bool)arg2;
- (void)_setTaskIdentifiers:(id)arg1 forResource:(id)arg2 highPriority:(_Bool)arg3;
- (id)_taskIdentifiersForResource:(id)arg1 highPriority:(_Bool)arg2;
- (id)_taskForResource:(id)arg1 highPriority:(_Bool)arg2;
- (void)reset;
- (void)cancelTaskWithTaskIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)getPendingTaskForTaskIdentifier:(id)arg1;
- (void)reportCompletionForResourceTransferTask:(id)arg1 withError:(id)arg2;
- (void)reportProgress:(float)arg1 forResourceTransferTask:(id)arg2;
- (void)setPendingTaskWithTransferTask:(id)arg1 withTaskIdentifier:(id)arg2;
- (_Bool)addProgressBlock:(id /* block */)arg1 completionHandler:(id /* block */)arg2 forResource:(id)arg3 highPriority:(_Bool)arg4 withTaskIdentifier:(id)arg5;
- (id)init;

@end
