//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ClassroomKit/CRKCloudEncapsulatedOperation.h>

@class CKRecordZoneID;

@interface CRKCloudSubscribeToZoneOperation : CRKCloudEncapsulatedOperation
{
    CKRecordZoneID *_zoneId;
}

@property(readonly, nonatomic) CKRecordZoneID *zoneId; // @synthesize zoneId=_zoneId;
- (void)retryableCreateSubscriptionOperationDidFinish:(id)arg1;
- (void)subscribeToZone:(id)arg1;
- (void)retryableFetchSubscriptionOperationDidFinish:(id)arg1;
- (void)retryableModifyRecordZonesOperationDidFinish:(id)arg1;
- (void)retryableFetchZoneOperationDidFinish:(id)arg1;
- (void)main;
- (id)initWithOperationQueue:(id)arg1 database:(id)arg2 zoneId:(id)arg3;
- (id)initWithOperationQueue:(id)arg1 database:(id)arg2;

@end
