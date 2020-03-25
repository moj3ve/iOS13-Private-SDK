//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDExternalAction : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_externalActionDetails;
    int _componentType;
    struct {
        unsigned int has_componentType:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)externalActionDetailType;
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
- (id)externalActionDetailAtIndex:(NSUInteger)arg1;
- (NSUInteger)externalActionDetailsCount;
- (void)addExternalActionDetail:(id)arg1;
- (void)clearExternalActionDetails;
@property(retain, nonatomic) NSMutableArray *externalActionDetails;
- (int)StringAsComponentType:(id)arg1;
- (id)componentTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasComponentType;
@property(nonatomic) int componentType;

@end
