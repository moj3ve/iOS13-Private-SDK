//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCalendar, NSDate, NSHashTable, NSSet;

@interface HKDateCache : NSObject
{
    NSDate *_startOfYesterdayMidnight;
    NSDate *_endOfYesterdayMidnight;
    NSDate *_startOfDayMidnight;
    NSDate *_endOfDayMidnight;
    NSDate *_oneMinuteBeforeEndOfDayMidnight;
    NSDate *_oneSecondBeforeEndOfDayMidnight;
    NSDate *_startOfTomorrowMidnight;
    NSDate *_endOfTomorrowMidnight;
    NSDate *_startOfRollingWeekMidnight;
    NSDate *_endOfRollingWeekMidnight;
    NSDate *_startOfRollingMonthMidnight;
    NSDate *_endOfRollingMonthMidnight;
    NSDate *_startOfRollingYear;
    NSDate *_endOfRollingYear;
    NSDate *_currentDate;
    NSHashTable *_observers;
    NSSet *_weekendDays;
    NSCalendar *_calendar;
}

@property(readonly, nonatomic) NSDate *endOfYesterdayMidnight; // @synthesize endOfYesterdayMidnight=_endOfYesterdayMidnight;
@property(readonly, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
// - (void).cxx_destruct;
- (void)_flushCacheAndNotifyObservers:(id)arg1;
- (void)flushCache;
- (BOOL)isDayOfWeekNumberOnWeekend:(id)arg1;
- (BOOL)isDateWithinLastRollingYear:(id)arg1;
- (BOOL)isDateWithinLastRollingMonth:(id)arg1;
- (BOOL)isDateInThisCalendarYear:(id)arg1;
- (BOOL)isDateInThisCalendarMonth:(id)arg1;
- (BOOL)isDateInTomorrow:(id)arg1;
- (BOOL)isDateInToday:(id)arg1;
- (BOOL)isDateInYesterday:(id)arg1;
- (id)weekendDays;
- (void)_notifyObserversDidUpdateOnNotification:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)endOfRollingYear:(id /* CDUnknownBlockType */)arg1;
- (id)startOfRollingYear:(id /* CDUnknownBlockType */)arg1;
- (id)endOfRollingMonth:(id /* CDUnknownBlockType */)arg1;
- (id)startOfRollingMonth:(id /* CDUnknownBlockType */)arg1;
- (id)endOfRollingWeek:(id /* CDUnknownBlockType */)arg1;
- (id)startOfRollingWeek:(id /* CDUnknownBlockType */)arg1;
- (id)endOfRollingDay:(id /* CDUnknownBlockType */)arg1;
- (id)startOfRollingDay:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) NSDate *endOfRollingYearMidnight;
@property(readonly, nonatomic) NSDate *startOfRollingYearMidnight;
@property(readonly, nonatomic) NSDate *endOfRollingMonthMidnight;
@property(readonly, nonatomic) NSDate *startOfRollingMonthMidnight;
@property(readonly, nonatomic) NSDate *endOfRollingWeekMidnight;
@property(readonly, nonatomic) NSDate *startOfRollingWeekMidnight;
@property(readonly, nonatomic) NSDate *endOfTomorrowMidnight;
@property(readonly, nonatomic) NSDate *startOfTomorrowMidnight;
@property(readonly, nonatomic) NSDate *oneSecondBeforeEndOfDayMidnight;
@property(readonly, nonatomic) NSDate *oneMinuteBeforeEndOfDayMidnight;
@property(readonly, nonatomic) NSDate *endOfDayMidnight;
@property(readonly, nonatomic) NSDate *startOfDayMidnight;
@property(readonly, nonatomic) NSDate *startOfYesterdayMidnight;
- (id)_currentDate;
- (void)_setCurrentDate:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithCalendar:(id)arg1;

@end

