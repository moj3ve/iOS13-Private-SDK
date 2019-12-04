//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDCloudZoneChange.h>

@class HMDCloudShareGroupChange;

@interface HMDCloudHomeZoneChange : HMDCloudZoneChange
{
    HMDCloudShareGroupChange *_shareGroupChange;
}

@property(retain, nonatomic) HMDCloudShareGroupChange *shareGroupChange; // @synthesize shareGroupChange=_shareGroupChange;
- (id)objectChanges;
- (id)changeWithRecordName:(id)arg1;
- (id)changeWithObjectID:(id)arg1;
- (void)flushAllChangesToCache;
- (void)setDeleteAsProcessedWithRecordID:(id)arg1;
- (void)resetRecordWithRecordID:(id)arg1;
- (void)setSaveAsProcessedWithRecord:(id)arg1;
- (void)fetchBatchToUpload:(id /* block */)arg1;
- (_Bool)moreChangesToProcess;
- (void)loadCloudRecordsAndDetermineDeletesFromCache:(id /* block */)arg1;
- (void)addChangeWithDeletedRecordID:(id)arg1;
- (void)addChangeWithRecord:(id)arg1;
- (void)addChangeWithObjectChange:(id)arg1;
- (id)initWithZone:(id)arg1 temporaryCache:(_Bool)arg2;

@end
