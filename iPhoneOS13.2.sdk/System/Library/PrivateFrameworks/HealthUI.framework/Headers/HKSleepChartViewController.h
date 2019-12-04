//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKInteractiveChartViewController.h>

#import <HealthUI/HKInteractiveChartViewObserver-Protocol.h>

@class HKSleepAnnotationViewDataSource, NSString;

@interface HKSleepChartViewController : HKInteractiveChartViewController <HKInteractiveChartViewObserver>
{
    _Bool _disableXAxisAndInteraction;
    HKSleepAnnotationViewDataSource *_annotationViewDataSource;
}

+ (id)_lessSaturatedColorWithColor:(id)arg1;
+ (id)_asleepColor;
+ (id)_inBedColor;
+ (id)_goalLineStrokeStyle;
+ (id)_generateDailyTimePeriodSeries;
+ (void)_titlesAndValuesWithSleepDay:(id)arg1 sleepPeriod:(id)arg2 context:(id)arg3 result:(id /* block */)arg4;
+ (id)_buildSleepAnalysisDataSourceWithHealthStore:(id)arg1 displayTypeController:(id)arg2;
+ (id)_buildSleepChartCacheWithHealthStore:(id)arg1 representativeDisplayType:(id)arg2 displayTypeController:(id)arg3 chartCacheController:(id)arg4;
+ (id)consistencyDisplayTypesWithHealthStore:(id)arg1 unitController:(id)arg2 displayTypeController:(id)arg3 chartCacheController:(id)arg4;
@property(retain, nonatomic) HKSleepAnnotationViewDataSource *annotationViewDataSource; // @synthesize annotationViewDataSource=_annotationViewDataSource;
@property(nonatomic) _Bool disableXAxisAndInteraction; // @synthesize disableXAxisAndInteraction=_disableXAxisAndInteraction;
- (id)seriesSelectionLineColorForGraphView:(id)arg1;
- (id)lollipopAnnotationColor;
- (void)updateSelectionAnnotationDataSourceForContext:(id)arg1 displayType:(id)arg2 timeScope:(long long)arg3;
- (id)makeAnnotationDataSource;
- (void)configureDisplayTypes:(id)arg1 timeScope:(long long)arg2 stackOffset:(long long)arg3;
- (id)calendarQueryDisplayType;
- (id)descriptionSpansForGraphView:(id)arg1;
- (void)primaryGraphViewControllerDidInitialize:(id)arg1;
- (id)initWithDisplayTypes:(id)arg1 healthStore:(id)arg2 unitPreferenceController:(id)arg3 dateCache:(id)arg4 chartDataCacheController:(id)arg5 selectedTimeScopeController:(id)arg6 initialXValue:(id)arg7 options:(unsigned long long)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
