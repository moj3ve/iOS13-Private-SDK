//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class Stock, StocksListBoxView, UIImageView, UILabel, UIView;

@interface StocksListTableViewCell : UITableViewCell
{
    UILabel *_symbolLabel;
    UILabel *_priceLabel;
    UILabel *_boxLabel;
    StocksListBoxView *_boxView;
    UIImageView *_changeSignView;
    UIView *_rowSeparatorView;
    BOOL _shouldStackView;
    Stock *_stock;
    long long _rowDataType;
}

+ (double)cellHeightForStackStatus:(BOOL)arg1;
@property(nonatomic) BOOL shouldStackView; // @synthesize shouldStackView=_shouldStackView;
@property(nonatomic) long long rowDataType; // @synthesize rowDataType=_rowDataType;
@property(retain, nonatomic) Stock *stock; // @synthesize stock=_stock;
// - (void).cxx_destruct;
- (CGRect)changeButtonRect;
- (void)layoutSubviews;
- (void)setShowsRowSeparator:(BOOL)arg1;
- (void)setBoxValueFromRowDataType;
- (id)changeSignNegative:(BOOL)arg1;
- (void)updateValues;
- (void)setBoxContentsAlpha:(double)arg1 includeChangeSign:(BOOL)arg2;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
