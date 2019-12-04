//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSNumber;

@interface ICSByDayValue : NSObject <NSSecureCoding>
{
    NSNumber *_number;
    long long _weekday;
}

+ (_Bool)supportsSecureCoding;
+ (id)byDayValueFromICSString:(id)arg1;
+ (long long)weekdayFromICSString:(id)arg1;
@property(nonatomic) long long weekday; // @synthesize weekday=_weekday;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) NSNumber *number;
- (id)initWithWeekday:(long long)arg1 number:(id)arg2;
- (id)initWithWeekday:(long long)arg1;
- (long long)compare:(id)arg1;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

@end
