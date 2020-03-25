//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOPDGeographicCoordinate, GEOPDGroundDataBuild, GEOPDOrientedPosition, GEOPDOrientedTilePosition, GEOPDRigMetrics, GEOTileCoordinate, NSMutableArray, PBDataReader;

@interface GEOPDPhotoPosition : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_9f2792e4 _cameraMetadataIndexs;
    GEOPDGroundDataBuild *_build;
    NSMutableArray *_cameraMetadatas;
    NSUInteger _imageryTimestamp;
    NSUInteger _imdataId;
    GEOTileCoordinate *_parentTile;
    GEOPDGeographicCoordinate *_positionGeo;
    GEOPDOrientedPosition *_position;
    GEOPDRigMetrics *_rigMetrics;
    GEOPDOrientedTilePosition *_tilePosition;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    unsigned int _buildTableIndex;
    int _revision;
    struct {
        unsigned int has_imageryTimestamp:1;
        unsigned int has_imdataId:1;
        unsigned int has_buildTableIndex:1;
        unsigned int has_revision:1;
        unsigned int read_cameraMetadataIndexs:1;
        unsigned int read_build:1;
        unsigned int read_cameraMetadatas:1;
        unsigned int read_parentTile:1;
        unsigned int read_positionGeo:1;
        unsigned int read_position:1;
        unsigned int read_rigMetrics:1;
        unsigned int read_tilePosition:1;
        unsigned int wrote_cameraMetadataIndexs:1;
        unsigned int wrote_build:1;
        unsigned int wrote_cameraMetadatas:1;
        unsigned int wrote_imageryTimestamp:1;
        unsigned int wrote_imdataId:1;
        unsigned int wrote_parentTile:1;
        unsigned int wrote_positionGeo:1;
        unsigned int wrote_position:1;
        unsigned int wrote_rigMetrics:1;
        unsigned int wrote_tilePosition:1;
        unsigned int wrote_buildTableIndex:1;
        unsigned int wrote_revision:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)cameraMetadataType;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEOPDRigMetrics *rigMetrics;
@property(readonly, nonatomic) BOOL hasRigMetrics;
- (void)_readRigMetrics;
@property(retain, nonatomic) GEOTileCoordinate *parentTile;
@property(readonly, nonatomic) BOOL hasParentTile;
- (void)_readParentTile;
@property(retain, nonatomic) GEOPDOrientedTilePosition *tilePosition;
@property(readonly, nonatomic) BOOL hasTilePosition;
- (void)_readTilePosition;
- (void)setCameraMetadataIndexs:(unsigned int )arg1 count:(NSUInteger)arg2;
- (unsigned int)cameraMetadataIndexAtIndex:(NSUInteger)arg1;
- (void)_addNoFlagsCameraMetadataIndex:(unsigned int)arg1;
- (void)addCameraMetadataIndex:(unsigned int)arg1;
- (void)clearCameraMetadataIndexs;
@property(readonly, nonatomic) unsigned int cameraMetadataIndexs;
@property(readonly, nonatomic) NSUInteger cameraMetadataIndexsCount;
- (void)_readCameraMetadataIndexs;
@property(retain, nonatomic) GEOPDGroundDataBuild *build;
@property(readonly, nonatomic) BOOL hasBuild;
- (void)_readBuild;
@property(nonatomic) BOOL hasBuildTableIndex;
@property(nonatomic) unsigned int buildTableIndex;
@property(retain, nonatomic) GEOPDGeographicCoordinate *positionGeo;
@property(readonly, nonatomic) BOOL hasPositionGeo;
- (void)_readPositionGeo;
@property(nonatomic) BOOL hasImageryTimestamp;
@property(nonatomic) NSUInteger imageryTimestamp;
@property(nonatomic) BOOL hasRevision;
@property(nonatomic) int revision;
@property(retain, nonatomic) GEOPDOrientedPosition *position;
@property(readonly, nonatomic) BOOL hasPosition;
- (void)_readPosition;
- (id)cameraMetadataAtIndex:(NSUInteger)arg1;
- (NSUInteger)cameraMetadatasCount;
- (void)_addNoFlagsCameraMetadata:(id)arg1;
- (void)addCameraMetadata:(id)arg1;
- (void)clearCameraMetadatas;
@property(retain, nonatomic) NSMutableArray *cameraMetadatas;
- (void)_readCameraMetadatas;
@property(nonatomic) BOOL hasImdataId;
@property(nonatomic) NSUInteger imdataId;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end
