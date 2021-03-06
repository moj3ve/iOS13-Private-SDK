//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class TSKSegmentedControl;

@interface TSDDoubleSegmentedControlTableViewCell : UITableViewCell
{
    TSKSegmentedControl *mLeftSegmentedControl;
    TSKSegmentedControl *mRightSegmentedControl;
}

@property(readonly, nonatomic) TSKSegmentedControl *rightSegmentedControl; // @synthesize rightSegmentedControl=mRightSegmentedControl;
@property(readonly, nonatomic) TSKSegmentedControl *leftSegmentedControl; // @synthesize leftSegmentedControl=mLeftSegmentedControl;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithLeftSegmentedControl:(id)arg1 rightSegmentedControl:(id)arg2;

@end

