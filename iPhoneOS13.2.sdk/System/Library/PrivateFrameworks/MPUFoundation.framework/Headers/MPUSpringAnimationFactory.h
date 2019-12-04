//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPUFoundation/MPUAnimationFactory.h>

@interface MPUSpringAnimationFactory : MPUAnimationFactory
{
    double _damping;
    double _mass;
    double _stiffness;
    double _velocity;
}

+ (void)animateUsingSpringWithDamping:(double)arg1 mass:(double)arg2 stiffness:(double)arg3 velocity:(double)arg4 animations:(id /* block */)arg5 options:(unsigned long long)arg6 completion:(id /* block */)arg7;
@property(nonatomic) double velocity; // @synthesize velocity=_velocity;
@property(nonatomic) double stiffness; // @synthesize stiffness=_stiffness;
@property(nonatomic) double mass; // @synthesize mass=_mass;
@property(nonatomic) double damping; // @synthesize damping=_damping;
- (id)_newSpringAnimationForKeyPath:(id)arg1;
- (double)durationForEpsilon:(double)arg1;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;

@end
