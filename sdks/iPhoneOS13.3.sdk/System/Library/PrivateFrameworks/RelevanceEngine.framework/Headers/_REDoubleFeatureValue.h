//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REFeatureValue.h>

@interface _REDoubleFeatureValue : REFeatureValue
{
    double _value;
}

+ (id)featureValueWithDouble:(double)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)_integralFeatureValue;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (double)doubleValue;
- (NSUInteger)type;
- (id)initWithValue:(double)arg1;

@end

