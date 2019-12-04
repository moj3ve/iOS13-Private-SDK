//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOTileLoader, NSString;

__attribute__((visibility("hidden")))
@interface GEOMapFeatureTileFinder : NSObject
{
    unsigned long long _zoomLevel;
    int _tileSize;
    int _tileScale;
    int _tileSetStyle;
    NSString *_tileLoaderClientIdentifier;
    GEOTileLoader *_tileLoader;
}

- (id)_tileLoaderClientIdentifier;
- (id)_findTilesInList:(id)arg1 allowNetwork:(_Bool)arg2 queue:(id)arg3 handler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (void)cancel;
- (id)findTilesAround:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 allowNetwork:(_Bool)arg3 queue:(id)arg4 handler:(id /* block */)arg5 completionHandler:(id /* block */)arg6;
- (id)findTileWithKey:(struct _GEOTileKey)arg1 allowNetwork:(_Bool)arg2 queue:(id)arg3 handler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (id)initWithZoomLevel:(unsigned long long)arg1 tileSize:(int)arg2 tileScale:(int)arg3 tileSetStyle:(int)arg4 tileLoader:(id)arg5;
- (id)initWithZoomLevel:(unsigned long long)arg1 tileSize:(int)arg2 tileScale:(int)arg3 tileSetStyle:(int)arg4;
- (id)initWithTileLoader:(id)arg1;

@end
