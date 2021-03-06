//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/EDProcessor.h>

__attribute__((visibility("hidden")))
@interface CHPCategoryAndSeriesReordering : EDProcessor
{
}

- (void)reorderCategoryAndSeries:(id)arg1 sheet:(id)arg2 clearAxisReversedFlag:(BOOL)arg3;
- (void)applyProcessorToObject:(id)arg1 sheet:(id)arg2;
- (BOOL)isObjectSupported:(id)arg1;
- (void)reorderDataFormula:(id)arg1 dataPointCount:(NSUInteger)arg2 byRow:(BOOL)arg3;
- (long long)reorderDataValues:(id)arg1 dataPointCount:(NSUInteger)arg2;
- (void)reorderData:(id)arg1 dataPointCount:(NSUInteger)arg2 byRow:(BOOL)arg3;
- (void)reorderValueProperties:(id)arg1 dataPointCount:(NSUInteger)arg2;
- (void)reorderSeriesCategory:(id)arg1 dataPointCount:(NSUInteger)arg2 byRow:(BOOL)arg3;
- (void)applyCategoryReorderingPreprocessor:(id)arg1;
- (void)applySeriesReorderingPreprocessor:(id)arg1;
- (BOOL)isObjectSupportedForSeriesReorderingPreprocessor:(id)arg1 isCategoryOrderReversed:(BOOL)arg2;

@end

