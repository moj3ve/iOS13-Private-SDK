//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXTilingLayout.h>

@class NSIndexSet, PXAssetsDataSource, PXBasicTileUserData, PXIndexPathSet, PXOverlayBadgeTileUserData, PXSelectionBadgeTileUserData;

@interface PXAssetsTilingLayout : PXTilingLayout
{
    PXOverlayBadgeTileUserData *_overlayBadgeTileUserData;
    PXAssetsDataSource *_dataSource;
    PXIndexPathSet *_hiddenIndexPaths;
    PXIndexPathSet *_selectedIndexPaths;
    PXIndexPathSet *_draggingIndexPaths;
    NSUInteger _selectionBadgeOptions;
    NSUInteger _badgeOptions;
    NSUInteger _animatedOverlayBehavior;
    PXSelectionBadgeTileUserData *__selectedUserData;
    PXSelectionBadgeTileUserData *__unselectedUserData;
    PXBasicTileUserData *__highlightedDimmingUserData;
    PXBasicTileUserData *__selectedDimmingUserData;
    PXBasicTileUserData *__draggingDimmingUserData;
    NSIndexSet *_additionalAccessoryTileKinds;
    struct PXSimpleIndexPath _highlightedIndexPath;
    struct PXSimpleIndexPath _focusedIndexPath;
}

@property(retain, nonatomic) NSIndexSet *additionalAccessoryTileKinds; // @synthesize additionalAccessoryTileKinds=_additionalAccessoryTileKinds;
@property(readonly, nonatomic) PXBasicTileUserData *_draggingDimmingUserData; // @synthesize _draggingDimmingUserData=__draggingDimmingUserData;
@property(readonly, nonatomic) PXBasicTileUserData *_selectedDimmingUserData; // @synthesize _selectedDimmingUserData=__selectedDimmingUserData;
@property(readonly, nonatomic) PXBasicTileUserData *_highlightedDimmingUserData; // @synthesize _highlightedDimmingUserData=__highlightedDimmingUserData;
@property(readonly, nonatomic) PXSelectionBadgeTileUserData *_unselectedUserData; // @synthesize _unselectedUserData=__unselectedUserData;
@property(readonly, nonatomic) PXSelectionBadgeTileUserData *_selectedUserData; // @synthesize _selectedUserData=__selectedUserData;
@property(nonatomic) NSUInteger animatedOverlayBehavior; // @synthesize animatedOverlayBehavior=_animatedOverlayBehavior;
@property(nonatomic) NSUInteger badgeOptions; // @synthesize badgeOptions=_badgeOptions;
@property(nonatomic) NSUInteger selectionBadgeOptions; // @synthesize selectionBadgeOptions=_selectionBadgeOptions;
@property(retain, nonatomic) PXIndexPathSet *draggingIndexPaths; // @synthesize draggingIndexPaths=_draggingIndexPaths;
@property(retain, nonatomic) PXIndexPathSet *selectedIndexPaths; // @synthesize selectedIndexPaths=_selectedIndexPaths;
@property(nonatomic) struct PXSimpleIndexPath focusedIndexPath; // @synthesize focusedIndexPath=_focusedIndexPath;
@property(nonatomic) struct PXSimpleIndexPath highlightedIndexPath; // @synthesize highlightedIndexPath=_highlightedIndexPath;
@property(retain, nonatomic) PXIndexPathSet *hiddenIndexPaths; // @synthesize hiddenIndexPaths=_hiddenIndexPaths;
@property(readonly, nonatomic) PXAssetsDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic, setter=_setContentTileUserData:) PXOverlayBadgeTileUserData *_overlayBadgeTileUserData; // @synthesize _overlayBadgeTileUserData;
// - (void).cxx_destruct;
- (double)zPositionOffsetForKind:(NSUInteger)arg1;
- (id)description;
- (void)_invalidateAllAnimatedOverlayTiles;
- (void)_invalidateAllSelectionTiles;
- (BOOL)getAdditionalAccessoryTileIdentifier:(out struct PXTileIdentifier )arg1 outGeometry:(out struct PXTileGeometry )arg2 group:(out NSUInteger )arg3 userData:(out id )arg4 forTileKind:(NSUInteger)arg5 contentTileGeometry:(const struct PXTileGeometry )arg6 indexPath:(struct PXSimpleIndexPath)arg7;
- (BOOL)_getOverlayBadgeTileIdentifier:(out struct PXTileIdentifier )arg1 outGeometry:(out struct PXTileGeometry )arg2 group:(out NSUInteger )arg3 userData:(out id )arg4 forContentTileGeometry:(const struct PXTileGeometry )arg5 indexPath:(struct PXSimpleIndexPath)arg6;
- (BOOL)_getDimmingTileIdentifier:(out struct PXTileIdentifier )arg1 outGeometry:(out struct PXTileGeometry )arg2 group:(out NSUInteger )arg3 userData:(out id )arg4 forContentTileGeometry:(const struct PXTileGeometry )arg5 indexPath:(struct PXSimpleIndexPath)arg6;
- (BOOL)_getAnimatedImageOverlayTileIdentifier:(out struct PXTileIdentifier )arg1 outGeometry:(out struct PXTileGeometry )arg2 group:(out NSUInteger )arg3 userData:(out id )arg4 forContentTileGeometry:(const struct PXTileGeometry )arg5 indexPath:(struct PXSimpleIndexPath)arg6;
- (BOOL)_getLoopingVideoOverlayTileIdentifier:(out struct PXTileIdentifier )arg1 outGeometry:(out struct PXTileGeometry )arg2 group:(out NSUInteger )arg3 userData:(out id )arg4 forContentTileGeometry:(const struct PXTileGeometry )arg5 indexPath:(struct PXSimpleIndexPath)arg6;
- (BOOL)_getVideoOverlayTileIdentifier:(out struct PXTileIdentifier )arg1 outGeometry:(out struct PXTileGeometry )arg2 group:(out NSUInteger )arg3 userData:(out id )arg4 forContentTileGeometry:(const struct PXTileGeometry )arg5 indexPath:(struct PXSimpleIndexPath)arg6;
- (BOOL)_getLivePhotoOverlayTileIdentifier:(out struct PXTileIdentifier )arg1 outGeometry:(out struct PXTileGeometry )arg2 group:(out NSUInteger )arg3 userData:(out id )arg4 forContentTileGeometry:(const struct PXTileGeometry )arg5 indexPath:(struct PXSimpleIndexPath)arg6;
- (BOOL)_getPlayButtonTileIdentifier:(out struct PXTileIdentifier )arg1 outGeometry:(out struct PXTileGeometry )arg2 group:(out NSUInteger )arg3 userData:(out id )arg4 forContentTileGeometry:(const struct PXTileGeometry )arg5 indexPath:(struct PXSimpleIndexPath)arg6;
- (BOOL)_getSelectionBadgeTileIdentifier:(out struct PXTileIdentifier )arg1 outGeometry:(out struct PXTileGeometry )arg2 group:(out NSUInteger )arg3 userData:(out id )arg4 forContentTileGeometry:(const struct PXTileGeometry )arg5 indexPath:(struct PXSimpleIndexPath)arg6;
- (CGSize)playButtonSizeForItemAtIndexPath:(struct PXSimpleIndexPath)arg1 contentTileSize:(CGSize)arg2;
- (BOOL)getGeometry:(out struct PXTileGeometry )arg1 group:(out NSUInteger )arg2 userData:(out id )arg3 forTileWithIdentifier:(struct PXTileIdentifier)arg4;
- (void)enumerateAccessoryTilesForContentTileWithIndexPath:(struct PXSimpleIndexPath)arg1 geometry:(const struct PXTileGeometry )arg2 withOptions:(id)arg3 usingBlock:(id /* CDUnknownBlockType */)arg4;
- (void)adjustGeometry:(struct PXTileGeometry )arg1 forContentTileWithIndexPath:(struct PXSimpleIndexPath)arg2;
- (CGSize)_preferredSelectionBadgeSize;
- (id)init;
- (id)initWithDataSource:(id)arg1;

@end

