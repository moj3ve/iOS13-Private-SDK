//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKDigitalFaceView.h>

#import <NanoTimeKitCompanion/NTKTimeModuleViewTapClient-Protocol.h>

@class CLKTimeFormatter, NSDateComponentsFormatter, NSString;

@interface NTKDigitalModularFaceView : NTKDigitalFaceView <NTKTimeModuleViewTapClient>
{
    unsigned long long _faceColor;
    _Bool _is24HourMode;
    CLKTimeFormatter *_dateFormatter;
    NSDateComponentsFormatter *_dayOffsetDateFormatter;
    NSDateComponentsFormatter *_subdayOffsetDateFormatter;
}

+ (void)_performIfNonRichModuleView:(id)arg1 actions:(id /* block */)arg2;
+ (id)_swatchImageForColorOption:(id)arg1 forDevice:(id)arg2;
- (void)_updateLocale;
- (void)_applyFaceColor:(unsigned long long)arg1 toModuleView:(id)arg2;
- (void)_enumerateModuleViewsWithBlock:(id /* block */)arg1;
- (id)_moduleViewForComplicationSlot:(id)arg1;
- (id)_complicationSlotsForRow:(unsigned long long)arg1;
- (double)_minimumBreathingScaleForComplicationSlot:(id)arg1;
- (_Bool)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2;
- (double)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (long long)complicationFamilyForSlot:(id)arg1;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (_Bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (struct UIEdgeInsets)_keylineLabelActiveAreaInsetsForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (struct CGRect)_keylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_configureForEditMode:(long long)arg1;
- (long long)_keylineStyleForComplicationSlot:(id)arg1;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (void)_loadLayoutRulesForState:(long long)arg1 withTopGap:(double)arg2 largeModuleHeight:(double)arg3;
- (void)_loadLayoutRules;
- (_Bool)_needsForegroundContainerView;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)performTapAction;
- (void)_unloadSnapshotContentViews;
- (void)_loadSnapshotContentViews;
- (unsigned long long)_timeLabelOptions;
- (id)_digitalTimeLabelStyleFromViewMode:(long long)arg1 faceBounds:(struct CGRect)arg2;
- (void)dealloc;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
