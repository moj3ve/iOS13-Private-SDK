//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSString, NTPBDate;

@interface NTPBRecordBase : PBCodable <NSCopying>
{
    NTPBDate *_assetURLsDate;
    int _cacheLifetimeHint;
    NSString *_changeTag;
    NTPBDate *_fetchDate;
    NSString *_identifier;
    NTPBDate *_modificationDate;
    int _recordType;
    _Bool _deletedFromCloud;
    struct {
        unsigned int cacheLifetimeHint:1;
        unsigned int recordType:1;
        unsigned int deletedFromCloud:1;
    } _has;
}

@property(retain, nonatomic) NTPBDate *assetURLsDate; // @synthesize assetURLsDate=_assetURLsDate;
@property(nonatomic) _Bool deletedFromCloud; // @synthesize deletedFromCloud=_deletedFromCloud;
@property(retain, nonatomic) NTPBDate *fetchDate; // @synthesize fetchDate=_fetchDate;
@property(retain, nonatomic) NTPBDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(retain, nonatomic) NSString *changeTag; // @synthesize changeTag=_changeTag;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasAssetURLsDate;
@property(nonatomic) _Bool hasRecordType;
@property(nonatomic) int recordType; // @synthesize recordType=_recordType;
@property(nonatomic) _Bool hasCacheLifetimeHint;
@property(nonatomic) int cacheLifetimeHint; // @synthesize cacheLifetimeHint=_cacheLifetimeHint;
@property(nonatomic) _Bool hasDeletedFromCloud;
@property(readonly, nonatomic) _Bool hasFetchDate;
@property(readonly, nonatomic) _Bool hasModificationDate;
@property(readonly, nonatomic) _Bool hasChangeTag;
@property(readonly, nonatomic) _Bool hasIdentifier;
- (void)dealloc;

@end
