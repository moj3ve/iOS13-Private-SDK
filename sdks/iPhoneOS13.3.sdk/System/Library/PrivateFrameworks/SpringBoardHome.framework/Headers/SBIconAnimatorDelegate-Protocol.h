//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SBIconAnimator;

@protocol SBIconAnimatorDelegate <NSObject>
- (void)iconAnimatorWasInvalidated:(SBIconAnimator *)arg1;

@optional
- (BOOL)iconAnimator:(SBIconAnimator *)arg1 canAlterViewHierarchyDuringCleanupUsingBlock:(void (^)(void))arg2;
@end

