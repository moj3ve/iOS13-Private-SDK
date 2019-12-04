//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, UNSLocationMonitor, UNSNotificationRepository, UNSNotificationScheduleRepository, UNSPendingNotificationRepository;
@protocol OS_dispatch_queue;

@interface UNSNotificationSchedulingService : NSObject
{
    UNSNotificationRepository *_notificationRepository;
    UNSPendingNotificationRepository *_pendingNotificationRepository;
    UNSNotificationScheduleRepository *_notificationScheduleRepository;
    UNSLocationMonitor *_locationMonitor;
    NSMutableDictionary *_clients;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)_queue_clientForBundleIdentifier:(id)arg1;
- (void)_queue_removeClientForBundleIdentifier:(id)arg1;
- (id)_queue_addClientForBundleIdentifier:(id)arg1;
- (void)_queue_timeDidChangeSignificantly;
- (void)_queue_localeDidChange;
- (void)_queue_applicationStateDidRestore;
- (void)_queue_notificationSourcesDidUninstall:(id)arg1;
- (void)_queue_applicationsDidDenyNotificationSettings:(id)arg1;
- (void)_queue_applicationsDidAuthorizeNotificationSettings:(id)arg1;
- (id)_queue_undeliveredNotificationRequestsForBundleIdentifier:(id)arg1;
- (id)_queue_pendingNotificationRecordsForBundleIdentifier:(id)arg1;
- (void)_queue_removeAllPendingNotificationRecordsForBundleIdentifier:(id)arg1;
- (void)_queue_removeSimilarPendingNotificationRecords:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_removePendingNotificationRecordsWithIdentifiers:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_setPendingNotificationRecords:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_addPendingNotificationRecords:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)timeDidChangeSignificantly;
- (void)localeDidChange;
- (void)applicationStateDidRestore;
- (void)notificationSourcesDidUninstall:(id)arg1;
- (void)applicationsDidDenyNotificationSettings:(id)arg1;
- (void)applicationsDidAuthorizeNotificationSettings:(id)arg1;
- (id)undeliveredNotificationRecordsForBundleIdentifier:(id)arg1;
- (id)pendingNotificationRecordsForBundleIdentifier:(id)arg1;
- (void)removeAllPendingNotificationRecordsForBundleIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)removeSimilarPendingNotificationRecords:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)removePendingNotificationRecordsWithIdentifiers:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setPendingNotificationRecords:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)addPendingNotificationRecords:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)initWithNotificationRepository:(id)arg1 pendingNotificationRepository:(id)arg2 notificationScheduleRepository:(id)arg3 locationMonitor:(id)arg4;

@end
