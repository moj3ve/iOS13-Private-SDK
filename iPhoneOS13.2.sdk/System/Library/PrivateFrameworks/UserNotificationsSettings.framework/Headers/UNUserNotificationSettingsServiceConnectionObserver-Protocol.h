//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSSet, UNNotificationSystemSettings, UNUserNotificationSettingsServiceConnection;

@protocol UNUserNotificationSettingsServiceConnectionObserver 

@optional
- (void)settingsServiceConnection:(UNUserNotificationSettingsServiceConnection *)arg1 didUpdateNotificationSystemSettings:(UNNotificationSystemSettings *)arg2;
- (void)settingsServiceConnection:(UNUserNotificationSettingsServiceConnection *)arg1 didUpdateNotificationSourcesWithIdentifiers:(NSSet *)arg2;
@end
