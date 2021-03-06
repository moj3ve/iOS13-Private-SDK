//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber;

__attribute__((visibility("hidden")))
@interface STUsageReportGraphDataSet : NSObject
{
    NSUInteger _timePeriod;
    NSUInteger _itemType;
    NSNumber *_total;
    NSNumber *_max;
    NSNumber *_average;
    double _averageAsPercentageOfMax;
    NSArray *_dataPoints;
}

@property(copy, nonatomic) NSArray *dataPoints; // @synthesize dataPoints=_dataPoints;
@property(nonatomic) double averageAsPercentageOfMax; // @synthesize averageAsPercentageOfMax=_averageAsPercentageOfMax;
@property(copy, nonatomic) NSNumber *average; // @synthesize average=_average;
@property(copy, nonatomic) NSNumber *max; // @synthesize max=_max;
@property(copy, nonatomic) NSNumber *total; // @synthesize total=_total;
@property(nonatomic) NSUInteger itemType; // @synthesize itemType=_itemType;
@property(nonatomic) NSUInteger timePeriod; // @synthesize timePeriod=_timePeriod;
// - (void).cxx_destruct;
- (id)initEmptyDataSetWithTimePeriod:(NSUInteger)arg1 referenceDate:(id)arg2;
- (id)initWithTimePeriod:(NSUInteger)arg1 itemType:(NSUInteger)arg2 total:(id)arg3 max:(id)arg4 average:(id)arg5 averageAsPercentageOfMax:(double)arg6 dataPoints:(id)arg7;

@end

