//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WFActionGroupingCache : NSObject
{
    NSMutableDictionary *_actionsByGroupingIdentifier;
}

@property(readonly, nonatomic) NSMutableDictionary *actionsByGroupingIdentifier; // @synthesize actionsByGroupingIdentifier=_actionsByGroupingIdentifier;
// - (void).cxx_destruct;
- (id)actionsForGroupingIdentifier:(id)arg1;
- (void)sortActionsForGroupingIdentifier:(id)arg1 withWorkflowActions:(id)arg2;
- (void)removeAction:(id)arg1;
- (void)addAction:(id)arg1 sortingWithWorkflowActions:(id)arg2;
- (id)init;

@end

