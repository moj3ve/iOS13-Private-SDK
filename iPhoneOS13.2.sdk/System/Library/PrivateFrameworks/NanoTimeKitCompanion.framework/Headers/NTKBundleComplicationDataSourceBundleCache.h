//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface NTKBundleComplicationDataSourceBundleCache : NSObject
{
    NSMutableDictionary *_cachedBundles;
    struct os_unfair_lock_s _bundleLock;
}

+ (id)sharedBundleCache;
- (id)bundleAtPath:(id)arg1;
- (void)dealloc;
- (id)_init;

@end
