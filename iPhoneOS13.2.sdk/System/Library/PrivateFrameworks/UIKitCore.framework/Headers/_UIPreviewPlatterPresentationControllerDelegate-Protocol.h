//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, UITouch, UIView, _UIPreviewPlatterPresentationController;

@protocol _UIPreviewPlatterPresentationControllerDelegate <UIAdaptivePresentationControllerDelegate>
// - (NSArray *)_accessoryViewsForPreviewPlatterPresentationController:(_UIPreviewPlatterPresentationController *)arg1 layoutAnchor:(CDStruct_6f807b77)arg2;
- (void)_previewPlatterPresentationControllerDidEndPanInteraction:(_UIPreviewPlatterPresentationController *)arg1;
- (void)_previewPlatterPresentationControllerDidBeginPanInteraction:(_UIPreviewPlatterPresentationController *)arg1;
- (UIView *)actualPlatterContainerViewForPresentationController:(_UIPreviewPlatterPresentationController *)arg1;
- (void)_previewPlatterPresentationController:(_UIPreviewPlatterPresentationController *)arg1 beginDragWithTouch:(UITouch *)arg2;
- (void)_previewPlatterPresentationControllerWantsToBeDismissed:(_UIPreviewPlatterPresentationController *)arg1 withReason:(NSUInteger)arg2 alongsideActions:(void (^)(void))arg3 completion:(void (^)(void))arg4;
- (void)_previewPlatterPresentationControllerDidTapPreview:(_UIPreviewPlatterPresentationController *)arg1;
@end
