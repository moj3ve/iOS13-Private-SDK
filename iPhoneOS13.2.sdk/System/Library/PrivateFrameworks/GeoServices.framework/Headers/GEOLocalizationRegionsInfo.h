//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface GEOLocalizationRegionsInfo : NSObject
{
    NSDictionary *_regions;
    struct os_unfair_lock_s _regionsLock;
}

- (_Bool)needsLocalizationForKey:(const struct _GEOTileKey *)arg1 language:(id)arg2;
- (void)reset;
- (id)init;

@end
