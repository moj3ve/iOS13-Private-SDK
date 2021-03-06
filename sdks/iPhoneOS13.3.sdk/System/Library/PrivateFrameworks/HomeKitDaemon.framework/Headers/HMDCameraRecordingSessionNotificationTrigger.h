//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDCameraNotificationCharacteristicsAvailabilityListenerDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDCameraNotificationCharacteristicsAvailabilityListener, HMDHAPAccessory, NSNotificationCenter, NSObject, NSSet, NSString;
@protocol HMDCameraRecordingSessionNotificationTriggerDelegate, OS_dispatch_queue;

@interface HMDCameraRecordingSessionNotificationTrigger : HMFObject <HMDCameraNotificationCharacteristicsAvailabilityListenerDelegate, HMFLogging>
{
    id <HMDCameraRecordingSessionNotificationTriggerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDHAPAccessory *_cameraAccessory;
    HMDCameraNotificationCharacteristicsAvailabilityListener *_availabilityListener;
    NSNotificationCenter *_notificationCenter;
    NSSet *_availableCharacteristics;
    NSString *_clientIdentifier;
}

+ (id)logCategory;
@property(readonly, copy) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(retain) NSSet *availableCharacteristics; // @synthesize availableCharacteristics=_availableCharacteristics;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) HMDCameraNotificationCharacteristicsAvailabilityListener *availabilityListener; // @synthesize availabilityListener=_availabilityListener;
@property(readonly) __weak HMDHAPAccessory *cameraAccessory; // @synthesize cameraAccessory=_cameraAccessory;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property __weak id <HMDCameraRecordingSessionNotificationTriggerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)listener:(id)arg1 didUpdateAvailableCharacteristics:(id)arg2;
- (id)logIdentifier;
- (void)_handleCharacteristicsValueUpdated:(id)arg1;
- (void)handleAccessoryConfigured:(id)arg1;
- (void)_handleObservedCharacteristicsValueUpdate:(id)arg1;
- (void)_setNotificationForCharacteristics:(id)arg1 to:(BOOL)arg2;
- (void)_configureAvailableCharacteristics:(id)arg1;
- (void)start;
- (void)dealloc;
- (id)initWithCamera:(id)arg1 workQueue:(id)arg2 availabilityListener:(id)arg3 notificationCenter:(id)arg4;
- (id)initWithCamera:(id)arg1 workQueue:(id)arg2;

@end

