//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/SBFTouchPassThroughViewController.h>

#import <SpringBoard/SBViewControllerTransitionContextDelegate-Protocol.h>

@class NSMutableArray, NSMutableSet, NSSet, NSString, SBHUDController;
@protocol _SBHUDHostViewControllerDelegate;

@interface _SBHUDHostViewController : SBFTouchPassThroughViewController <SBViewControllerTransitionContextDelegate>
{
    NSMutableArray *_activeTransitionContexts;
    NSMutableSet *_presentedHUDs;
    NSMutableSet *_presentingHUDs;
    NSMutableSet *_presentingHUDsTransitionContexts;
    NSMutableSet *_dismissingHUDsTransitionContexts;
    SBHUDController *_HUDController;
    id <_SBHUDHostViewControllerDelegate> _delegate;
}

@property(readonly, nonatomic) NSSet *presentingHUDs; // @synthesize presentingHUDs=_presentingHUDs;
@property(readonly, nonatomic) NSSet *presentedHUDs; // @synthesize presentedHUDs=_presentedHUDs;
@property(nonatomic) __weak id <_SBHUDHostViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak SBHUDController *HUDController; // @synthesize HUDController=_HUDController;
// - (void).cxx_destruct;
- (void)_executeViewControllerTransitionContext:(id)arg1;
- (void)_executeDismissHUD:(id)arg1 animated:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_executePresentNewHUD:(id)arg1 animated:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (id)_buildTransitionContextToPresentHUD:(id)arg1 dismissHUD:(id)arg2 animated:(BOOL)arg3 delegate:(id)arg4 containerView:(id)arg5 completion:(id /* CDUnknownBlockType */)arg6;
- (id)_transitionContextMatchingHUD:(id)arg1 withinContainer:(id)arg2;
- (void)transitionDidFinish:(id)arg1;
- (void)dismissHUDs:(BOOL)arg1;
- (void)reverseHUDPresentation:(id)arg1;
- (void)reverseHUDDismissal:(id)arg1;
- (void)dismissHUD:(id)arg1 animated:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)presentHUD:(id)arg1 animated:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (id)knownHUDForIdentifier:(id)arg1;
- (BOOL)isHUDBeingPresented:(id)arg1;
- (BOOL)isHUDBeingDismissed:(id)arg1;
@property(readonly, nonatomic) NSUInteger numberOfActiveTransitions;
@property(readonly, copy) NSString *description;
- (BOOL)_canShowWhileLocked;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (NSUInteger)supportedInterfaceOrientations;
- (id)initWithHUDController:(id)arg1;

@end
