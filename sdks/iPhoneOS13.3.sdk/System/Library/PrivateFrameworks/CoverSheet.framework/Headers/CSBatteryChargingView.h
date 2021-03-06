//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoverSheet/CSCoverSheetViewBase.h>

@class _UILegibilitySettings;

@interface CSBatteryChargingView : CSCoverSheetViewBase
{
    _UILegibilitySettings *_legibilitySettings;
    double _alignmentPercent;
}

+ (id)maskImageNameForExternalChargingBattery;
+ (id)maskImageNameForInternalChargingBattery;
+ (id)maskImageNameForChargingBattery;
+ (id)batteryChargingViewWithDoubleBattery;
+ (id)batteryChargingViewWithSingleBattery;
@property(nonatomic) double alignmentPercent; // @synthesize alignmentPercent=_alignmentPercent;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
// - (void).cxx_destruct;
- (double)_batteryOriginYForBatteryHeight:(double)arg1;
- (id)_chargePercentFont;
- (id)_updateChargeString:(id)arg1 oldLabel:(id)arg2;
@property(nonatomic) BOOL batteryVisible;
@property(readonly, nonatomic) double desiredVisibilityDuration;
@property(readonly, nonatomic) long long batteryCount;
- (void)setSecondaryBatteryText:(id)arg1 forBattery:(id)arg2;
- (void)setPrimaryBatteryText:(id)arg1 forBattery:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;

@end

