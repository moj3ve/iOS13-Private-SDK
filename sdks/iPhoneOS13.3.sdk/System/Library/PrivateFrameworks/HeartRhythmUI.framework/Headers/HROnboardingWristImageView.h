//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class HRElectrocardiogramSessionSimulationView, UIImageView;

@interface HROnboardingWristImageView : UIView
{
    UIImageView *_backgroundImageView;
    HRElectrocardiogramSessionSimulationView *_screenView;
}

@property(readonly, nonatomic) HRElectrocardiogramSessionSimulationView *screenView; // @synthesize screenView=_screenView;
@property(readonly, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
// - (void).cxx_destruct;
- (void)setTimeRemaining:(double)arg1;
- (void)setUpUI;
- (void)setContentMode:(long long)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

