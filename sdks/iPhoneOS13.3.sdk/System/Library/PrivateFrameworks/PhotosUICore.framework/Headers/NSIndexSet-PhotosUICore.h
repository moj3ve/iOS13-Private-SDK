//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSIndexSet.h>

@class NSString;

@interface NSIndexSet (PhotosUICore)
@property(readonly, nonatomic) NSRange px_coveringRange;
- (id)px_indexSetAdjustedForInsertions:(id)arg1;
- (id)px_indexSetAdjustedForDeletions:(id)arg1;
- (id)px_intersectionWithIndexSet:(id)arg1;
@property(readonly, nonatomic) NSString *px_shortDescription;
- (id)px_indexesInRange:(NSRange)arg1;
@end

