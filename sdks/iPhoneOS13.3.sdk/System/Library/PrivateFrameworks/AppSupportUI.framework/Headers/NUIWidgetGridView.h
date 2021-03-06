//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NUIContainerGridView;
@protocol NUIWidgetGridViewDataSource, NUIWidgetGridViewDelegate;

@interface NUIWidgetGridView : UIView
{
    NUIContainerGridView *_gridView;
    NSArray *_itemViews;
    CGSize _labelSizes[8];
    NSUInteger _currentLayout;
    id <NUIWidgetGridViewDataSource> _dataSource;
    id <NUIWidgetGridViewDelegate> _delegate;
    long long _imageStyle;
    long long _titleStyle;
    long long _subtitleStyle;
    double _centerAdjustmentAllowed;
    double _currentLabelOutset;
}

+ (NSUInteger)maxNumberOfItems;
+ (double)itemWidth;
@property(readonly, nonatomic) double currentLabelOutset; // @synthesize currentLabelOutset=_currentLabelOutset;
@property(nonatomic) double centerAdjustmentAllowed; // @synthesize centerAdjustmentAllowed=_centerAdjustmentAllowed;
@property(nonatomic) long long subtitleStyle; // @synthesize subtitleStyle=_subtitleStyle;
@property(nonatomic) long long titleStyle; // @synthesize titleStyle=_titleStyle;
@property(nonatomic) long long imageStyle; // @synthesize imageStyle=_imageStyle;
@property(nonatomic) __weak id <NUIWidgetGridViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <NUIWidgetGridViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_createGridViewIfNeeded;
- (double)horizontalMargin;
- (double)labelMinSpacing;
- (double)labelOutset;
- (void)generateItems;
- (CDStruct_c3b9c2ee)borrowableSpaceForCellAtIndex:(NSUInteger)arg1;
- (CDStruct_c3b9c2ee)entitledExtraSpaceForCellAtIndex:(NSUInteger)arg1;
- (NSUInteger)maxNumberOfItems;
- (NSUInteger)itemsPerRow;
- (id)cellForGridViewItemAtIndex:(long long)arg1;
- (void)reloadData;
- (void)contentSizeDidChange;
- (id)initWithDataSource:(id)arg1 delegate:(id)arg2;
- (long long)currentLayout;

@end

