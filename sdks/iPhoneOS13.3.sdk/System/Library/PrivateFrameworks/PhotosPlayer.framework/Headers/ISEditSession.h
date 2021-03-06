//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, AVAssetExportSession, CIContext, CIImage, NSDictionary, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface ISEditSession : NSObject
{
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_renderQueue;
    AVAsset *_videoAsset;
    CDStruct_1b6d18a9 _inputVideoDuration;
    CDStruct_1b6d18a9 _photoTime;
    CGImageSource _inputImageSource;
    unsigned int _inputOrientation;
    NSDictionary *_inputImageProperties;
    CIContext *_renderContext;
    AVAssetExportSession *_exportSession;
    CIImage *_inputImage;
    CIImage *_subsampledInputImage;
    long long _subsampleFactor;
    CIImage *_outputImage;
    CIImage *_scaledOutputImage;
    double _inputVideoScale;
    CGSize _inputVideoScaleRoundingError;
    id /* CDUnknownBlockType */ _frameProcessor;
    NSString *_temporaryDirectory;
    NSURL *_lastTemporaryVideoURL;
    NSString *_uniqueIdentifier;
    BOOL _isExporting;
    float _audioVolume;
}

+ (id)_createTemporaryDirectory;
+ (id)temporaryDirectory;
@property float audioVolume; // @synthesize audioVolume=_audioVolume;
@property(readonly) CDStruct_1b6d18a9 photoTime; // @synthesize photoTime=_photoTime;
// - (void).cxx_destruct;
- (void)cancel;
- (void)_exportToDestination:(id)arg1 options:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)exportToDestination:(id)arg1 options:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (id)_temporaryURLOfType:(id)arg1;
- (id)_outputVideoMetadata;
- (void)_renderVideoToURL:(id)arg1 fileType:(id)arg2 targetSize:(CGSize)arg3 volume:(float)arg4 completionHandler:(id /* CDUnknownBlockType */)arg5;
- (id)_outputImageProperties;
- (double)_targetScaleForTargetSize:(CGSize)arg1;
- (void)_renderImageWithTargetSize:(CGSize)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_renderImageToURL:(id)arg1 fileType:(id)arg2 targetSize:(CGSize)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (BOOL)_canRenderAtPlaybackTime;
- (void)_prepareForPlaybackWithTargetSize:(CGSize)arg1 options:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)_cancelCurrentExportIfNeeded;
- (void)prepareForPlaybackWithTargetSize:(CGSize)arg1 options:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (id)_processImage:(id)arg1 scale:(double)arg2 error:(id )arg3;
- (CGSize)_outputVideoSizeForScale:(double)arg1;
- (id)_videoCompositionForTargetSize:(CGSize)arg1;
- (CGSize)_outputVideoSize;
@property(readonly) CGSize outputVideoSize;
- (CGSize)_outputImageSize;
@property(readonly) CGSize outputImageSize;
- (id)_outputImage;
- (id)outputImage;
- (double)_inputVideoScale;
- (CGAffineTransform)_inputVideoTransform;
- (CGSize)_inputVideoSize;
- (id)_inputVideoTrack;
- (CGSize)_inputImageSize;
- (id)inputImageForRenderScale:(double)arg1;
- (id)_scaledInputImageForTargetScale:(double)arg1;
- (id)_loadInputImageWithSubsampleFactor:(long long)arg1;
- (id)_loadInputImage;
- (id)_inputImage;
@property(readonly) CIImage *inputImage;
- (id)_loadInputImageProperties;
- (id)_inputImageProperties;
- (id)imageProperties;
@property(copy) id /* CDUnknownBlockType */ frameProcessor;
- (unsigned int)_loadInputImageOrientation;
- (unsigned int)_inputOrientation;
@property(readonly) unsigned int orientation;
- (CDStruct_1b6d18a9)_loadInputVideoDuration;
- (CDStruct_1b6d18a9)_inputVideoDuration;
@property(readonly) CDStruct_1b6d18a9 duration;
- (void)dealloc;
- (id)initWithPhotoURL:(id)arg1 videoURL:(id)arg2 photoTime:(CDStruct_1b6d18a9)arg3 photoOrientation:(unsigned int)arg4;
- (id)init;

@end

