//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class NSDate, NSError, NSUUID;

@interface HMDCameraRecordingUploadOperationEvent : HMDLogEvent <HMDAWDLogEvent>
{
    BOOL _didCausePreviousClipToFinalizeDueToDurationLimit;
    int _operationType;
    double _runTime;
    NSError *_error;
    double _totalClipDuration;
    NSUInteger _retryCount;
    NSDate *_operationStartDate;
    NSUUID *_clipModelID;
}

+ (int)operationTypeFromOperation:(id)arg1;
+ (id)uuid;
@property(readonly, copy) NSUUID *clipModelID; // @synthesize clipModelID=_clipModelID;
@property(retain) NSDate *operationStartDate; // @synthesize operationStartDate=_operationStartDate;
@property NSUInteger retryCount; // @synthesize retryCount=_retryCount;
@property double totalClipDuration; // @synthesize totalClipDuration=_totalClipDuration;
@property(retain) NSError *error; // @synthesize error=_error;
@property BOOL didCausePreviousClipToFinalizeDueToDurationLimit; // @synthesize didCausePreviousClipToFinalizeDueToDurationLimit=_didCausePreviousClipToFinalizeDueToDurationLimit;
@property int operationType; // @synthesize operationType=_operationType;
@property double runTime; // @synthesize runTime=_runTime;
// - (void).cxx_destruct;
@property(readonly) NSUInteger totalClipDurationMilliseconds;
@property(readonly) NSUInteger runTimeInMilliseconds;
@property(readonly) NSUInteger operationStartTime;
@property(readonly) NSUInteger startTimestamp;
- (id)attributeDescriptions;
- (id)initWithClipModelID:(id)arg1 operation:(id)arg2;
- (id)metricForAWD;
- (unsigned int)AWDMessageType;

@end
