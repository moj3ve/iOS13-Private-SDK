//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSData, NSDictionary, NSString, _SFPBFlightLeg;

@protocol _SFPBFlight <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSString *carrierPhoneNumber;
@property(copy, nonatomic) NSString *operatorFlightNumber;
@property(copy, nonatomic) NSString *operatorCarrierCode;
@property(copy, nonatomic) NSArray *legs;
@property(copy, nonatomic) NSString *flightNumber;
@property(copy, nonatomic) NSString *carrierName;
@property(copy, nonatomic) NSString *carrierCode;
@property(copy, nonatomic) NSString *flightID;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBFlightLeg *)legsAtIndex:(NSUInteger)arg1;
- (NSUInteger)legsCount;
- (void)addLegs:(_SFPBFlightLeg *)arg1;
- (void)clearLegs;
@end
