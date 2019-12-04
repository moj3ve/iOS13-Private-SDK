//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortraitInternals/PPFeedbackAccepting-Protocol.h>

@class PPEventCache, PPEventStorage, PPM2FeedbackPortraitRegistered, PPMFeedbackRegistered, _PASNotificationToken;

@interface PPLocalEventStore : NSObject <PPFeedbackAccepting>
{
    PPEventCache *_eventCache;
    PPEventStorage *_storage;
    _PASNotificationToken *_assetUpdateNotificationToken;
    PPMFeedbackRegistered *_feedbackTracker;
    PPM2FeedbackPortraitRegistered *_feedbackTracker2;
}

+ (id)defaultStore;
- (void)registerFeedback:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (id)eventsFromDate:(id)arg1 toDate:(id)arg2;
- (id)eventMetaDataFromDate:(id)arg1 toDate:(id)arg2;
- (id)eventHighlightForEvent:(id)arg1 usingScorer:(id)arg2 date:(id)arg3 rankingOptions:(int)arg4 loadedFromEventKit:(_Bool *)arg5;
- (id)eventHighlightsFrom:(id)arg1 to:(id)arg2 options:(int)arg3;
- (void)_setupCalendarVisibilityManager;
- (void)_clearAndReloadAllCachesAndData;
- (void)_registerForNotifications;
- (double)_scoreForSecondsRelativeToNow:(double)arg1;
- (void)_preloadEvents;
- (id)_recordForDeletedEKEventWithChangeIdentifier:(id)arg1;
- (id)_recordForEvent:(id)arg1;
- (id)_recordForEKEvent:(id)arg1;
- (id)eventWithExternalID:(id)arg1;
- (id)eventsInRange:(struct _NSRange)arg1;
- (id)resolveEventNameRecordChanges:(id)arg1 client:(id)arg2 error:(id *)arg3;
- (id)eventNameRecordsForClient:(id)arg1 error:(id *)arg2;
- (_Bool)iterEventNameRecordsForClient:(id)arg1 error:(id *)arg2 block:(id /* block */)arg3;
- (id)init;
- (void)clearCaches;

@end
