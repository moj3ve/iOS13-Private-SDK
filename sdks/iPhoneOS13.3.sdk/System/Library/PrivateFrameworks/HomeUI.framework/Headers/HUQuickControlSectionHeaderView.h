//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class NSArray, NSString, UILabel;

@interface HUQuickControlSectionHeaderView : UICollectionReusableView
{
    NSString *_titleText;
    UILabel *_titleLabel;
    NSArray *_labelConstraints;
}

+ (BOOL)requiresConstraintBasedLayout;
+ (double)estimatedHeight;
+ (id)_titleFont;
@property(retain, nonatomic) NSArray *labelConstraints; // @synthesize labelConstraints=_labelConstraints;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
// - (void).cxx_destruct;
- (void)updateConstraints;
- (void)prepareForReuse;
- (void)drawRect:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

