//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

@class CSBatteryChargingView, NSMutableArray, NSTimer;
@protocol SBLockScreenBatteryChargingViewControllerDelegate;

@interface SBLockScreenBatteryChargingViewController : CSCoverSheetViewControllerBase
{
    BOOL _shouldDisplayBattery;
    CSBatteryChargingView *_chargingView;
    NSTimer *_visibilityTimer;
    NSMutableArray *_connectedDevices;
    id <SBLockScreenBatteryChargingViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SBLockScreenBatteryChargingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (long long)presentationStyle;
- (void)_visibilityTimerFired:(id)arg1;
- (void)showChargeLevelWithBatteryVisible:(BOOL)arg1;
- (id)chargingView;
- (BOOL)batteryVisible;
- (void)_clearVisibilityTimer;
- (void)prepareForDismissalWithAnimation:(BOOL)arg1;
- (void)presentWithAnimation:(BOOL)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initForDisplayOfBattery:(BOOL)arg1;

@end
