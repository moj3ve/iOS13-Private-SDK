//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class HRListItemLabel, UILabel;

@interface HRTitledListItemLabel : UIView
{
    HRListItemLabel *_listItemLabel;
    UILabel *_bodyLabel;
    long long _currentUserInterfaceStyle;
}

@property(nonatomic) long long currentUserInterfaceStyle; // @synthesize currentUserInterfaceStyle=_currentUserInterfaceStyle;
@property(retain, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(retain, nonatomic) HRListItemLabel *listItemLabel; // @synthesize listItemLabel=_listItemLabel;
// - (void).cxx_destruct;
- (double)_bodyLabelToBottom;
- (id)_bodyLabelFont;
- (double)_listItemLabelToBody;
- (void)_updateCurrentUserInterfaceStyleIfNeeded;
- (void)_setUpConstraints;
- (void)_setUpUI;
- (void)layoutSubviews;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (id)initWithView:(id)arg1 size:(CGSize)arg2 title:(id)arg3 body:(id)arg4;

@end

