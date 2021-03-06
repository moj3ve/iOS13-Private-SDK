//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOMapRequest.h>

@class GEOZilchDecoder, NSError, NSObject;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface GEOZilchDecoderRequest : GEOMapRequest
{
    struct unique_ptr<geo::ZilchMapModel, std::__1::default_delete<geo::ZilchMapModel>> _mapModel;
    GEOZilchDecoder *_decoder;
    shared_ptr_27244a92 _message;
    id /* CDUnknownBlockType */ _pathHandler;
    id /* CDUnknownBlockType */ _errorHandler;
    NSError *_firstTileLoadingError;
    NSObject<OS_dispatch_semaphore> *_finishedSemaphore;
}

@property(copy) id /* CDUnknownBlockType */ errorHandler; // @synthesize errorHandler=_errorHandler;
@property(copy) id /* CDUnknownBlockType */ pathHandler; // @synthesize pathHandler=_pathHandler;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)cancel;
- (void)decodeWithPathHandler:(id /* CDUnknownBlockType */)arg1 errorHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_finishedDecodingWithPath:(Path_7969893c)arg1;
- (id)initWithDecoder:(id)arg1 message:(shared_ptr_27244a92)arg2;

@end

