//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenTimeCore/STUserNotificationContext.h>

@class NSString;

@interface STDeviceDowntimeUserNotificationContext : STUserNotificationContext
{
    NSString *_localizedUserNotificationBodyKey;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *localizedUserNotificationBodyKey; // @synthesize localizedUserNotificationBodyKey=_localizedUserNotificationBodyKey;
- (id)notificationBundleIdentifier;
- (id)destinations;
- (void)customizeNotificationContent:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)setEndDateComponents:(id)arg1 referenceDate:(id)arg2 locale:(id)arg3;
- (void)setEndDateComponents:(id)arg1 referenceDate:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
