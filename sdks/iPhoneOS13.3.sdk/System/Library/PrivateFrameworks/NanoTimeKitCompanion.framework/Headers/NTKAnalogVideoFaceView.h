//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKAnalogFaceView.h>

#import <NanoTimeKitCompanion/NTKColorCircularUtilitarianFaceViewComplicationFactoryDelegate-Protocol.h>
#import <NanoTimeKitCompanion/NTKEditOptionTransitioningViewDelegate-Protocol.h>
#import <NanoTimeKitCompanion/NTKVideoPlayerFaceViewDelegate-Protocol.h>

@class NTKColorCircularUtilitarianFaceViewComplicationFactory, NTKEditOptionTransitioningView, NTKFaceViewTapControl, NTKVideoPlayerView, UIColor, UIView;

@interface NTKAnalogVideoFaceView : NTKAnalogFaceView <NTKColorCircularUtilitarianFaceViewComplicationFactoryDelegate, NTKVideoPlayerFaceViewDelegate, NTKEditOptionTransitioningViewDelegate>
{
    long long _previousDataMode;
    UIColor *_complicationColor;
    NTKFaceViewTapControl *_tapToLaunchButton;
    UIView *_backgroundContainerView;
    NTKEditOptionTransitioningView *_transitioningView;
    NTKVideoPlayerView *_videoPlayerView;
    NTKColorCircularUtilitarianFaceViewComplicationFactory *_faceViewComplicationFactory;
    CGSize _videoDialSize;
}

@property(nonatomic) CGSize videoDialSize; // @synthesize videoDialSize=_videoDialSize;
@property(retain, nonatomic) NTKColorCircularUtilitarianFaceViewComplicationFactory *faceViewComplicationFactory; // @synthesize faceViewComplicationFactory=_faceViewComplicationFactory;
@property(retain, nonatomic) NTKVideoPlayerView *videoPlayerView; // @synthesize videoPlayerView=_videoPlayerView;
// - (void).cxx_destruct;
- (double)_complicationAlphaForEditMode:(long long)arg1;
- (double)_contentAlphaForEditMode:(long long)arg1;
- (double)_handAlphaForEditMode:(long long)arg1;
- (id)_slotForUtilitySlot:(long long)arg1;
- (long long)_utilitySlotForSlot:(id)arg1;
- (UIEdgeInsets)_insetsForDialSize:(CGSize)arg1;
- (void)_transformVideoPlayerView:(NSUInteger)arg1;
- (void)customizeFaceViewForListing:(id)arg1 changeEvent:(NSUInteger)arg2 animated:(BOOL)arg3;
- (void)videoDidBeginPlayingQueuedVideo;
- (void)videoDidFinishPlayingToEnd;
- (BOOL)_supportsUnadornedSnapshot;
- (BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (long long)_keylineStyleForComplicationSlot:(id)arg1;
- (id)_keylineViewForComplicationSlot:(id)arg1;
- (NSUInteger)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (BOOL)shouldFadeIncomingView;
- (id)imageForEditOption:(id)arg1;
- (long long)_complicationPickerStyleForSlot:(id)arg1;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_cleanupAfterTransitionToOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_cleanupAfterTransitionComplicationSlot:(id)arg1 selectedComplication:(id)arg2;
- (void)_tearDownTransitioningView:(BOOL)arg1;
- (void)_setupTransitioningViewIfNeeded:(BOOL)arg1;
- (void)_cleanupAfterEditing;
- (void)_prepareForEditing;
- (BOOL)_shouldAnimateComplicationsOnTap;
- (id)_complicationsTapColor;
- (id)_complicationsEditingColor;
- (id)_complicationsForegroundColor;
- (id)_complicationsCompanionForegroundColor;
- (id)_complicationsPlatterColor;
- (void)_faceLibraryDismissed;
- (CGPoint)_contentCenterOffset;
- (id)_pickerMaskForSlot:(id)arg1;
- (void)_curvedComplicationCircleRadius:(double )arg1 centerAngle:(double )arg2 maxAngularWidth:(double )arg3 circleCenter:(CGPoint )arg4 interior:(BOOL )arg5 forSlot:(id)arg6;
- (BOOL)_slotSupportsCurvedText:(id)arg1;
- (BOOL)slotUsesCurvedText:(id)arg1;
- (void)_configureTimeView:(id)arg1;
- (id)_tapHighlightImage;
- (void)_faceViewWasTapped;
- (void)faceViewWasTapped:(id)arg1;
- (void)handleScreenBlanked;
- (void)_handleEitherScreenWake;
- (void)_handleOrdinaryScreenWake;
- (void)_handleWristRaiseScreenWake;
- (void)_cleanupAfterOrb:(BOOL)arg1;
- (void)_prepareForOrb;
- (void)_applySlow;
- (void)_applyFrozen;
- (void)_setVideoPlayerDataSource:(id)arg1;
- (void)_customizeVideoPlayerOnSetup;
- (void)setupVideoPlayerView;
- (void)layoutSubviews;
- (void)_applyDataMode;
- (void)setDataMode:(long long)arg1;
- (double)_minimumBreathingScaleForComplicationSlot:(id)arg1;
- (BOOL)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2;
- (NSUInteger)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (double)keylineStyleForComplicationSlot:(id)arg1;
- (double)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (void)_loadLayoutRules;
- (id)_detachedComplicationDisplays;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (long long)_legacyLayoutOverrideforComplicationType:(NSUInteger)arg1 slot:(id)arg2;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)setNormalComplicationDisplayWrapper:(id)arg1 forSlot:(id)arg2;
- (void)_unloadSnapshotContentViews;
- (void)_loadSnapshotContentViews;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;

@end
