//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ControlCenterUI/CCUIModularControlCenterViewController.h>

#import <ControlCenterUI/CCUIOverlayMetricsProvider-Protocol.h>
#import <ControlCenterUI/CCUIOverlayViewProvider-Protocol.h>
#import <ControlCenterUI/CCUIPPTSignpostListener-Protocol.h>
#import <ControlCenterUI/CCUIScrollViewDelegate-Protocol.h>
#import <ControlCenterUI/CCUIStatusBarDelegate-Protocol.h>
#import <ControlCenterUI/CCUIStatusLabelViewControllerDelegate-Protocol.h>

@class CCUIAnimationRunner, CCUIFlickGestureRecognizer, CCUIHeaderPocketView, CCUIModuleCollectionView, CCUIOverlayTransitionState, CCUIScrollView, CCUIStatusBarStyleSnapshot, CCUIStatusLabelViewController, FBSDisplayLayoutMonitor, MTMaterialView, NSHashTable, NSUUID, UIPanGestureRecognizer, UIScrollView, UIStatusBar, UIStatusBar_Modern, UITapGestureRecognizer, UIView;
@protocol CCUIHostStatusBarStyleProvider, CCUIOverlayPresentationProvider;

@interface CCUIModularControlCenterOverlayViewController : CCUIModularControlCenterViewController <CCUIPPTSignpostListener, UIGestureRecognizerDelegate, CCUIScrollViewDelegate, CCUIStatusLabelViewControllerDelegate, CCUIOverlayViewProvider, CCUIOverlayMetricsProvider, CCUIStatusBarDelegate>
{
    id <CCUIOverlayPresentationProvider> _presentationProvider;
    CCUIAnimationRunner *_primaryAnimationRunner;
    CCUIAnimationRunner *_secondaryAnimationRunner;
    MTMaterialView *_backgroundView;
    CCUIHeaderPocketView *_headerPocketView;
    CCUIScrollView *_scrollView;
    UIView *_containerView;
    UIStatusBar_Modern *_compactLeadingStatusBar;
    BOOL _presentationPanGestureActive;
    UIPanGestureRecognizer *_headerPocketViewDismissalPanGesture;
    UITapGestureRecognizer *_headerPocketViewDismissalTapGesture;
    CCUIFlickGestureRecognizer *_collectionViewDismissalFlickGesture;
    UIPanGestureRecognizer *_collectionViewDismissalPanGesture;
    UITapGestureRecognizer *_collectionViewDismissalTapGesture;
    UIPanGestureRecognizer *_collectionViewScrollPanGesture;
    NSHashTable *_blockingGestureRecognizers;
    NSUUID *_currentTransitionUUID;
    CCUIOverlayTransitionState *_previousTransitionState;
    CCUIStatusBarStyleSnapshot *_hostStatusBarStyleSnapshot;
    FBSDisplayLayoutMonitor *_layoutMonitor;
    BOOL _reachabilityActive;
    NSUInteger _presentationState;
    NSUInteger _transitionState;
    id <CCUIHostStatusBarStyleProvider> _hostStatusBarStyleProvider;
}

+ (id)_presentationProviderForDevice;
+ (id)_controlCenterDismissEventStream;
+ (id)_controlCenterBringupEventStream;
+ (void)_executeBlocksForSignpost:(NSUInteger)arg1;
+ (void)_executeAndCleanupBlocksForAllSignposts;
+ (void)_addBlockForSignpost:(NSUInteger)arg1 block:(id /* CDUnknownBlockType */)arg2;
+ (id)_blocksBySignpost;
@property(nonatomic, getter=isReachabilityActive) BOOL reachabilityActive; // @synthesize reachabilityActive=_reachabilityActive;
@property(nonatomic) __weak id <CCUIHostStatusBarStyleProvider> hostStatusBarStyleProvider; // @synthesize hostStatusBarStyleProvider=_hostStatusBarStyleProvider;
@property(readonly, nonatomic) NSUInteger transitionState; // @synthesize transitionState=_transitionState;
@property(nonatomic) NSUInteger presentationState; // @synthesize presentationState=_presentationState;
// - (void).cxx_destruct;
- (BOOL)_gestureRecognizerIsActive:(id)arg1;
- (void)_setupPanGestureFailureRequirements;
- (void)_updateHotPocket:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_updateHotPocketAnimated:(BOOL)arg1;
- (void)_updateChevronStateForTransitionState:(id)arg1;
- (BOOL)_scrollViewCanAcceptDownwardsPan;
- (BOOL)_scrollViewIsScrollable;
- (BOOL)_scrollPanGestureRecognizerCanBeginForGestureVelocity:(CGPoint)arg1;
- (BOOL)_scrollPanGestureRecognizerShouldBegin:(id)arg1;
- (void)_dismissalPanGestureRecognizerFailed:(id)arg1;
- (void)_dismissalPanGestureRecognizerCancelled:(id)arg1;
- (void)_dismissalPanGestureRecognizerEnded:(id)arg1;
- (void)_dismissalPanGestureRecognizerChanged:(id)arg1;
- (void)_dismissalPanGestureRecognizerBegan:(id)arg1;
- (void)_handleDismissalPanGestureRecognizer:(id)arg1;
- (BOOL)_dismissalPanGestureRecognizerShouldBegin:(id)arg1;
- (void)_cancelDismissalPanGestures;
- (void)_handleDismissalFlickGestureRecognizer:(id)arg1;
- (BOOL)_dismissalFlickGestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)_dismissalFlickGestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)_dismissalFlickGestureRecognizerShouldBegin:(id)arg1;
- (void)_handleDismissalTapGestureRecognizer:(id)arg1;
- (BOOL)_dismissalTapGestureRecognizerShouldBegin:(id)arg1;
- (void)cancelPresentationWithLocation:(CGPoint)arg1 translation:(CGPoint)arg2 velocity:(CGPoint)arg3;
- (void)endPresentationWithLocation:(CGPoint)arg1 translation:(CGPoint)arg2 velocity:(CGPoint)arg3;
- (void)updatePresentationWithLocation:(CGPoint)arg1 translation:(CGPoint)arg2 velocity:(CGPoint)arg3;
- (void)beginPresentationWithLocation:(CGPoint)arg1 translation:(CGPoint)arg2 velocity:(CGPoint)arg3;
- (void)dismissControlCenterForContentModuleContext:(id)arg1;
- (CGRect)compactAvoidanceFrameForStatusBar:(id)arg1;
- (id)compactTrailingStyleRequestForStatusBar:(id)arg1;
@property(readonly, nonatomic) double overlayReachabilityHeight;
@property(readonly, copy, nonatomic) CCUIStatusBarStyleSnapshot *overlayStatusBarStyle;
@property(readonly, nonatomic) long long overlayInterfaceOrientation;
- (UIEdgeInsets)overlayAdditionalEdgeInsets;
@property(readonly, nonatomic) CGRect overlayContainerFrame;
@property(readonly, nonatomic) CGRect overlayBackgroundFrame;
- (void)setOverlayStatusBarHidden:(BOOL)arg1;
@property(readonly, nonatomic) UIStatusBar *overlayLeadingStatusBar;
@property(readonly, nonatomic) CCUIHeaderPocketView *overlayHeaderView;
@property(readonly, nonatomic) CCUIStatusLabelViewController *overlayStatusLabelViewController;
@property(readonly, nonatomic) CCUIModuleCollectionView *overlayModuleCollectionView;
@property(readonly, nonatomic) UIView *overlayContainerView;
@property(readonly, nonatomic) UIScrollView *overlayScrollView;
@property(readonly, nonatomic) MTMaterialView *overlayBackgroundView;
- (void)moduleInstancesChangedForModuleInstanceManager:(id)arg1;
- (void)statusLabelViewControllerDidFinishStatusUpdates:(id)arg1;
- (void)statusLabelViewControllerWillBeginStatusUpdates:(id)arg1;
- (void)_willDismissView;
- (void)_willPresentView;
- (void)moduleCollectionViewController:(id)arg1 willDismissViewController:(id)arg2;
- (void)moduleCollectionViewController:(id)arg1 willPresentViewController:(id)arg2;
- (void)moduleCollectionViewController:(id)arg1 didAddModuleContainerViewController:(id)arg2;
- (void)moduleCollectionViewController:(id)arg1 willCloseExpandedModule:(id)arg2;
- (void)moduleCollectionViewController:(id)arg1 willOpenExpandedModule:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)scrollView:(id)arg1 gestureRecognizerShouldBegin:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)_canShowWhileLocked;
- (NSUInteger)__supportedInterfaceOrientations;
- (NSUInteger)supportedInterfaceOrientations;
- (NSUInteger)preferredScreenEdgesDeferringSystemGestures;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)_moduleCollectionViewContainerView;
- (id)_statusLabelViewContainerView;
- (void)_reparentAndBecomeActive;
- (void)_updatePresentationForTransitionState:(id)arg1 withCompletionHander:(id /* CDUnknownBlockType */)arg2;
- (void)_updatePresentationForTransitionType:(NSUInteger)arg1 translation:(CGPoint)arg2 interactive:(BOOL)arg3;
- (void)_endDismissalWithUUID:(id)arg1 animated:(BOOL)arg2 success:(BOOL)arg3;
- (id)_beginDismissalAnimated:(BOOL)arg1 interactive:(BOOL)arg2;
- (void)dismissAnimated:(BOOL)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_endPresentationWithUUID:(id)arg1 success:(BOOL)arg2;
- (id)_beginPresentationAnimated:(BOOL)arg1 interactive:(BOOL)arg2;
- (void)presentAnimated:(BOOL)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)_initWithSystemAgent:(id)arg1 presentationProvider:(id)arg2;
- (id)initWithSystemAgent:(id)arg1;
- (BOOL)runTest:(id)arg1 options:(id)arg2 delegate:(id)arg3;
- (void)didReceiveSignpost:(NSUInteger)arg1;
- (void)runTest:(id)arg1 subtests:(id)arg2 eventStream:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;

@end

