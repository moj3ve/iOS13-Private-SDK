//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIScreenEdgePanGestureRecognizer, UIView;

@protocol CSDismissableModalViewControllerDelegate <NSObject>
- (void)dismissForHomeButton;
- (void)handleBottomEdgeGestureEnded:(UIScreenEdgePanGestureRecognizer *)arg1;
- (void)handleBottomEdgeGestureChanged:(UIScreenEdgePanGestureRecognizer *)arg1;
- (void)handleBottomEdgeGestureBegan:(UIScreenEdgePanGestureRecognizer *)arg1;
- (void)addGrabberView:(UIView *)arg1;
@end

