//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKZeusFramedComplicationView.h>

#import <NanoTimeKitCompanion/NTKStopwatchComplicationDisplay-Protocol.h>

@class NTKColoringLabel;

@interface NTKZeusStopwatchComplicationView : NTKZeusFramedComplicationView <NTKStopwatchComplicationDisplay>
{
    NTKColoringLabel *_label;
    long long _stopwatchState;
}

// - (void).cxx_destruct;
- (id)_createLabel;
- (void)applyTransitionFraction:(double)arg1 fromPalette:(id)arg2 toPalette:(id)arg3;
- (void)applyPalette:(id)arg1;
- (CGRect)contentFrame;
- (void)layoutSubviews;
- (void)setStopwatchState:(long long)arg1 elapsedTime:(double)arg2 shouldPauseTextCountdown:(BOOL)arg3 timeTravelDate:(id)arg4;
- (id)init;

@end

