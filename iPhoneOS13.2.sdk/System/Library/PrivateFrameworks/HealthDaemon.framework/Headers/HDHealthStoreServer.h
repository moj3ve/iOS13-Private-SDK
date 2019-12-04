//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDConceptIndexManagerObserver-Protocol.h>
#import <HealthDaemon/HDDeepBreathingSessionServerDelegate-Protocol.h>
#import <HealthDaemon/HDDiagnosticObject-Protocol.h>
#import <HealthDaemon/HDHealthStoreServerInterface-Protocol.h>
#import <HealthDaemon/HDSampleSaving-Protocol.h>
#import <HealthDaemon/HDTaskServerDelegate-Protocol.h>
#import <HealthDaemon/HDUnitPreferencesManagerObserver-Protocol.h>

@class HDAuthorizationServer, HDCloudSyncServer, HDDaemon, HDHealthServicesServer, HDHealthStoreClient, HDMedicalIDServer, HDNanoSyncServer, HDNotificationServer, HDProfile, HDProfileServer, HDQueryControlServer, HDStaticSyncServer, HDUtilityServer, HDWorkoutServer, HKHealthStoreConfiguration, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HDHealthStoreServer : NSObject <HDDiagnosticObject, HDUnitPreferencesManagerObserver, HDDeepBreathingSessionServerDelegate, HDSampleSaving, HDConceptIndexManagerObserver, HDTaskServerDelegate, HDHealthStoreServerInterface>
{
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSMutableDictionary *_deepBreathingSessionServersByUUID;
    NSObject<OS_dispatch_source> *_clientTransactionTimer;
    NSString *_clientSourceVersion;
    NSMutableDictionary *_taskServerEndpointsByUUID;
    NSMutableDictionary *_taskServerObserversByUUID;
    HDDaemon *_daemon;
    HDProfile *_profile;
    HKHealthStoreConfiguration *_configuration;
    HDHealthStoreClient *_client;
    NSObject<OS_dispatch_queue> *_queue;
    HDAuthorizationServer *_authorizationServer;
    NSMutableSet *_subservers;
    HDCloudSyncServer *_cloudSyncServer;
    HDHealthServicesServer *_healthServicesServer;
    HDMedicalIDServer *_medicalIDServer;
    HDNanoSyncServer *_nanoSyncServer;
    HDNotificationServer *_notificationServer;
    HDProfileServer *_profileServer;
    HDQueryControlServer *_queryControlServer;
    HDStaticSyncServer *_staticSyncServer;
    HDUtilityServer *_utilityServer;
    HDWorkoutServer *_workoutServer;
}

@property(retain, nonatomic) HDWorkoutServer *workoutServer; // @synthesize workoutServer=_workoutServer;
@property(retain, nonatomic) HDUtilityServer *utilityServer; // @synthesize utilityServer=_utilityServer;
@property(retain, nonatomic) HDStaticSyncServer *staticSyncServer; // @synthesize staticSyncServer=_staticSyncServer;
@property(retain, nonatomic) HDQueryControlServer *queryControlServer; // @synthesize queryControlServer=_queryControlServer;
@property(retain, nonatomic) HDProfileServer *profileServer; // @synthesize profileServer=_profileServer;
@property(retain, nonatomic) HDNotificationServer *notificationServer; // @synthesize notificationServer=_notificationServer;
@property(retain, nonatomic) HDNanoSyncServer *nanoSyncServer; // @synthesize nanoSyncServer=_nanoSyncServer;
@property(retain, nonatomic) HDMedicalIDServer *medicalIDServer; // @synthesize medicalIDServer=_medicalIDServer;
@property(retain, nonatomic) HDHealthServicesServer *healthServicesServer; // @synthesize healthServicesServer=_healthServicesServer;
@property(retain, nonatomic) HDCloudSyncServer *cloudSyncServer; // @synthesize cloudSyncServer=_cloudSyncServer;
@property(retain, nonatomic) NSMutableSet *subservers; // @synthesize subservers=_subservers;
@property(readonly, nonatomic) HDAuthorizationServer *authorizationServer; // @synthesize authorizationServer=_authorizationServer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) HDHealthStoreClient *client; // @synthesize client=_client;
@property(readonly, copy, nonatomic) HKHealthStoreConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) __weak HDDaemon *daemon; // @synthesize daemon=_daemon;
- (void)remote_getIsFeatureSetAvailable:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)_getHealthRecordsPlugin;
- (void)remote_containerAppExtensionEntitlementsWithCompletion:(id /* block */)arg1;
- (void)remote_badgeHealthAppForEmergencyContactsConsolidationWithCompletion:(id /* block */)arg1;
- (void)remote_setDaemonPreferenceValue:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_fetchDaemonPreferenceForKey:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_splitTotalCalories:(double)arg1 timeInterval:(double)arg2 withCompletion:(id /* block */)arg3;
- (void)conceptIndexManagerDidChangeExecutionState:(unsigned long long)arg1;
- (void)conceptIndexManagerDidBecomeQuiescent:(id)arg1 samplesProcessedCount:(long long)arg2;
- (void)unitPreferencesManagerDidUpdateUnitPreferences:(id)arg1;
- (void)remote_fetchUnitPreferencesForTypes:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)remote_setPreferredUnit:(id)arg1 forType:(id)arg2 completion:(id /* block */)arg3;
- (void)_queue_cancelActiveClientTransaction;
- (void)_cancelActiveClientTransaction;
- (void)_queue_holdActiveClientTransactionWithCompletion:(id /* block */)arg1;
- (void)_holdActiveClientTransactionWithCompletion:(id /* block */)arg1;
- (void)_queue_serverActivityChanged;
- (void)_serverActivityChanged;
- (_Bool)_queue_isServerActive;
- (void)remote_clientResumedWithCompletion:(id /* block */)arg1;
- (void)remote_clientWillSuspendWithCompletion:(id /* block */)arg1;
- (void)remote_performMigrationWithCompletion:(id /* block */)arg1;
- (void)remote_obliterateHealthDataWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)remote_getHealthDirectorySizeInBytesWithCompletion:(id /* block */)arg1;
- (id)diagnosticDescription;
- (void)remote_setServerURL:(id)arg1 forAssetType:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_fetchServerURLForAssetType:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_getHealthLiteValueForKey:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_setHealthLiteValue:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_setCharacteristic:(id)arg1 forDataType:(id)arg2 handler:(id /* block */)arg3;
- (void)remote_fetchCharacteristicWithDataType:(id)arg1 handler:(id /* block */)arg2;
- (void)remote_deleteObjectsWithUUIDs:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)remote_deleteClientSourceWithCompletion:(id /* block */)arg1;
- (void)remote_deleteSourceWithBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_deleteAllSamplesWithTypes:(id)arg1 sourceBundleIdentifier:(id)arg2 options:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)remote_fetchDevicesMatchingProperty:(id)arg1 values:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_updateOrderedSources:(id)arg1 forObjectType:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_orderedSourcesForObjectType:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_allSourcesWithCompletion:(id /* block */)arg1;
- (void)remote_addSourceWithBundleIdentifier:(id)arg1 name:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_hasSourceWithBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_hasSampleWithBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_invalidateActivityAlertSuppressionForIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_suppressActivityAlertsForIdentifier:(id)arg1 suppressionReason:(long long)arg2 timeoutUntilDate:(id)arg3 completion:(id /* block */)arg4;
- (void)remote_closeTransactionWithDataType:(id)arg1 anchor:(id)arg2 ackTime:(id)arg3 completion:(id /* block */)arg4;
- (void)remote_setBackgroundDeliveryFrequency:(long long)arg1 forDataType:(id)arg2 handler:(id /* block */)arg3;
- (void)deepBreathingServerDidDeactivate:(id)arg1;
- (void)_queue_deactivateDeepBreathingSessionServerWithUUID:(id)arg1;
- (void)_remote_attachDeepBreathingSessionServerWithClient:(id)arg1 sessionConfiguration:(id)arg2 handler:(id /* block */)arg3;
- (void)_remote_associateSampleUUIDs:(id)arg1 withSampleUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_deleteDataObjectsOfType:(id)arg1 matchingFilter:(id)arg2 options:(unsigned long long)arg3 handler:(id /* block */)arg4;
- (void)remote_deleteDataObjects:(id)arg1 options:(unsigned long long)arg2 handler:(id /* block */)arg3;
- (id /* block */)_permissionBlockForRestrictedSourceEntities:(id)arg1;
- (_Bool)_insertedObjects:(id)arg1 containsQuantitySampleWithType:(id)arg2;
- (id)_queue_objectsByProvenanceForInsertion:(id)arg1 sourceEntity:(id)arg2 sourceVersionOverride:(id)arg3 error:(id *)arg4;
- (_Bool)_queue_insertObjects:(id)arg1 sourceEntity:(id)arg2 sourceVersionOverride:(id)arg3 shouldJournal:(_Bool)arg4 error:(id *)arg5;
- (void)_saveDataObjects:(id)arg1 sourceEntity:(id)arg2 sourceVersion:(id)arg3 handler:(id /* block */)arg4;
- (id)_objectsToInsertWithObjects:(id)arg1 error:(id *)arg2;
- (void)remote_saveDataObjects:(id)arg1 transactionIdentifier:(id)arg2 final:(_Bool)arg3 handler:(id /* block */)arg4;
- (void)_saveValidatedDataObjects:(id)arg1 transactionIdentifier:(id)arg2 final:(_Bool)arg3 handler:(id /* block */)arg4;
- (void)remote_saveDataObjects:(id)arg1 handler:(id /* block */)arg2;
- (id /* block */)objectAuthorizationPromptHandler;
- (id /* block */)_authorizationPromptHandler;
- (void)_openAppForAuthorizationForSession:(id)arg1 completion:(id /* block */)arg2;
- (void)_performIfAuthorizedToDeleteObjects:(id)arg1 usingBlock:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (void)_performIfAuthorizedToSaveObjects:(id)arg1 usingBlock:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (void)_performIfAuthorizedToReadTypes:(id)arg1 usingBlock:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (id)_clientRemoteObjectProxy;
- (void)remote_resetObjectAuthorizationStatusForBundleIdentifier:(id)arg1 objectType:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_resetObjectAuthorizationStatusForObjects:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_setObjectAuthorizationStatuses:(id)arg1 forBundleIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_endAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 error:(id)arg2;
- (void)remote_beginAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (void)remote_resetAuthorizationStatusForBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_setRequestedAuthorizationForBundleIdentifier:(id)arg1 shareTypes:(id)arg2 readTypes:(id)arg3 prompt:(_Bool)arg4 completion:(id /* block */)arg5;
- (void)remote_setAuthorizationStatuses:(id)arg1 authorizationModes:(id)arg2 forBundleIdentifier:(id)arg3 options:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)remote_allObjectAuthorizationRecordsForSampleWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_retrieveAllAuthorizationRecordsForDocumentType:(id)arg1 bundleIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_allSourcesRequestingAuthorizationForTypes:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_allAuthorizationRecordsForType:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_allAuthorizationRecordsForBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_handleAuthorizationForExtensionWithCompletion:(id /* block */)arg1;
- (void)remote_requestAuthorizationToShareTypes:(id)arg1 readTypes:(id)arg2 shouldPrompt:(_Bool)arg3 completion:(id /* block */)arg4;
- (void)remote_getRequestStatusForAuthorizationToShareTypes:(id)arg1 readTypes:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_authorizationStatusForType:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_fetchDisplayNameWithCompletion:(id /* block */)arg1;
- (void)remote_fetchPluginServiceEndpointWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)saveSamples:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)performIfAuthorizedToDeleteObjectTypes:(id)arg1 usingBlock:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (void)performIfAuthorizedToSaveObjectTypes:(id)arg1 usingBlock:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (void)removeTaskServerObserver:(id)arg1;
- (void)removeObserver:(id)arg1 forTaskServerUUID:(id)arg2;
- (void)addObserver:(id)arg1 forTaskServerUUID:(id)arg2;
- (id)sampleSavingDelegate;
- (id)taskServerWithUUID:(id)arg1;
- (void)taskServerDidInvalidate:(id)arg1;
- (void)taskServerDidFailToInitializeForUUID:(id)arg1;
- (void)taskServerDidFinishInitialization:(id)arg1;
- (void)remote_createTaskServerEndpointForIdentifier:(id)arg1 pluginURL:(id)arg2 taskUUID:(id)arg3 configuration:(id)arg4 completion:(id /* block */)arg5;
- (void)remote_proxyForQueryControlServerWithCompletion:(id /* block */)arg1;
- (void)remote_proxyForProfileServerWithCompletion:(id /* block */)arg1;
- (void)remote_proxyForWorkoutServerWithCompletion:(id /* block */)arg1;
- (void)remote_proxyForUtilityServerWithCompletion:(id /* block */)arg1;
- (void)remote_proxyForStaticSyncServerWithCompletion:(id /* block */)arg1;
- (void)remote_proxyForCloudSyncServerWithCompletion:(id /* block */)arg1;
- (void)remote_proxyForNotificationServerWithCompletion:(id /* block */)arg1;
- (void)remote_proxyForNanoSyncServerWithCompletion:(id /* block */)arg1;
- (void)remote_proxyForMedicalIDServerWithCompletion:(id /* block */)arg1;
- (void)remote_proxyForHealthServicesServerWithCompletion:(id /* block */)arg1;
- (void)_fetchSubserverWithRequiredEntitlement:(id)arg1 subserverHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)clientSourceWithError:(id *)arg1;
- (void)_requirePrivateHealthKitEntitlementUsingBlock:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)_requireEntitlement:(id)arg1 usingBlock:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (id)_clientSourceVersion;
- (_Bool)_clientHasPrivateHealthKitEntitlementWithError:(id *)arg1;
- (_Bool)_clientHasUtilityEntitlementWithError:(id *)arg1;
@property(readonly, copy, nonatomic) NSString *clientDebuggingIdentifier;
- (void)dealloc;
- (void)invalidate;
- (void)start;
- (id)initWithClient:(id)arg1 profile:(id)arg2 configuration:(id)arg3 connectionQueue:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
