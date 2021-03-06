//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOTransitDeparture-Protocol.h>

@class GEOFormattedString, NSDate, NSString, PBDataReader, PBUnknownFields;
@protocol GEOServerFormattedString;

__attribute__((visibility("hidden")))
@interface GEOPDDeparture : PBCodable <GEOTransitDeparture, NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    double _absDepartureTime;
    double _absLiveDepartureTime;
    GEOFormattedString *_realTimeStatus;
    NSUInteger _referenceTripId;
    NSString *_vehicleNumber;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    BOOL _isCanceled;
    struct {
        unsigned int has_absDepartureTime:1;
        unsigned int has_absLiveDepartureTime:1;
        unsigned int has_referenceTripId:1;
        unsigned int has_isCanceled:1;
        unsigned int read_unknownFields:1;
        unsigned int read_realTimeStatus:1;
        unsigned int read_vehicleNumber:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_absDepartureTime:1;
        unsigned int wrote_absLiveDepartureTime:1;
        unsigned int wrote_realTimeStatus:1;
        unsigned int wrote_referenceTripId:1;
        unsigned int wrote_vehicleNumber:1;
        unsigned int wrote_isCanceled:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
// - (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) GEOFormattedString *realTimeStatus;
@property(readonly, nonatomic) BOOL hasRealTimeStatus;
- (void)_readRealTimeStatus;
@property(nonatomic) BOOL hasReferenceTripId;
@property(nonatomic) NSUInteger referenceTripId;
@property(nonatomic) BOOL hasIsCanceled;
@property(nonatomic) BOOL isCanceled;
@property(nonatomic) BOOL hasAbsLiveDepartureTime;
@property(nonatomic) double absLiveDepartureTime;
@property(retain, nonatomic) NSString *vehicleNumber;
@property(readonly, nonatomic) BOOL hasVehicleNumber;
- (void)_readVehicleNumber;
@property(nonatomic) BOOL hasAbsDepartureTime;
@property(nonatomic) double absDepartureTime;
- (id)initWithData:(id)arg1;
- (id)init;
- (BOOL)isPastDepartureRelativeToDate:(id)arg1 usingGracePeriod:(BOOL)arg2;
@property(readonly, nonatomic) BOOL isPastDeparture;
@property(readonly, nonatomic) NSUInteger tripIdentifier;
@property(readonly, nonatomic) id <GEOServerFormattedString> liveStatusString;
@property(readonly, nonatomic) long long liveStatus;
@property(readonly, nonatomic) NSString *vehicleIdentifier;
@property(readonly, nonatomic) NSDate *liveDepartureDate;
@property(readonly, nonatomic) NSDate *scheduledDepartureDate;
@property(readonly, nonatomic) NSDate *departureDate;

@end

