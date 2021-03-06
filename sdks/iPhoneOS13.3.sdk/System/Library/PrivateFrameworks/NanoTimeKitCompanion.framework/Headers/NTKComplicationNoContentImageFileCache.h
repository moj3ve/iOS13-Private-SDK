//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NTKTaskScheduler;

@interface NTKComplicationNoContentImageFileCache : NSObject
{
    NSMutableDictionary *_complicationNoContentImages;
    BOOL _cacheDirty;
    NTKTaskScheduler *_taskScheduler;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (BOOL)_flushCache;
- (void)_dirtyCache;
- (void)removeAllEntriesExceptThoseWithClientIdentifiers:(id)arg1;
- (void)setNoContentImages:(id)arg1 forClientIdentifier:(id)arg2;
- (id)noContentImagesForClientIdentifier:(id)arg1;
- (void)setImage:(id)arg1 forClientIdentifier:(id)arg2 family:(long long)arg3;
- (id)imageForClientIdentifier:(id)arg1 family:(long long)arg2;
- (void)dealloc;
- (id)init;

@end

