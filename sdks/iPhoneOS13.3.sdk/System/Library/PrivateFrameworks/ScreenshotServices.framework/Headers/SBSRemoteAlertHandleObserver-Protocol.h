//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSError, SBSRemoteAlertHandle;

@protocol SBSRemoteAlertHandleObserver <NSObject>

@optional
- (void)remoteAlertHandle:(SBSRemoteAlertHandle *)arg1 didInvalidateWithError:(NSError *)arg2;
- (void)remoteAlertHandleDidDeactivate:(SBSRemoteAlertHandle *)arg1;
- (void)remoteAlertHandleDidActivate:(SBSRemoteAlertHandle *)arg1;
@end

