//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplicationDisplay-Protocol.h>

@class NSDate;

#ifndef NTKStopwatchComplicationDisplay_Protocol
#define NTKStopwatchComplicationDisplay_Protocol

@protocol NTKStopwatchComplicationDisplay <NTKComplicationDisplay>
- (void)setStopwatchState:(long long)arg1 elapsedTime:(double)arg2 shouldPauseTextCountdown:(BOOL)arg3 timeTravelDate:(NSDate *)arg4;
@end

#endif

