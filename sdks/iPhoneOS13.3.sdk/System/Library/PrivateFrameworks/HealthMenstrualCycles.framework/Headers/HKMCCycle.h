//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class HKMCCycleSegment, NSNumber;

@interface HKMCCycle : NSObject <NSSecureCoding>
{
    HKMCCycleSegment *_menstruationSegment;
    HKMCCycleSegment *_fertileWindowSegment;
    NSNumber *_lastDayIndex;
}

+ (BOOL)supportsSecureCoding;
+ (id)_cycleWithMenstruationSegment:(id)arg1 fertileWindowSegment:(id)arg2 lastDayIndex:(id)arg3;
@property(readonly, nonatomic) NSNumber *lastDayIndex; // @synthesize lastDayIndex=_lastDayIndex;
@property(readonly, nonatomic) HKMCCycleSegment *fertileWindowSegment; // @synthesize fertileWindowSegment=_fertileWindowSegment;
@property(readonly, nonatomic) HKMCCycleSegment *menstruationSegment; // @synthesize menstruationSegment=_menstruationSegment;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)redactedDescription;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_initWithMenstruationSegment:(id)arg1 fertileWindowSegment:(id)arg2 lastDayIndex:(id)arg3;

@end

