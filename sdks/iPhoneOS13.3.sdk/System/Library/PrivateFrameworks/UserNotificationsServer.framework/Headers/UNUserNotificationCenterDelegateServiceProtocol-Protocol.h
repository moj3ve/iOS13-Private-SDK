//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, UNNotificationResponse, UNNotificationSettings;

@protocol UNUserNotificationCenterDelegateServiceProtocol <NSObject>
- (void)didOpenApplicationForResponse:(UNNotificationResponse *)arg1 forBundleIdentifier:(NSString *)arg2;
- (void)didChangeSettings:(UNNotificationSettings *)arg1 forBundleIdentifier:(NSString *)arg2;
- (void)didReceiveNotificationResponse:(UNNotificationResponse *)arg1 forBundleIdentifier:(NSString *)arg2 withCompletionHandler:(void (^)(BOOL))arg3;
@end
