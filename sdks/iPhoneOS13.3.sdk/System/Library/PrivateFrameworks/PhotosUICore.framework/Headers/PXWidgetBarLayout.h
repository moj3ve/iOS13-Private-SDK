//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXTilingLayout.h>

@interface PXWidgetBarLayout : PXTilingLayout
{
    CGRect _contentBounds;
    double _height;
}

+ (struct PXTileIdentifier)tileIdentifier;
@property(nonatomic) double height; // @synthesize height=_height;
- (BOOL)getGeometry:(out struct PXTileGeometry )arg1 group:(out NSUInteger )arg2 userData:(out id )arg3 forTileWithIdentifier:(struct PXTileIdentifier)arg4;
- (void)enumerateTilesInRect:(CGRect)arg1 withOptions:(id)arg2 usingBlock:(id /* CDUnknownBlockType */)arg3;
- (CGRect)contentBounds;
- (void)prepareLayout;
- (void)setReferenceSize:(CGSize)arg1;

@end

