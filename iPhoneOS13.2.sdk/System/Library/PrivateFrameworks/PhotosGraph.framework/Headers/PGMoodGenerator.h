//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PGManager, PGMoodGeneratorOptions, PGMoodVector, PHAssetCollection;

@interface PGMoodGenerator : NSObject
{
    PHAssetCollection *_assetCollection;
    PGManager *_graphManager;
    unsigned long long _suggestedMood;
    PGMoodVector *_positiveMoodVector;
    PGMoodVector *_negativeMoodVector;
    PGMoodVector *_historyWeightedPositiveMoodVector;
    PGMoodGeneratorOptions *_options;
    double _positiveThreshold;
    double _negativeThreshold;
}

@property double negativeThreshold; // @synthesize negativeThreshold=_negativeThreshold;
@property double positiveThreshold; // @synthesize positiveThreshold=_positiveThreshold;
@property(retain) PGMoodGeneratorOptions *options; // @synthesize options=_options;
- (void)_processMoodSources;
- (id)historyWeightedPositiveMoodVector;
- (id)negativeMoodVector;
- (id)positiveMoodVector;
- (unsigned long long)forbiddenMoods;
- (unsigned long long)recommendedMoods;
- (unsigned long long)suggestedMood;
- (id)_moodSources;
- (id)initWithAssetCollection:(id)arg1 graphManager:(id)arg2 options:(id)arg3;

@end
