//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, AVVideoComposition;

@interface _PXLivePhotoTrimScrubberLoupeViewImageRequest : NSObject
{
    AVAsset *_asset;
    AVVideoComposition *_videoComposition;
    double _scale;
    struct CGSize _imageSize;
    CDStruct_1b6d18a9 _sourceTime;
}

@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) CDStruct_1b6d18a9 sourceTime; // @synthesize sourceTime=_sourceTime;
@property(retain, nonatomic) AVVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isValid;

@end
