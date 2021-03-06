//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ACDPairedDeviceAccountCache : NSObject
{
    NSObject<OS_dispatch_queue> *_synchronizationQueue;
    BOOL _accountsIsValid;
    NSArray *_accounts;
    NSMutableArray *_completions;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)invalidate;
- (void)_didFetchAccounts:(id)arg1 error:(id)arg2;
- (void)accountsFromRemoteDeviceProxy:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)init;

@end

