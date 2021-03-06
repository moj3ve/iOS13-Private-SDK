//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SBFInfiniteImpulseResponseFilter : NSObject
{
    NSUInteger _count;
    double _ffC;
    double _fbC;
    double _inputHistory;
    double _outputHistory;
    double _zeroGradientThreshold;
}

+ (id)lowpassInertiaFilterWithCoefficient:(double)arg1;
+ (id)lowpassFilterWithCoefficient:(double)arg1;
@property(nonatomic) double zeroGradientThreshold; // @synthesize zeroGradientThreshold=_zeroGradientThreshold;
- (void)dealloc;
- (void)resetToValue:(double)arg1;
- (BOOL)zeroGradient;
- (double)outputGradient;
- (double)output;
- (double)filterWithInput:(double)arg1;
- (void)setLowpassInertiaFilterCoefficient:(double)arg1;
- (id)initWithCount:(NSUInteger)arg1 feedforwardCoefficients:(double )arg2 feedbackCoefficients:(double )arg3;

@end

