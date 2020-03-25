//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSDate, NSNumber, NSString, SALocation;

@interface SALocalSearchVehicleEvent : SADomainObject
{
}

+ (id)vehicleEventWithDictionary:(id)arg1 context:(id)arg2;
+ (id)vehicleEvent;
@property(copy, nonatomic) NSString *vehicleIdentifier;
@property(copy, nonatomic) NSNumber *userSetLocation;
@property(copy, nonatomic) NSString *notes;
@property(retain, nonatomic) SALocation *location;
@property(copy, nonatomic) NSDate *date;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
