//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface NFLWidgetProperties : NSObject <NSCopying>
{
    BOOL _insetMargins;
    BOOL _defaultForYou;
    double _containerHeight;
    double _itemSpacing;
    double _topMarginInset;
    CGSize _gridSize;
    CGSize _itemSize;
}

@property(nonatomic) BOOL defaultForYou; // @synthesize defaultForYou=_defaultForYou;
@property(nonatomic) double topMarginInset; // @synthesize topMarginInset=_topMarginInset;
@property(nonatomic) BOOL insetMargins; // @synthesize insetMargins=_insetMargins;
@property(nonatomic) double itemSpacing; // @synthesize itemSpacing=_itemSpacing;
@property(nonatomic) CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) CGSize gridSize; // @synthesize gridSize=_gridSize;
@property(nonatomic) double containerHeight; // @synthesize containerHeight=_containerHeight;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;

@end

