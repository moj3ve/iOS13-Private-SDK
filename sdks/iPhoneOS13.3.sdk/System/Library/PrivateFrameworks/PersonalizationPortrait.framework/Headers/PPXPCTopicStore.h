//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PersonalizationPortrait/PPTopicStore.h>

@class PPClientFeedbackHelper;

@interface PPXPCTopicStore : PPTopicStore
{
    PPClientFeedbackHelper *_clientFeedbackHelper;
}

// - (void).cxx_destruct;
- (void)setClientIdentifier:(id)arg1;
- (id)clientIdentifier;
- (void)registerFeedback:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (BOOL)clearWithError:(id )arg1 deletedCount:(NSUInteger )arg2;
- (BOOL)cloudSyncWithError:(id )arg1;
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 deletedCount:(NSUInteger )arg2 error:(id )arg3;
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 deletedCount:(NSUInteger )arg3 error:(id )arg4;
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 deletedCount:(NSUInteger )arg3 error:(id )arg4;
- (BOOL)deleteAllTopicsWithTopicId:(id)arg1 deletedCount:(NSUInteger )arg2 error:(id )arg3;
- (BOOL)donateTopics:(id)arg1 source:(id)arg2 algorithm:(NSUInteger)arg3 cloudSync:(BOOL)arg4 sentimentScore:(double)arg5 error:(id )arg6;
- (id)unmapMappedTopicIdentifier:(id)arg1 mappingIdentifier:(id)arg2 error:(id )arg3;
- (id)topicRecordsWithQuery:(id)arg1 error:(id )arg2;
- (BOOL)iterTopicRecordsWithQuery:(id)arg1 error:(id )arg2 block:(id /* CDUnknownBlockType */)arg3;
- (id)scoresForTopicMapping:(id)arg1 query:(id)arg2 error:(id )arg3;
- (BOOL)iterScoresForTopicMapping:(id)arg1 query:(id)arg2 error:(id )arg3 block:(id /* CDUnknownBlockType */)arg4;
- (id)rankedTopicsWithQuery:(id)arg1 error:(id )arg2;
- (BOOL)iterRankedTopicsWithQuery:(id)arg1 error:(id )arg2 block:(id /* CDUnknownBlockType */)arg3;
- (id)_init;

@end

