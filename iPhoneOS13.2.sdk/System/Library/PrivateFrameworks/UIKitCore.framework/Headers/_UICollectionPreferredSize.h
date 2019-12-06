//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCollectionLayoutSize;

__attribute__((visibility("hidden")))
@interface _UICollectionPreferredSize : NSObject
{
    CGSize _originalSize;
    CGSize _fittingSize;
    CGSize _preferredSize;
    NSCollectionLayoutSize *_layoutSize;
}

@property(readonly, nonatomic) CGSize preferredSize; // @synthesize preferredSize=_preferredSize;
@property(readonly, nonatomic) NSCollectionLayoutSize *layoutSize; // @synthesize layoutSize=_layoutSize;
@property(readonly, nonatomic) CGSize fittingSize; // @synthesize fittingSize=_fittingSize;
@property(readonly, nonatomic) CGSize originalSize; // @synthesize originalSize=_originalSize;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithOriginalSize:(CGSize)arg1 fittingSize:(CGSize)arg2 layoutSize:(id)arg3;

@end
