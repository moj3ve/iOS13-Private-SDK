//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXEngineDrivenAssetsTilingLayoutDelegate-Protocol.h>

@class PXCMMEngineDrivenLayout;

@protocol PXCMMEngineDrivenLayoutDelegate <PXEngineDrivenAssetsTilingLayoutDelegate>
- (long long)engineDrivenLayout:(PXCMMEngineDrivenLayout *)arg1 assetStatusAtIndexPath:(struct PXSimpleIndexPath)arg2;
- (BOOL)engineDrivenLayout:(PXCMMEngineDrivenLayout *)arg1 shouldShowStatusBadgeAtIndexPath:(struct PXSimpleIndexPath)arg2;
- (BOOL)engineDrivenLayout:(PXCMMEngineDrivenLayout *)arg1 shouldShowDimmingOverlayAtIndexPath:(struct PXSimpleIndexPath)arg2;
@end

