//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface GEOTileEditionUpdate : NSObject
{
    NSMutableArray *_entries;
    _Bool _flushEverything;
    _Bool _invalidateEverything;
}

@property(nonatomic) _Bool invalidateEverything; // @synthesize invalidateEverything=_invalidateEverything;
@property(nonatomic) _Bool flushEverything; // @synthesize flushEverything=_flushEverything;
- (void)tileset:(unsigned int *)arg1 edition:(unsigned int *)arg2 provider:(unsigned int *)arg3 invalidateOnly:(_Bool *)arg4 atIndex:(unsigned long long)arg5;
- (unsigned long long)tilesetCount;
- (void)addTileset:(unsigned int)arg1 edition:(unsigned int)arg2 provider:(unsigned int)arg3 invalidateOnly:(_Bool)arg4;
- (id)init;

@end
