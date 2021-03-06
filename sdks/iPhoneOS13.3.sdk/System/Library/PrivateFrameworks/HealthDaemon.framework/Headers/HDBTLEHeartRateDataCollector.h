//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDataCollector-Protocol.h>

@class HDDataCollectorConfiguration, HDProfile, HKHealthService, NSArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface HDBTLEHeartRateDataCollector : NSObject <HDDataCollector>
{
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    long long _state;
    HDDataCollectorConfiguration *_configuration;
    NSArray *_oneShotServices;
    NSMutableDictionary *_pendingSessions;
    HKHealthService *_connectedService;
    NSUInteger _connectedSessionIdentifier;
}

// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)canResumeCollectionFromLastSensorDatum;
- (Class)sensorDatumClassForAggregator:(id)arg1;
- (id)identifierForDataAggregator:(id)arg1;
- (id)sourceForDataAggregator:(id)arg1;
- (void)dataAggregator:(id)arg1 wantsCollectionWithConfiguration:(id)arg2;
- (void)beginCollectionForDataAggregator:(id)arg1 lastPersistedSensorDatum:(id)arg2;
- (void)_queue_handleCharacteristic:(id)arg1 device:(id)arg2;
- (void)_cancelSessionsWithIdentifiers:(id)arg1;
- (id)_heartRatePairingsWithError:(id )arg1;
- (void)_queue_stateDidChange;
- (void)_queue_stopHeartRateCollection;
- (void)_queue_startHeartRateCollection;
- (BOOL)_queue_startHeartRateServices:(id)arg1;
- (void)startOneShotCollectionForService:(id)arg1;
- (void)_queue_service:(id)arg1 sessionDidDisconnect:(NSUInteger)arg2;
- (void)_queue_service:(id)arg1 sessionDidConnect:(NSUInteger)arg2;
- (void)_queue_service:(id)arg1 session:(NSUInteger)arg2 statusDidChange:(long long)arg3 finished:(BOOL)arg4 error:(id)arg5;
- (void)_queue_updateForCurrentConfiguration;
- (void)_queue_configurationChanged:(id)arg1;
- (id)_queue_currentState;
- (id)aggregator;
- (id)initWithProfile:(id)arg1;

@end

