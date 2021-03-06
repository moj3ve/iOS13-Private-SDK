//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSIndexSet;

@interface IKChangeSet : NSObject
{
    NSIndexSet *_addedIndexes;
    NSIndexSet *_removedIndexes;
    NSDictionary *_movedIndexesByNewIndex;
    NSDictionary *_updatedIndexesByNewIndex;
}

@property(readonly, copy, nonatomic) NSDictionary *updatedIndexesByNewIndex; // @synthesize updatedIndexesByNewIndex=_updatedIndexesByNewIndex;
@property(readonly, copy, nonatomic) NSDictionary *movedIndexesByNewIndex; // @synthesize movedIndexesByNewIndex=_movedIndexesByNewIndex;
@property(readonly, copy, nonatomic) NSIndexSet *removedIndexes; // @synthesize removedIndexes=_removedIndexes;
@property(readonly, copy, nonatomic) NSIndexSet *addedIndexes; // @synthesize addedIndexes=_addedIndexes;
// - (void).cxx_destruct;
- (id)changeSetByConvertingOldIndexesUsingChangeSet:(id)arg1 andNewIndexesUsingChangeSet:(id)arg2;
- (id)changeSetBySubtractingChangeSet:(id)arg1;
- (id)changeSetByConcatenatingChangeSet:(id)arg1;
- (long long)newIndexByShiftingOldIndex:(long long)arg1 grouped:(BOOL)arg2;
- (long long)oldIndexForNewIndex:(long long)arg1;
- (long long)newIndexForOldIndex:(long long)arg1;
- (id)initWithAddedIndexes:(id)arg1 removedIndexes:(id)arg2 movedIndexesByNewIndex:(id)arg3 updatedIndexesByNewIndex:(id)arg4;

@end

