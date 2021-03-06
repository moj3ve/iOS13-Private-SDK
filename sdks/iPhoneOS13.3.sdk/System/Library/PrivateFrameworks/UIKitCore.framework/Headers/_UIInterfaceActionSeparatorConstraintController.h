//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLayoutConstraint, UIView;
@protocol UIInterfaceActionVisualSeparatorDisplaying><UIInterfaceActionVisualSectionSeparatorDisplaying;

__attribute__((visibility("hidden")))
@interface _UIInterfaceActionSeparatorConstraintController : NSObject
{
    double _constantAxisDimension;
    UIView<UIInterfaceActionVisualSeparatorDisplaying><UIInterfaceActionVisualSectionSeparatorDisplaying> *_separatorView;
    NSLayoutConstraint *_fixedHeightConstraint;
    NSLayoutConstraint *_fixedWidthConstraint;
    long long _constantSizedAxis;
}

@property(nonatomic) long long constantSizedAxis; // @synthesize constantSizedAxis=_constantSizedAxis;
@property(readonly, nonatomic) NSLayoutConstraint *fixedWidthConstraint; // @synthesize fixedWidthConstraint=_fixedWidthConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *fixedHeightConstraint; // @synthesize fixedHeightConstraint=_fixedHeightConstraint;
@property(readonly, nonatomic) __weak UIView<UIInterfaceActionVisualSeparatorDisplaying><UIInterfaceActionVisualSectionSeparatorDisplaying> *separatorView; // @synthesize separatorView=_separatorView;
// - (void).cxx_destruct;
- (BOOL)_isFixedWidth;
- (void)_updateConstantSizedConstraints;
- (void)separatorViewDidUpdateConstraints;
@property(nonatomic) double constantAxisDimension; // @synthesize constantAxisDimension=_constantAxisDimension;
- (id)initWithSeparatorView:(id)arg1;

@end

