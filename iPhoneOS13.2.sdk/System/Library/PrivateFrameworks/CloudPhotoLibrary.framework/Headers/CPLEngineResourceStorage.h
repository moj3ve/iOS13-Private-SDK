//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineStorage.h>

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>

@class CPLEngineFileStorage, CPLPlatformObject, NSMutableDictionary, NSObject, NSString, NSURL, _CPLPruneRequestCounter;
@protocol OS_dispatch_queue;

@interface CPLEngineResourceStorage : CPLEngineStorage <CPLAbstractObject>
{
    NSMutableDictionary *_identitiesToCommit;
    NSMutableDictionary *_identitiesToDelete;
    NSURL *_tempFolderURL;
    NSObject<OS_dispatch_queue> *_pruneStatsQueue;
    _CPLPruneRequestCounter *_pruneRequests;
    _CPLPruneRequestCounter *_purgeabilityCheckRequests;
    _Bool _shouldCreateTempFolder;
    _Bool _shouldCheckFilesForUpload;
    CPLEngineFileStorage *_fileStorage;
}

@property(nonatomic) _Bool shouldCheckFilesForUpload; // @synthesize shouldCheckFilesForUpload=_shouldCheckFilesForUpload;
@property(readonly, nonatomic) CPLEngineFileStorage *fileStorage; // @synthesize fileStorage=_fileStorage;
- (void)notePruningRequestForResource:(id)arg1 realPrune:(_Bool)arg2 successful:(_Bool)arg3;
- (void)notePruningRequestForResource:(id)arg1 realPrune:(_Bool)arg2 successful:(_Bool)arg3 prunedSize:(unsigned long long)arg4;
- (id)statusDictionary;
- (id)status;
- (void)writeTransactionDidSucceed;
- (void)writeTransactionDidFail;
- (_Bool)checkIsEmpty;
- (_Bool)resetWithError:(id *)arg1;
- (_Bool)compactWithError:(id *)arg1;
- (_Bool)storeDownloadedResource:(id)arg1 atURL:(id)arg2 error:(id *)arg3;
- (id)createTempDestinationURLForResource:(id)arg1 error:(id *)arg2;
- (_Bool)hasResource:(id)arg1;
- (_Bool)releaseFileURL:(id)arg1 forResource:(id)arg2 error:(id *)arg3;
- (id)retainFileURLForResource:(id)arg1 error:(id *)arg2;
- (unsigned long long)sizeOfOriginalResourcesToUpload;
- (unsigned long long)sizeOfResourcesToUpload;
- (_Bool)dropResourceForUpload:(id)arg1 error:(id *)arg2;
- (_Bool)storeResourceCopyForUpload:(id)arg1 error:(id *)arg2;
- (_Bool)storeResourceForUpload:(id)arg1 shouldCheckResource:(_Bool)arg2 error:(id *)arg3;
- (unsigned long long)scopeType;
- (_Bool)openWithError:(id *)arg1;
- (_Bool)_clearAndCreateTempFolderIfNecessaryWithError:(id *)arg1;
- (id)initWithEngineStore:(id)arg1 name:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly, nonatomic) CPLPlatformObject *platformObject;
@property(readonly) Class superclass;

@end
