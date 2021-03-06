//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSError, SFAutoUnlockDevice;

@protocol SFUnlockClientProtocol <NSObject>
- (void)failedUnlockWithError:(NSError *)arg1;
- (void)completedUnlockWithDevice:(SFAutoUnlockDevice *)arg1;
- (void)beganAttemptWithDevice:(SFAutoUnlockDevice *)arg1;
- (void)failedToEnableDevice:(SFAutoUnlockDevice *)arg1 error:(NSError *)arg2;
- (void)enabledDevice:(SFAutoUnlockDevice *)arg1;
- (void)keyDeviceLocked:(SFAutoUnlockDevice *)arg1;
@end

