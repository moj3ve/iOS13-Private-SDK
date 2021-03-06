//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/MMCSOperationMetric-Protocol.h>

@class NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface CKDOperationMetrics : NSObject <MMCSOperationMetric, NSCopying, NSSecureCoding>
{
    NSDate *_startDate;
    double _duration;
    double _queueing;
    double _executing;
    NSUInteger _bytesUploaded;
    NSUInteger _bytesDownloaded;
    NSUInteger _connections;
    NSUInteger _connectionsCreated;
    NSUInteger _recordsUploaded;
    NSUInteger _recordsDownloaded;
    NSUInteger _recordsDeleted;
    NSUInteger _assetsUploaded;
    NSUInteger _assetsUploadedFileSize;
    NSUInteger _assetsDownloaded;
    NSUInteger _assetsDownloadedFileSize;
    NSUInteger _requestCount;
    NSUInteger _retries;
    NSMutableSet *_requestUUIDs;
    NSMutableDictionary *_requestOperationCountsByType;
    NSMutableDictionary *_totalBytesByChunkProfile;
    NSMutableDictionary *_chunkCountByChunkProfile;
    NSMutableDictionary *_fileCountByChunkProfile;
    NSMutableArray *_ranges;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSMutableArray *ranges; // @synthesize ranges=_ranges;
@property(retain, nonatomic) NSMutableDictionary *fileCountByChunkProfile; // @synthesize fileCountByChunkProfile=_fileCountByChunkProfile;
@property(retain, nonatomic) NSMutableDictionary *chunkCountByChunkProfile; // @synthesize chunkCountByChunkProfile=_chunkCountByChunkProfile;
@property(retain, nonatomic) NSMutableDictionary *totalBytesByChunkProfile; // @synthesize totalBytesByChunkProfile=_totalBytesByChunkProfile;
@property(retain, nonatomic) NSMutableDictionary *requestOperationCountsByType; // @synthesize requestOperationCountsByType=_requestOperationCountsByType;
@property(readonly) NSMutableSet *requestUUIDs; // @synthesize requestUUIDs=_requestUUIDs;
@property NSUInteger retries; // @synthesize retries=_retries;
@property NSUInteger requestCount; // @synthesize requestCount=_requestCount;
@property NSUInteger assetsDownloadedFileSize; // @synthesize assetsDownloadedFileSize=_assetsDownloadedFileSize;
@property NSUInteger assetsDownloaded; // @synthesize assetsDownloaded=_assetsDownloaded;
@property NSUInteger assetsUploadedFileSize; // @synthesize assetsUploadedFileSize=_assetsUploadedFileSize;
@property NSUInteger assetsUploaded; // @synthesize assetsUploaded=_assetsUploaded;
@property NSUInteger recordsDeleted; // @synthesize recordsDeleted=_recordsDeleted;
@property NSUInteger recordsDownloaded; // @synthesize recordsDownloaded=_recordsDownloaded;
@property NSUInteger recordsUploaded; // @synthesize recordsUploaded=_recordsUploaded;
@property NSUInteger connectionsCreated; // @synthesize connectionsCreated=_connectionsCreated;
@property NSUInteger connections; // @synthesize connections=_connections;
@property NSUInteger bytesDownloaded; // @synthesize bytesDownloaded=_bytesDownloaded;
@property NSUInteger bytesUploaded; // @synthesize bytesUploaded=_bytesUploaded;
@property double executing; // @synthesize executing=_executing;
@property double queueing; // @synthesize queueing=_queueing;
@property double duration; // @synthesize duration=_duration;
@property(retain) NSDate *startDate; // @synthesize startDate=_startDate;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)addCKSpecificMetricsFromMetrics:(id)arg1;
- (id)newRangeWithOperationState:(NSUInteger)arg1 startDate:(id)arg2 duration:(double)arg3;
- (void)addRequestOperationCountsByOperationType:(id)arg1;
- (void)addRange:(id)arg1;
@property(readonly) NSArray *rangesCopy;
@property(readonly, copy) NSString *description;
- (id)CKPropertiesDescription;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)_initWithStartDate:(id)arg1;
- (id)init;

@end

