//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelephonyPreferences/TPSControllerDelegate-Protocol.h>

@class NSOrderedSet, TPSTelephonyController;

@protocol TPSTelephonyControllerDelegate <TPSControllerDelegate>

@optional
- (void)telephonyController:(TPSTelephonyController *)arg1 didChangeSubscriptions:(NSOrderedSet *)arg2;
- (void)telephonyController:(TPSTelephonyController *)arg1 didChangeActiveSubscriptions:(NSOrderedSet *)arg2;
@end
