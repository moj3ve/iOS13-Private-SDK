//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKGraphViewController.h>

@interface HKScalarGraphViewController : HKGraphViewController
{
    double _minimumHeight;
}

@property(readonly, nonatomic) double minimumHeight; // @synthesize minimumHeight=_minimumHeight;
- (void)_setupGraphViewSelectionStyle;
- (id)_buildGraphViewWithLabelDimension:(id)arg1 labelEndings:(long long)arg2;
- (void)_pinView:(id)arg1 toParentView:(id)arg2;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithMinimumHeight:(double)arg1;
- (id)initWithMinimumHeight:(double)arg1 labelDimension:(id)arg2 labelEndings:(long long)arg3;

@end
