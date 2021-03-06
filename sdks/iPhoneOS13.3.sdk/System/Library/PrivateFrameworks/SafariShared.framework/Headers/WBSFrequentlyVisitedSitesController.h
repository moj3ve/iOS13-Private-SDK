//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, WBSFrequentlyVisitedSitesBannedURLStore, WBSHistory;

@interface WBSFrequentlyVisitedSitesController : NSObject
{
    WBSFrequentlyVisitedSitesBannedURLStore *_bannedURLStore;
    double _timeOfLastFrequentlyVisitedSitesComputation;
    WBSHistory *_history;
}

+ (float)scoreWithHistoryItemForVisitScoring:(id)arg1 historyItemForURLScoring:(id)arg2 atTime:(double)arg3 withMinimumVisitCount:(NSUInteger)arg4;
+ (float)scoreWithHistoryItemForVisitScoring:(id)arg1 historyItemForURLScoring:(id)arg2 atTime:(double)arg3;
+ (float)scoreForHistoryItem:(id)arg1 atTime:(double)arg2 withMinimumVisitCount:(NSUInteger)arg3;
+ (float)scoreForHistoryItem:(id)arg1 atTime:(double)arg2;
// - (void).cxx_destruct;
- (void)_postFrequentlyVisitedSitesDidChangeNotification;
- (BOOL)_saveFrequentlyVisitedSites:(id)arg1;
- (id)_canonicalizedFavoritesURLStringSet;
- (void)_updateFrequentlyVisitedSitesWithCandidates:(id)arg1;
- (float)_scoreForHistoryItem:(id)arg1;
- (id)_computeFrequentlyVisitedSiteCandidates;
- (void)_recomputeFrequentlyVisitedSitesNow;
- (void)clearFrequentlyVisitedSites;
- (BOOL)recomputeFrequentlyVisitedSitesIfNecessary;
@property(readonly, nonatomic) NSArray *frequentlyVisitedSites;
- (id)initWithHistory:(id)arg1 bannedURLStore:(id)arg2;

@end

