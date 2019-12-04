//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/WiFiAwareSubscriberDelegate-Protocol.h>

@class NSArray, NSString, WiFiAwareSubscriber;
@protocol OS_dispatch_queue;

@interface CUNANSubscriber : NSObject <WiFiAwareSubscriberDelegate>
{
    id /* block */ _activateCompletion;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    struct _opaque_pthread_mutex_t _mutex;
    struct LogCategory *_ucat;
    struct NSMutableDictionary *_wfaEndpoints;
    WiFiAwareSubscriber *_wfaSubscriber;
    unsigned int _changeFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_label;
    NSString *_serviceType;
    id /* block */ _endpointFoundHandler;
    id /* block */ _endpointLostHandler;
    id /* block */ _endpointChangedHandler;
    id /* block */ _interruptionHandler;
    id /* block */ _invalidationHandler;
}

@property(copy, nonatomic) id /* block */ invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) id /* block */ interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(copy, nonatomic) id /* block */ endpointChangedHandler; // @synthesize endpointChangedHandler=_endpointChangedHandler;
@property(copy, nonatomic) id /* block */ endpointLostHandler; // @synthesize endpointLostHandler=_endpointLostHandler;
@property(copy, nonatomic) id /* block */ endpointFoundHandler; // @synthesize endpointFoundHandler=_endpointFoundHandler;
@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) unsigned int changeFlags; // @synthesize changeFlags=_changeFlags;
- (void)subscriber:(id)arg1 receivedMessage:(id)arg2 fromPublishID:(unsigned char)arg3 address:(id)arg4;
- (void)_subscriber:(id)arg1 lostDiscoveryResultForPublishID:(unsigned char)arg2 address:(id)arg3;
- (void)subscriber:(id)arg1 lostDiscoveryResultForPublishID:(unsigned char)arg2 address:(id)arg3;
- (void)_subscriber:(id)arg1 receivedDiscoveyResult:(id)arg2;
- (void)subscriber:(id)arg1 receivedDiscoveyResult:(id)arg2;
- (void)subscriber:(id)arg1 terminatedWithReason:(long long)arg2;
- (void)subscriber:(id)arg1 failedToStartWithError:(long long)arg2;
- (void)subscriberStarted:(id)arg1;
- (void)_lostAllEndpoints;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)activateWithCompletion:(id /* block */)arg1;
@property(readonly, copy) NSArray *discoveredEndpoints;
- (id)descriptionWithLevel:(int)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
