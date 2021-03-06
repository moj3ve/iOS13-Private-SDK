//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface CARAutomaticDNDStatus : NSObject
{
    NSUInteger _cachedAutomaticDNDActiveState;
    id /* CDUnknownBlockType */ _statusChangeObserver;
    id /* CDUnknownBlockType */ _exitConfirmationChangeObserver;
    NSXPCConnection *_connection;
}

+ (id)automaticDNDQueue;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(copy, nonatomic) id /* CDUnknownBlockType */ exitConfirmationChangeObserver; // @synthesize exitConfirmationChangeObserver=_exitConfirmationChangeObserver;
@property(copy, nonatomic) id /* CDUnknownBlockType */ statusChangeObserver; // @synthesize statusChangeObserver=_statusChangeObserver;
@property(readonly, nonatomic) NSUInteger cachedAutomaticDNDActiveState; // @synthesize cachedAutomaticDNDActiveState=_cachedAutomaticDNDActiveState;
// - (void).cxx_destruct;
- (void)_detachObservers;
- (void)_notifyExitConfirmationActive:(BOOL)arg1;
- (void)_fetchStatusForObserver;
- (void)_performCARPreferencesBlock:(id /* CDUnknownBlockType */)arg1 forReading:(BOOL)arg2;
- (id)disableTimerTimestamp;
- (void)setDisableTimerTimestamp:(id)arg1;
- (id)firstBuddyPresentationFirstMoment;
- (void)setFirstBuddyPresentationFirstMoment:(id)arg1;
- (void)setMostRecentTriggerMethodChange:(double)arg1;
- (double)mostRecentTriggerMethodChange;
- (BOOL)shouldActivateWithCarPlay;
- (void)setActivateWithCarPlay:(BOOL)arg1;
- (BOOL)hasAdjustedTriggerMethod;
- (void)setHasAdjustedTriggerMethod:(BOOL)arg1;
- (BOOL)hasOptedOutOfAutomaticDND;
- (void)setOptedOutOfAutomaticDND:(BOOL)arg1;
- (BOOL)isAutomaticDNDInternalShowUserAlertsEnabledPreference;
- (void)setAutomaticDNDInternalShowUserAlertsEnabledPreference:(BOOL)arg1;
- (BOOL)isAutomaticDNDInternalShowGeofencingAlertsEnabledPreference;
- (void)setAutomaticDNDInternalShowGeofencingAlertsEnabledPreference:(BOOL)arg1;
- (NSUInteger)automaticDNDTriggeringMethod;
- (void)setAutomaticDNDTriggeringMethod:(NSUInteger)arg1;
- (BOOL)hasStartedFirstRidePreference;
- (void)setStartedFirstRidePreference:(BOOL)arg1;
- (BOOL)hasCompletedFirstRidePreference;
- (void)setCompletedFirstRidePreference:(BOOL)arg1;
- (BOOL)isAutomaticDNDInternalForceOverrideEnabledPreference;
- (void)setAutomaticDNDInternalForceOverrideEnabledPreference:(BOOL)arg1;
- (BOOL)isAutomaticDNDInternalExitConfirmationOverrideEnabledPreference;
- (void)setAutomaticDNDInternalExitConfirmationOverrideEnabledPreference:(BOOL)arg1;
- (void)disableDNDUntilEndOfDriveWithReply:(id /* CDUnknownBlockType */)arg1;
- (void)disableDNDUntilEndOfDriveWithContext:(id)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (void)setAutomaticDNDTriggerPreference:(NSUInteger)arg1 withReply:(id /* CDUnknownBlockType */)arg2;
- (void)fetchAutomaticDNDTriggerPreferenceWithReply:(id /* CDUnknownBlockType */)arg1;
- (id)automaticDNDInternalAutoReplyWhitelist;
- (void)setAutomaticDNDInternalAutoReplyWhitelist:(id)arg1;
- (BOOL)shouldEnforceInternalWhitelist;
- (BOOL)platformSupportsUrgentMessages;
- (BOOL)platformSupportsSendingAutoReplies;
- (void)outputOfDiagnosticUtilityWithReply:(id /* CDUnknownBlockType */)arg1;
- (void)setAutoReplyMessage:(id)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (void)autoReplyMessageWithReply:(id /* CDUnknownBlockType */)arg1;
- (void)setAllowedAutoReplyAudience:(NSUInteger)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (void)allowedAutoReplyAudience:(id /* CDUnknownBlockType */)arg1;
- (void)fetchAutomaticDNDExitConfirmationWithReply:(id /* CDUnknownBlockType */)arg1;
- (void)setAutomaticDNDActive:(BOOL)arg1 withReply:(id /* CDUnknownBlockType */)arg2;
- (void)_resetUserDNDSettingsWithReply:(id /* CDUnknownBlockType */)arg1;
- (void)_completeDNDBuddyWithOption:(NSUInteger)arg1 withReply:(id /* CDUnknownBlockType */)arg2;
- (void)_xpcFetchWithServiceBlock:(id /* CDUnknownBlockType */)arg1 errorHandler:(id /* CDUnknownBlockType */)arg2;
- (void)fetchAutomaticDNDAssertionWithReply:(id /* CDUnknownBlockType */)arg1;
- (void)dealloc;
- (void)_setupConnection;
- (id)init;

@end

