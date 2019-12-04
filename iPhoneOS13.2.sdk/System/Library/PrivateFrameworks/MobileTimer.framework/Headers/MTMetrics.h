//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NAScheduler;

@interface MTMetrics : NSObject
{
    id <NAScheduler> _serializer;
    unsigned long long _operationStartTime;
}

+ (id)_sharedPublicMetrics;
@property(nonatomic) unsigned long long operationStartTime; // @synthesize operationStartTime=_operationStartTime;
@property(retain, nonatomic) id <NAScheduler> serializer; // @synthesize serializer=_serializer;
- (void)logSyncFailedWithError:(id)arg1;
- (void)logSyncCompleted;
- (void)logTimerRepeated;
- (void)logTimerDismissed;
- (void)logTimerUpdated;
- (void)logTimerDeleted;
- (void)logTimerAdded;
- (void)logAlarmDismissAction:(unsigned long long)arg1;
- (void)logAlarmSnoozeAction:(unsigned long long)arg1;
- (void)logAlarmUpdated:(_Bool)arg1;
- (void)logAlarmDeleted:(_Bool)arg1;
- (void)logAlarmAdded:(_Bool)arg1;
- (id)init;

@end
