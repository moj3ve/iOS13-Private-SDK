//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>


@class NSMutableArray, SKUIContextActionsConfiguration, SKUIContextActionsPresentationController, UIGestureRecognizer, UIInterfaceActionGroupView, UIStackView, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface SKUIContextActionsViewController : UIViewController <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, UIPopoverPresentationControllerDelegate, UIInterfaceActionHandlerInvocationDelegate, UIAdaptivePresentationControllerDelegate>
{
    BOOL _orbPresentation;
    BOOL _appliedSystemRecognizer;
    UIGestureRecognizer *_systemProvidedGestureRecognzier;
    SKUIContextActionsPresentationController *_transitionPresentationController;
    SKUIContextActionsConfiguration *_configuration;
    NSMutableArray *_constraints;
    UIInterfaceActionGroupView *_contextActionView;
    UIStackView *_stackView;
    UIVisualEffectView *_backgroundView;
    UIInterfaceActionGroupView *_scrollableActionGroupView;
    CGPoint _gestureRecognizerInitialLocation;
}

@property(nonatomic, getter=hasAppliedSystemRecognizer) BOOL appliedSystemRecognizer; // @synthesize appliedSystemRecognizer=_appliedSystemRecognizer;
@property(nonatomic) CGPoint gestureRecognizerInitialLocation; // @synthesize gestureRecognizerInitialLocation=_gestureRecognizerInitialLocation;
@property(retain, nonatomic) UIInterfaceActionGroupView *scrollableActionGroupView; // @synthesize scrollableActionGroupView=_scrollableActionGroupView;
@property(retain, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) UIInterfaceActionGroupView *contextActionView; // @synthesize contextActionView=_contextActionView;
@property(retain, nonatomic) NSMutableArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) SKUIContextActionsConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) SKUIContextActionsPresentationController *transitionPresentationController; // @synthesize transitionPresentationController=_transitionPresentationController;
@property(retain, nonatomic) UIGestureRecognizer *systemProvidedGestureRecognzier; // @synthesize systemProvidedGestureRecognzier=_systemProvidedGestureRecognzier;
@property(nonatomic, getter=isOrbPresentation) BOOL orbPresentation; // @synthesize orbPresentation=_orbPresentation;
// - (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)_transitionPresentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (void)interfaceAction:(id)arg1 invokeActionHandler:(id /* CDUnknownBlockType */)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_reloadViewsConfiguration;
- (void)_applySystemRecognizer;
- (void)systemProvidedGestureRecognzierTriggered:(id)arg1;
- (void)viewTapped:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

