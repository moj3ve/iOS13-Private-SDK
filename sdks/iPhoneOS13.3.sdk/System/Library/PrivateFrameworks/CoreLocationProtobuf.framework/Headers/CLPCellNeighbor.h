//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface CLPCellNeighbor : PBCodable <NSCopying>
{
    int _ecn0;
    int _psc;
    int _rscp;
    int _rssi;
    int _uarfcn;
    struct {
        unsigned int ecn0:1;
        unsigned int psc:1;
        unsigned int rscp:1;
        unsigned int rssi:1;
        unsigned int uarfcn:1;
    } _has;
}

@property(nonatomic) int rscp; // @synthesize rscp=_rscp;
@property(nonatomic) int ecn0; // @synthesize ecn0=_ecn0;
@property(nonatomic) int rssi; // @synthesize rssi=_rssi;
@property(nonatomic) int psc; // @synthesize psc=_psc;
@property(nonatomic) int uarfcn; // @synthesize uarfcn=_uarfcn;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasRscp;
@property(nonatomic) BOOL hasEcn0;
@property(nonatomic) BOOL hasRssi;
@property(nonatomic) BOOL hasPsc;
@property(nonatomic) BOOL hasUarfcn;

@end

