//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>



@class NSMutableArray, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOSpatialLookupBatchRequest : PBRequest <NSCopying>
{
    PBDataReader *_reader;
    NSString *_deviceCountryCode;
    NSString *_deviceSku;
    NSMutableArray *_requests;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_deviceCountryCode:1;
        unsigned int read_deviceSku:1;
        unsigned int read_requests:1;
        unsigned int wrote_deviceCountryCode:1;
        unsigned int wrote_deviceSku:1;
        unsigned int wrote_requests:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)requestType;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) NSString *deviceSku;
@property(readonly, nonatomic) _Bool hasDeviceSku;
- (void)_readDeviceSku;
@property(retain, nonatomic) NSString *deviceCountryCode;
@property(readonly, nonatomic) _Bool hasDeviceCountryCode;
- (void)_readDeviceCountryCode;
- (id)requestAtIndex:(unsigned long long)arg1;
- (unsigned long long)requestsCount;
- (void)_addNoFlagsRequest:(id)arg1;
- (void)addRequest:(id)arg1;
- (void)clearRequests;
@property(retain, nonatomic) NSMutableArray *requests;
- (void)_readRequests;
- (id)initWithData:(id)arg1;
- (id)init;

@end
