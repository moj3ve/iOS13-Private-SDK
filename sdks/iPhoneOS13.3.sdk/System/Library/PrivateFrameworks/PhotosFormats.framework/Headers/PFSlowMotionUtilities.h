//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PFSlowMotionUtilities : NSObject
{
}

+ (CDStruct_e83c9415)adjustTimeRange:(CDStruct_e83c9415)arg1 forNewStartTime:(CDStruct_1b6d18a9)arg2 endTime:(CDStruct_1b6d18a9)arg3;
+ (id)audioMixForScaledComposition:(id)arg1 timeRangeMapper:(id)arg2;
+ (CDStruct_e83c9415)_timeRangeFromTime:(float)arg1 toTime:(float)arg2;
+ (id)_setVolume:(float)arg1 forSlowMotionRegionsInTrack:(id)arg2 timeRangeMapper:(id)arg3;
+ (id)exportPresetForAsset:(id)arg1 preferredPreset:(id)arg2;
+ (void)configureExportSession:(id)arg1 forcePreciseConversion:(BOOL)arg2;
+ (double)_scaleWithinComposition:(id)arg1 fromCursor:(double)arg2 timeStep:(double)arg3 rate:(float)arg4 timeRangeMapper:(id)arg5;
+ (BOOL)_scaleComposition:(id)arg1 baseDuration:(double)arg2 slowMotionRate:(float)arg3 slowMotionRegions:(id)arg4 forExport:(BOOL)arg5 outTimeRangeMapper:(id )arg6;
+ (id)timeRangeMapperForSourceDuration:(double)arg1 slowMotionRate:(float)arg2 slowMotionTimeRange:(CDStruct_e83c9415)arg3 forExport:(BOOL)arg4;
+ (id)_slowMotionRegionsFromSlowMotionTimeRange:(CDStruct_e83c9415)arg1;
+ (id)_scaledCompositionForAsset:(id)arg1 slowMotionRate:(float)arg2 slowMotionTimeRange:(CDStruct_e83c9415)arg3 forExport:(BOOL)arg4 outTimeRangeMapper:(id )arg5;
+ (BOOL)_isValidSlowMotionTimeRange:(CDStruct_e83c9415)arg1;
+ (BOOL)_isValidSlowMotionRate:(float)arg1;
+ (id)assetFromVideoAsset:(id)arg1 slowMotionRate:(float)arg2 slowMotionTimeRange:(CDStruct_e83c9415)arg3 forExport:(BOOL)arg4 outAudioMix:(id )arg5 outTimeRangeMapper:(id )arg6;
+ (id)slowMotionSourceAssetPropertyKeys;
+ (int)preferredTimeScale;
+ (id)sharedConfiguration;

@end

