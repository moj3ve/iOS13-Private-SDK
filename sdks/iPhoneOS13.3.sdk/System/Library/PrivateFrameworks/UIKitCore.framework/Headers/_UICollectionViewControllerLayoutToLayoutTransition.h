//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class UICollectionViewLayout, UIPercentDrivenInteractiveTransition;

@interface _UICollectionViewControllerLayoutToLayoutTransition : NSObject <UIViewControllerAnimatedTransitioning>
{
    BOOL _crossFadeNavigationBar;
    BOOL _crossFadeBottomBars;
    BOOL _interactionAborted;
    UICollectionViewLayout *_toLayout;
    UIPercentDrivenInteractiveTransition *_interactionController;
    long long _operation;
}

+ (id)transitionForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
@property(nonatomic) long long operation; // @synthesize operation=_operation;
@property(nonatomic) BOOL interactionAborted; // @synthesize interactionAborted=_interactionAborted;
@property(nonatomic) UIPercentDrivenInteractiveTransition *interactionController; // @synthesize interactionController=_interactionController;
@property(nonatomic) BOOL crossFadeBottomBars; // @synthesize crossFadeBottomBars=_crossFadeBottomBars;
@property(nonatomic) BOOL crossFadeNavigationBar; // @synthesize crossFadeNavigationBar=_crossFadeNavigationBar;
@property(retain, nonatomic) UICollectionViewLayout *toLayout; // @synthesize toLayout=_toLayout;
// - (void).cxx_destruct;
- (BOOL)_shouldCrossFadeBottomBars;
- (BOOL)_shouldCrossFadeNavigationBar;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(BOOL)arg1;

@end

