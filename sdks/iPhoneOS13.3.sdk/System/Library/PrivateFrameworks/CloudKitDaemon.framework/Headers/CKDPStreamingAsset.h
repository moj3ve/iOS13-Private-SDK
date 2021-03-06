//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class CKDPStreamingAssetIdentifier, CKDPStreamingAssetRetrieveAssetResponse, CKDPStreamingAssetSaveAssetRequest, CKDPStreamingAssetSaveAssetResponse;

__attribute__((visibility("hidden")))
@interface CKDPStreamingAsset : PBCodable <NSCopying>
{
    CKDPStreamingAssetIdentifier *_assetId;
    CKDPStreamingAssetRetrieveAssetResponse *_retrieveAssetResponse;
    CKDPStreamingAssetSaveAssetRequest *_saveAssetRequest;
    CKDPStreamingAssetSaveAssetResponse *_saveAssetResponse;
}

@property(retain, nonatomic) CKDPStreamingAssetRetrieveAssetResponse *retrieveAssetResponse; // @synthesize retrieveAssetResponse=_retrieveAssetResponse;
@property(retain, nonatomic) CKDPStreamingAssetSaveAssetResponse *saveAssetResponse; // @synthesize saveAssetResponse=_saveAssetResponse;
@property(retain, nonatomic) CKDPStreamingAssetSaveAssetRequest *saveAssetRequest; // @synthesize saveAssetRequest=_saveAssetRequest;
@property(retain, nonatomic) CKDPStreamingAssetIdentifier *assetId; // @synthesize assetId=_assetId;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasRetrieveAssetResponse;
@property(readonly, nonatomic) BOOL hasSaveAssetResponse;
@property(readonly, nonatomic) BOOL hasSaveAssetRequest;
@property(readonly, nonatomic) BOOL hasAssetId;

@end

