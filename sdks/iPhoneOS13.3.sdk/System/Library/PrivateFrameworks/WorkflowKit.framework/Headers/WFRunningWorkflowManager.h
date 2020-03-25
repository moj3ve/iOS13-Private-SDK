//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFApplicationStateObserver-Protocol.h>

@class NSArray, NSHashTable, NSMutableOrderedSet;

@interface WFRunningWorkflowManager : NSObject <WFApplicationStateObserver>
{
    id /* CDUnknownBlockType */ _demoResetBlock;
    NSMutableOrderedSet *_runningWorkflowControllerSet;
    NSHashTable *_workflowControllerAssertionTable;
}

+ (id)sharedManager;
@property(readonly, nonatomic) NSHashTable *workflowControllerAssertionTable; // @synthesize workflowControllerAssertionTable=_workflowControllerAssertionTable;
@property(readonly, nonatomic) NSMutableOrderedSet *runningWorkflowControllerSet; // @synthesize runningWorkflowControllerSet=_runningWorkflowControllerSet;
@property(copy, nonatomic) id /* CDUnknownBlockType */ demoResetBlock; // @synthesize demoResetBlock=_demoResetBlock;
// - (void).cxx_destruct;
- (void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2;
@property(readonly, nonatomic) NSArray *runningWorkflows;
@property(readonly, nonatomic) NSArray *runningWorkflowControllers;
- (void)updateAssertions;
- (void)updateRunningWorkflowCount;
- (void)workflowControllerDidStop:(id)arg1;
- (void)workflowControllerDidStart:(id)arg1;
- (void)dealloc;
- (id)init;

@end
