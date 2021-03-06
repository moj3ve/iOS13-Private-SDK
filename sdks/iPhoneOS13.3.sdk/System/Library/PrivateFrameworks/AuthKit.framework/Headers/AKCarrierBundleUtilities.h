//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CoreTelephonyClient;
@protocol OS_dispatch_queue;

@interface AKCarrierBundleUtilities : NSObject
{
    CoreTelephonyClient *_telephonyClient;
    NSObject<OS_dispatch_queue> *_carrierUtilitiesQueue;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (id)_formattedValueForPhoneNumber:(id)arg1 countryCode:(id)arg2;
- (id)phoneBundleInfoWithAdditionalInfo:(id)arg1 error:(id )arg2;
- (id)init;

@end

