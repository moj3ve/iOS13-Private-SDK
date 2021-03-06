//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

#import <CloudKitDaemon/CKDOperationPipelining-Protocol.h>

@class CKServerChangeToken, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface CKDFetchDatabaseChangesOperation : CKDDatabaseOperation <CKDOperationPipelining>
{
    BOOL _fetchAllChanges;
    id /* CDUnknownBlockType */ _recordZoneWithIDChangedBlock;
    id /* CDUnknownBlockType */ _recordZoneWithIDWasDeletedBlock;
    id /* CDUnknownBlockType */ _recordZoneWithIDWasPurgedBlock;
    id /* CDUnknownBlockType */ _serverChangeTokenUpdatedBlock;
    CKServerChangeToken *_serverChangeToken;
    long long _status;
    CKServerChangeToken *_previousServerChangeToken;
    NSUInteger _resultsLimit;
    NSUInteger _numRequestsSent;
    NSObject<OS_dispatch_group> *_fetchZonesGroup;
    NSMutableArray *_requestInfos;
}

@property(retain, nonatomic) NSMutableArray *requestInfos; // @synthesize requestInfos=_requestInfos;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *fetchZonesGroup; // @synthesize fetchZonesGroup=_fetchZonesGroup;
@property(nonatomic) NSUInteger numRequestsSent; // @synthesize numRequestsSent=_numRequestsSent;
@property(nonatomic) BOOL fetchAllChanges; // @synthesize fetchAllChanges=_fetchAllChanges;
@property(nonatomic) NSUInteger resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(retain, nonatomic) CKServerChangeToken *previousServerChangeToken; // @synthesize previousServerChangeToken=_previousServerChangeToken;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) CKServerChangeToken *serverChangeToken; // @synthesize serverChangeToken=_serverChangeToken;
@property(copy, nonatomic) id /* CDUnknownBlockType */ serverChangeTokenUpdatedBlock; // @synthesize serverChangeTokenUpdatedBlock=_serverChangeTokenUpdatedBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ recordZoneWithIDWasPurgedBlock; // @synthesize recordZoneWithIDWasPurgedBlock=_recordZoneWithIDWasPurgedBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ recordZoneWithIDWasDeletedBlock; // @synthesize recordZoneWithIDWasDeletedBlock=_recordZoneWithIDWasDeletedBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ recordZoneWithIDChangedBlock; // @synthesize recordZoneWithIDChangedBlock=_recordZoneWithIDChangedBlock;
// - (void).cxx_destruct;
- (id)analyticsPayload;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)fillOutOperationResult:(id)arg1;
- (Class)operationResultClass;
- (void)main;
- (void)_sendFetchDatabaseChangesRequestWithChangeToken:(id)arg1 previousRequestSchedulerInfo:(id)arg2;
- (void)_handleFetchDatabaseChangesRequestFinishedWithSchedulerInfo:(id)arg1;
- (id)activityCreate;
@property(readonly, nonatomic) NSString *pipeliningDescription;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

