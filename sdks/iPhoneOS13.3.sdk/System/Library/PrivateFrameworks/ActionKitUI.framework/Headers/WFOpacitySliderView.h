//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UILabel, WFOpacitySlider;

__attribute__((visibility("hidden")))
@interface WFOpacitySliderView : UIControl
{
    WFOpacitySlider *_slider;
    UILabel *_opacityLabel;
}

@property(readonly, nonatomic) __weak UILabel *opacityLabel; // @synthesize opacityLabel=_opacityLabel;
@property(readonly, nonatomic) __weak WFOpacitySlider *slider; // @synthesize slider=_slider;
// - (void).cxx_destruct;
- (void)reset;
@property(readonly, nonatomic) double opacity;
- (void)didChangeOpacityValue:(id)arg1;
- (void)layoutSubviews;
- (id)init;

@end

