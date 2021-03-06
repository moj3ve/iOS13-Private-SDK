//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AWServiceManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    NSMutableSet *_serviceObservers;
}

+ (void)removeObserver:(id)arg1;
+ (void)addObserver:(id)arg1;
+ (id)invokeWithService:(id /* CDUnknownBlockType */)arg1;
+ (id)sharedManager;
// - (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)invokeWithService:(id /* CDUnknownBlockType */)arg1;
- (id)init;

@end

