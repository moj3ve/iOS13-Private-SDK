//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class FUAirline;

__attribute__((visibility("hidden")))
@interface FUFlightCodeShare : NSObject <NSSecureCoding>
{
    FUAirline *_airline;
    NSUInteger _flightNumber;
}

+ (BOOL)supportsSecureCoding;
@property NSUInteger flightNumber; // @synthesize flightNumber=_flightNumber;
@property(retain) FUAirline *airline; // @synthesize airline=_airline;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

