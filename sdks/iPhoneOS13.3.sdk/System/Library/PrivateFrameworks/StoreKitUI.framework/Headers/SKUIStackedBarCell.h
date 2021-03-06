//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UILabel, UIView;

__attribute__((visibility("hidden")))
@interface SKUIStackedBarCell : UIButton
{
    BOOL _expanded;
    UILabel *_expandedLabel;
    UIButton *_backButton;
    UIView *_separator;
}

@property(readonly, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) BOOL expanded; // @synthesize expanded=_expanded;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setTitle:(id)arg1 forState:(NSUInteger)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

