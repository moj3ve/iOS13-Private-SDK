//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <HomeUI/HUQuickControlAuxiliaryView-Protocol.h>

@class NSArray, NSNumber, UILongPressGestureRecognizer, UIStackView;

@interface HUQuickControlSegmentedControl : UIView <HUQuickControlAuxiliaryView>
{
    id /* CDUnknownBlockType */ _selectionChangeHandler;
    NSNumber *_selectedSegmentIndex;
    NSArray *_segments;
    UIStackView *_segmentStackView;
    NSArray *_segmentViews;
    UILongPressGestureRecognizer *_gestureRecognizer;
    NSNumber *_trackingSegmentIndex;
}

@property(retain, nonatomic) NSNumber *trackingSegmentIndex; // @synthesize trackingSegmentIndex=_trackingSegmentIndex;
@property(retain, nonatomic) UILongPressGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(retain, nonatomic) NSArray *segmentViews; // @synthesize segmentViews=_segmentViews;
@property(retain, nonatomic) UIStackView *segmentStackView; // @synthesize segmentStackView=_segmentStackView;
@property(readonly, copy, nonatomic) NSArray *segments; // @synthesize segments=_segments;
@property(retain, nonatomic) NSNumber *selectedSegmentIndex; // @synthesize selectedSegmentIndex=_selectedSegmentIndex;
@property(copy, nonatomic) id /* CDUnknownBlockType */ selectionChangeHandler; // @synthesize selectionChangeHandler=_selectionChangeHandler;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL hasCenteredContent;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)ensureCorrectHeaderViewOrientation;
- (BOOL)preferVerticalLayout;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_setupConstraints;
- (void)_updateSegmentViewsForUILayoutDirection;
- (void)_updateSegmentSelectionStateAnimated:(BOOL)arg1;
- (void)_handleGesture:(id)arg1;
- (id)initWithSegments:(id)arg1;

@end

