//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSObject, NSString;
@protocol OS_dispatch_group;

@interface HMDAccessoryTransaction : HMDBackingStoreModelObject
{
    NSString *_configuredNetworkProtectionGroupUUIDString;
    NSObject<OS_dispatch_group> *_configurationTracker;
}

+ (id)properties;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *configurationTracker; // @synthesize configurationTracker=_configurationTracker;
@property(retain, nonatomic) NSString *configuredNetworkProtectionGroupUUIDString; // @synthesize configuredNetworkProtectionGroupUUIDString=_configuredNetworkProtectionGroupUUIDString;
// - (void).cxx_destruct;
- (id)dependentUUIDs;

@end

