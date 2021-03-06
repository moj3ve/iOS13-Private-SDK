//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface PBBProtoInitialSyncStateUpdate : PBCodable <NSCopying>
{
    double _progress;
    unsigned int _state;
    struct {
        unsigned int progress:1;
        unsigned int state:1;
    } _has;
}

@property(nonatomic) unsigned int state; // @synthesize state=_state;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasState;
@property(nonatomic) BOOL hasProgress;

@end

