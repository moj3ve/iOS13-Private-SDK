//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer;

@interface DOCDeterminateProgressRingView : UIView
{
    CALayer *_squareLayer;
    BOOL _canShowStopButton;
    double _progress;
}

+ (Class)layerClass;
@property(nonatomic) BOOL canShowStopButton; // @synthesize canShowStopButton=_canShowStopButton;
@property(nonatomic) double progress; // @synthesize progress=_progress;
// - (void).cxx_destruct;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)layoutSubviews;
- (void)_updateShapePath;
- (void)setTintColor:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

