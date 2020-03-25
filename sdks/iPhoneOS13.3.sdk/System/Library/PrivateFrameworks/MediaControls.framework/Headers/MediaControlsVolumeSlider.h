//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPVolumeSlider.h>

#import <MediaControls/MTVisualStylingProviderObservingPrivate-Protocol.h>

@class MTVisualStylingProvider;

__attribute__((visibility("hidden")))
@interface MediaControlsVolumeSlider : MPVolumeSlider <MTVisualStylingProviderObservingPrivate>
{
    MTVisualStylingProvider *_visualStylingProvider;
}

@property(retain, nonatomic) MTVisualStylingProvider *visualStylingProvider; // @synthesize visualStylingProvider=_visualStylingProvider;
// - (void).cxx_destruct;
- (void)providedStylesDidChangeForProvider:(id)arg1;
- (void)setMaximumTrackVisualProvider:(id)arg1;
- (void)setMinimumTrackVisualProvider:(id)arg1;
- (void)tintColorDidChange;
- (id)_thumbImageForStyle:(long long)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (CGRect)maximumValueImageRectForBounds:(CGRect)arg1;
- (CGRect)minimumValueImageRectForBounds:(CGRect)arg1;
- (CGRect)trackRectForBounds:(CGRect)arg1;
- (CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3;
- (id)createThumbView;
- (id)initWithFrame:(CGRect)arg1 style:(long long)arg2;

@end
