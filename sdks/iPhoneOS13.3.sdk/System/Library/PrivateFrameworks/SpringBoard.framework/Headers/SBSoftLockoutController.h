//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/CSCoverSheetViewControllerObserver-Protocol.h>
#import <SpringBoard/CSExternalLockProviding-Protocol.h>

@class NSString, SBLockScreenManager;
@protocol BSInvalidatable, SBSoftLockoutControllerDelegate;

@interface SBSoftLockoutController : NSObject <CSExternalLockProviding, CSCoverSheetViewControllerObserver>
{
    SBLockScreenManager *_lockScreenManager;
    NSUInteger _desiredBiometricLockoutState;
    id <BSInvalidatable> _passcodeRequiredAssertion;
    id <SBSoftLockoutControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SBSoftLockoutControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_clearPasscodeRequiredAssertion;
- (void)_createPasscodeRequiredAssertion;
- (void)coverSheetViewControllerDidDismissPasscodeLockView:(id)arg1;
@property(readonly, nonatomic) long long participantState;
@property(readonly, copy, nonatomic) NSString *coverSheetIdentifier;
- (BOOL)unlockFromSource:(int)arg1;
@property(readonly, nonatomic) BOOL showPasscode;
@property(readonly, nonatomic, getter=isLocked) BOOL locked;
- (void)reload;
- (void)dealloc;
- (id)initWithBiometricLockoutState:(NSUInteger)arg1 lockScreenManager:(id)arg2;
- (id)initWithBiometricLockoutState:(NSUInteger)arg1;

@end

