//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface TSImageCache : NSObject
{
    MISSING_TYPE *downloader;
    MISSING_TYPE *processor;
    MISSING_TYPE *underlyingCache;
    MISSING_TYPE *fetchDeduper;
    MISSING_TYPE *mainLRU;
}

// - (void).cxx_destruct;
- (id)init;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)dealloc;
- (id)initWithUnderlyingCache:(id)arg1 processor:(id)arg2 downloader:(id)arg3;

@end

