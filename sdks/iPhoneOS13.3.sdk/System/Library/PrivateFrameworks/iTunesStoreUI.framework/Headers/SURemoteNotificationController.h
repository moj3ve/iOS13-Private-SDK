//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SURemoteNotificationController : NSObject
{
}

+ (id)sharedInstance;
- (void)handleNotificationDictionary:(id)arg1;
- (void)handleRegistrationSuccessWithToken:(id)arg1;
- (void)handleRegistrationFailureWithError:(id)arg1;
@property(readonly, nonatomic) NSUInteger enabledNotificationTypes;
- (id)init;

@end

