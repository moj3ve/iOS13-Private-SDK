//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UINavigationBarTransitionContext.h>

__attribute__((visibility("hidden")))
@interface _UINavigationBarTransitionContextPush : _UINavigationBarTransitionContext
{
    CGRect _endingNewTitleViewFrame;
    CGRect _endingNewBackButtonFrame;
    CGRect _endingBackIndicatorViewFrame;
    CGSize _titleTransitionDistance;
}

- (void)complete;
- (void)cancel;
- (void)_finishWithFinalLayout:(id)arg1 invalidLayout:(id)arg2;
- (void)animate;
- (void)_animateSearchBar;
- (void)_animateBackgroundView;
- (void)_animateLargeTitleView;
- (void)_animateContentView;
- (void)_animateScaleTransition;
- (void)prepare;
- (void)_prepareSearchBar;
- (void)_prepareBackgroundView;
- (void)_prepareLargeTitleView;
- (void)_prepareContentView;
- (void)_prepareScaleTransition;
- (int)transition;
- (id)viewUsingEaseOutCurve;

@end
