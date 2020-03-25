//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOLocation;

@interface GEOLogMsgStateLookAroundView : PBCodable <NSCopying>
{
    GEOLocation *_location;
    double _zoomLevel;
    unsigned int _heading;
    unsigned int _numberPoisInView;
    BOOL _isLabelingShown;
    struct {
        unsigned int has_zoomLevel:1;
        unsigned int has_heading:1;
        unsigned int has_numberPoisInView:1;
        unsigned int has_isLabelingShown:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
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
@property(nonatomic) BOOL hasIsLabelingShown;
@property(nonatomic) BOOL isLabelingShown;
@property(nonatomic) BOOL hasNumberPoisInView;
@property(nonatomic) unsigned int numberPoisInView;
@property(nonatomic) BOOL hasZoomLevel;
@property(nonatomic) double zoomLevel;
@property(nonatomic) BOOL hasHeading;
@property(nonatomic) unsigned int heading;
@property(retain, nonatomic) GEOLocation *location;
@property(readonly, nonatomic) BOOL hasLocation;

@end
