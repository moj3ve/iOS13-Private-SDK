//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class FBSDisplayLayout, FBSDisplayLayoutMonitor, FBSDisplayLayoutTransitionContext;

@protocol FBSDisplayLayoutObserver <NSObject>

@optional
- (void)layoutMonitor:(FBSDisplayLayoutMonitor *)arg1 didUpdateDisplayLayout:(FBSDisplayLayout *)arg2 withContext:(FBSDisplayLayoutTransitionContext *)arg3;
- (void)layoutMonitor:(FBSDisplayLayoutMonitor *)arg1 didUpdateDisplayLayout:(FBSDisplayLayout *)arg2;
@end
