//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _PASLock;

@interface PPPeopleSuggester : NSObject
{
    _PASLock *_lock;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)_sweepCache;
- (id)_rankedContactIdentifiersMatchingName:(id)arg1;
- (double)_cacheEntryAgeThresholdSecondsSince1970;
- (id)rankedContactIdentifiersMatchingName:(id)arg1;
- (id)rankedContactIdentifiers;
- (id)init;

@end

