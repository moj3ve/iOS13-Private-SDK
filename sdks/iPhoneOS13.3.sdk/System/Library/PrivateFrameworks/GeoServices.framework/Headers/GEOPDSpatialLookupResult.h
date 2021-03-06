//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOLatLng, GEOPDBounds, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSpatialLookupResult : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _mappedCategorys;
    GEOPDBounds *_bounds;
    GEOLatLng *_center;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_mappedCategorys:1;
        unsigned int read_bounds:1;
        unsigned int read_center:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_mappedCategorys:1;
        unsigned int wrote_bounds:1;
        unsigned int wrote_center:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (id)spatialLookupResultForPlaceData:(id)arg1;
// - (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
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
- (int)StringAsMappedCategorys:(id)arg1;
- (id)mappedCategorysAsString:(int)arg1;
- (void)setMappedCategorys:(int )arg1 count:(NSUInteger)arg2;
- (int)mappedCategoryAtIndex:(NSUInteger)arg1;
- (void)_addNoFlagsMappedCategory:(int)arg1;
- (void)addMappedCategory:(int)arg1;
- (void)clearMappedCategorys;
@property(readonly, nonatomic) int mappedCategorys;
@property(readonly, nonatomic) NSUInteger mappedCategorysCount;
- (void)_readMappedCategorys;
@property(retain, nonatomic) GEOPDBounds *bounds;
@property(readonly, nonatomic) BOOL hasBounds;
- (void)_readBounds;
@property(retain, nonatomic) GEOLatLng *center;
@property(readonly, nonatomic) BOOL hasCenter;
- (void)_readCenter;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end

