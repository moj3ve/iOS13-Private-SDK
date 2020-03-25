//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <StoreKitUI/SKUIViewElementView-Protocol.h>

@class NSNumber, NSString, SKUIButtonViewElement, UIButton, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface SKUIPageTitledDividerCollectionViewCell : UICollectionViewCell <SKUIViewElementView>
{
    double _buttonContentHorizontalPadding;
    SKUIButtonViewElement *_buttonViewElement;
    UIEdgeInsets _contentEdgeInsets;
    UIEdgeInsets _contentInset;
    UIButton *_dividerButton;
    NSNumber *_dividerButtonImageRequestIdentifier;
    UILabel *_dividerLabel;
    UIEdgeInsets _imageVerticalPadding;
    UIEdgeInsets _internalHorizontalMargins;
    UIView *_leftLine;
    UIView *_rightLine;
    UIEdgeInsets _titleVerticalPadding;
    double _topEdgeInset;
}

+ (UIEdgeInsets)_titleVerticalPaddingForViewElement:(id)arg1;
+ (UIEdgeInsets)_imageVerticalPaddingForViewElement:(id)arg1;
+ (UIEdgeInsets)_contentEdgeInsetsForViewElement:(id)arg1;
+ (id)_attributedStringForViewElementText:(id)arg1 style:(id)arg2 context:(id)arg3;
+ (id)_attributedStringForDividerTitle:(id)arg1 context:(id)arg2;
+ (id)_attributedStringForButtonViewElement:(id)arg1 context:(id)arg2;
+ (double)viewElementInsetDividerHeight:(id)arg1;
+ (CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (CGSize)sizeThatFitsWidth:(double)arg1 dividerTitle:(id)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
@property(nonatomic) double topEdgeInset; // @synthesize topEdgeInset=_topEdgeInset;
// - (void).cxx_destruct;
- (id)_imageForImageViewElement:(id)arg1 returningRequestIdentifier:(out id )arg2 context:(id)arg3;
- (void)_buttonAction:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)applyLayoutAttributes:(id)arg1;
@property(copy, nonatomic) NSString *dividerTitle;
- (void)setColoringWithColorScheme:(id)arg1;
- (id)viewForElementIdentifier:(id)arg1;
- (BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3;
- (BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)setContentInset:(UIEdgeInsets)arg1;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)initWithFrame:(CGRect)arg1;

@end
