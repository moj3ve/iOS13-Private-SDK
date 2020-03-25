//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKForegroundActiveArbiter-Protocol.h>

@class NSHashTable, NSLock;
@protocol OS_dispatch_source;

@interface PKUIForegroundActiveArbiter : NSObject <PKForegroundActiveArbiter>
{
    BOOL _foreground;
    BOOL _enteringForeground;
    BOOL _enteringForegroundExpired;
    BOOL _active;
    CDStruct_973bafd3 _foregroundActiveState;
    unsigned int _deactivationReasons;
    NSHashTable *_observers;
    NSHashTable *_deactivationObservers;
    NSUInteger _backgroundTaskIdentifier;
    NSObject<OS_dispatch_source> *_enteringForegroundTimeout;
    NSLock *_lock;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)unregisterDeactivationObserver:(id)arg1;
- (unsigned int)registerDeactivationObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (CDStruct_973bafd3)registerObserver:(id)arg1;
- (void)_didRemoveDeactivationReasonNotification:(id)arg1;
- (void)_willAddDeactivationReasonNotification:(id)arg1;
- (void)_updateForegroundActiveWithEnteringForegroundPolicy:(long long)arg1;
- (void)_beginEnteringForeground;
- (void)willTerminate;
- (void)willResignActive;
- (void)didBecomeActive;
- (void)didEnterBackground;
- (void)willEnterForeground;
- (void)dealloc;
- (id)_init;
- (id)init;

@end
