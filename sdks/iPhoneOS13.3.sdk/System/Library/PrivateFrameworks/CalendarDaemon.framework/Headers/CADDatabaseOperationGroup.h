//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarDaemon/CADOperationGroup.h>

#import <CalendarDaemon/CADDatabaseInterface-Protocol.h>

__attribute__((visibility("hidden")))
@interface CADDatabaseOperationGroup : CADOperationGroup <CADDatabaseInterface>
{
}

+ (BOOL)requiresEventOrReminderAccess;
+ (BOOL)requiresReminderAccess;
+ (BOOL)requiresEventAccess;
- (void)CADDatabaseResetWithReply:(id /* CDUnknownBlockType */)arg1;
- (void)CADDatabaseRollbackWithReply:(id /* CDUnknownBlockType */)arg1;
- (void)CADDatabaseCommitWithReply:(id /* CDUnknownBlockType */)arg1;
- (void)CADDatabaseSaveWithReply:(id /* CDUnknownBlockType */)arg1;
- (void)CADDatabaseRebuildOccurrenceCacheWithReply:(id /* CDUnknownBlockType */)arg1;
- (void)CADDatabaseSetShowsDeclinedEvents:(BOOL)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (void)CADDatabaseExportICSDataForCalendarItems:(id)arg1 preventLineFolding:(BOOL)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (id)_importData:(id)arg1 intoCalendarWithID:(int)arg2 optionsMask:(NSUInteger)arg3 outError:(int )arg4;
- (void)CADDatabaseImportICSData:(id)arg1 intoCalendarsWithIDs:(id)arg2 optionsMask:(NSUInteger)arg3 reply:(id /* CDUnknownBlockType */)arg4;
- (void)CADDatabaseLastConfirmedSplashScreenVersion:(id /* CDUnknownBlockType */)arg1;
- (BOOL)_CADDatabaseCanModifyCalendarDatabase;
- (void)CADDatabaseCanModifyCalendarDatabase:(id /* CDUnknownBlockType */)arg1;
- (void)CADDatabaseGetNextAssignableColorWithReply:(id /* CDUnknownBlockType */)arg1;
- (void)CADDatabaseGetChangedEntityIDsSinceTimestamp:(double)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (void)CADDatabaseGetChangesSinceSequenceNumber:(int)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (void)CADDatabaseGetSequenceNumber:(id /* CDUnknownBlockType */)arg1;
- (struct __CFSet )_copyToIntCFSetRef:(id)arg1;
- (struct __CFArray )_copyToIntCFArrayRef:(id)arg1;
- (void)CADDatabaseMarkIndividualChangesConsumed:(id)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (void)CADDatabaseMarkChangedObjectIDsConsumedUpToSequenceNumber:(long long)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (void)CADDatabaseFetchObjectChangesForEntityTypes:(id)arg1 insideObject:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)CADDatabaseFetchChangedObjectIDsSinceSequenceNumber:(long long)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (void)CADDatabaseUnregisterForDetailedChangeTracking:(id /* CDUnknownBlockType */)arg1;
- (void)CADDatabaseRegisterForDetailedChangeTracking:(id /* CDUnknownBlockType */)arg1;
- (void)CADDatabaseGetUUID:(id /* CDUnknownBlockType */)arg1;

@end

