//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface HDMCSymptomHistoryBuilder : NSObject
{
    NSMutableDictionary *_mostRecentDayBySymptom;
    unsigned long long _recentSymptoms;
}

@property(nonatomic) unsigned long long recentSymptoms; // @synthesize recentSymptoms=_recentSymptoms;
- (void)addSymptoms:(unsigned long long)arg1 forDayIndex:(long long)arg2;
- (id)initWithCurrentDayIndex:(long long)arg1;

@end
