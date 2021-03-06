//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UIImageView, UIVisualEffectView, UIWindow;

@interface _TVAppLoadingView : UIView
{
    UIView *_wallpaperView;
    UIWindow *_overlayWindow;
    BOOL _hiding;
    double _timeout;
    double _delay;
    UIImageView *_maskView;
    UIVisualEffectView *_visualEffectView;
    UIActivityIndicatorView *_spinner;
}

+ (id)loadingScreen;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
// - (void).cxx_destruct;
- (void)didRotate:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 templateImage:(id)arg2;
- (double)hideAnimationDuration;
- (BOOL)isVisible;
- (void)hide;
- (void)timeout;
- (void)showOverKeyWindowWithSpinnerOnly:(BOOL)arg1;
- (void)showOverKeyWindow;
- (void)setLoadingDelay:(double)arg1;
- (void)setTimeout:(double)arg1;

@end

