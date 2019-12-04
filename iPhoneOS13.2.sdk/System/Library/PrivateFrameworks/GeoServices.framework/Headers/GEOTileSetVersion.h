//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOTileSetVersion : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct GEOTileSetRegion *_availableTiles;
    unsigned long long _availableTilesCount;
    unsigned long long _availableTilesSpace;
    struct GEOGenericTile *_genericTiles;
    unsigned long long _genericTilesCount;
    unsigned long long _genericTilesSpace;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _identifier;
    unsigned int _supportedLanguagesVersion;
    unsigned int _timeToLiveSeconds;
    CDStruct_40288aee _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasSupportedLanguagesVersion;
@property(nonatomic) unsigned int supportedLanguagesVersion;
- (void)setGenericTiles:(struct GEOGenericTile *)arg1 count:(unsigned long long)arg2;
- (struct GEOGenericTile)genericTileAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsGenericTile:(struct GEOGenericTile)arg1;
- (void)addGenericTile:(struct GEOGenericTile)arg1;
- (void)clearGenericTiles;
@property(readonly, nonatomic) struct GEOGenericTile *genericTiles;
@property(readonly, nonatomic) unsigned long long genericTilesCount;
- (void)_readGenericTiles;
@property(nonatomic) _Bool hasTimeToLiveSeconds;
@property(nonatomic) unsigned int timeToLiveSeconds;
- (void)setAvailableTiles:(struct GEOTileSetRegion *)arg1 count:(unsigned long long)arg2;
- (struct GEOTileSetRegion)availableTilesAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsAvailableTiles:(struct GEOTileSetRegion)arg1;
- (void)addAvailableTiles:(struct GEOTileSetRegion)arg1;
- (void)clearAvailableTiles;
@property(readonly, nonatomic) struct GEOTileSetRegion *availableTiles;
@property(readonly, nonatomic) unsigned long long availableTilesCount;
- (void)_readAvailableTiles;
@property(nonatomic) unsigned int identifier;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end
