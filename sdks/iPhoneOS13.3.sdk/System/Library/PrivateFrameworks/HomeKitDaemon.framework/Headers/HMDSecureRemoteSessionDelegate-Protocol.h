//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HMDSecureRemoteSession, HMFMessage, NSError;

@protocol HMDSecureRemoteSessionDelegate <NSObject>
- (void)secureRemoteSession:(HMDSecureRemoteSession *)arg1 receivedRequestToSendMessage:(HMFMessage *)arg2;

@optional
- (void)secureRemoteSession:(HMDSecureRemoteSession *)arg1 didCloseWithError:(NSError *)arg2;
@end

