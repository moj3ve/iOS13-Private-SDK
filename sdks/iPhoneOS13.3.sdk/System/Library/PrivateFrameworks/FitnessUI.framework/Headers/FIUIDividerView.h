//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface FIUIDividerView : UIView
{
    UIImageView *_imageView;
    UIEdgeInsets _edgeInsets;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (CGSize)intrinsicContentSize;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

