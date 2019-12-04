//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, UILabel;

@interface HKElectrocardiogramBulletedTextView : UIView
{
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    NSMutableArray *_bodyFirstBaselineConstraints;
}

@property(retain, nonatomic) NSMutableArray *bodyFirstBaselineConstraints; // @synthesize bodyFirstBaselineConstraints=_bodyFirstBaselineConstraints;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)updateConstraints;
- (void)_setupConstraints;
- (void)_setUpUI;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateLeadingDetailAttributedTextSize;
- (void)setDetailTextWithBullets:(id)arg1;
@property(readonly, nonatomic) NSString *detailText;
@property(retain, nonatomic) NSString *titleText;
- (id)init;

@end
