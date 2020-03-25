//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UITargetedPreview, UIViewController, _UIClickPresentation, _UIClickPresentationInteraction;

@protocol _UIClickPresentationInteractionDelegate <NSObject>
- (_UIClickPresentation *)clickPresentationInteraction:(_UIClickPresentationInteraction *)arg1 presentationForPresentingViewController:(UIViewController *)arg2;

@optional
- (void)clickPresentationInteractionEnded:(_UIClickPresentationInteraction *)arg1 wasCancelled:(BOOL)arg2;
- (BOOL)clickPresentationInteractionShouldPresent:(_UIClickPresentationInteraction *)arg1;
- (UITargetedPreview *)clickPresentationInteraction:(_UIClickPresentationInteraction *)arg1 previewForHighlightingAtLocation:(CGPoint)arg2;
- (BOOL)clickPresentationInteractionShouldBegin:(_UIClickPresentationInteraction *)arg1;
@end
