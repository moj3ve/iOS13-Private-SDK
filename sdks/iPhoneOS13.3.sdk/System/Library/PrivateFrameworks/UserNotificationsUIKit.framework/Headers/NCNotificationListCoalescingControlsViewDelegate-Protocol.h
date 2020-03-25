//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NCNotificationListCoalescingControlsView, UIView;

@protocol NCNotificationListCoalescingControlsViewDelegate <NSObject>

@optional
- (void)notificationListCoalescingControlsViewDidDismissPreviewInteractionPresentedContent:(NCNotificationListCoalescingControlsView *)arg1;
- (void)notificationListCoalescingControlsViewDidPresentPreviewInteractionPresentedContent:(NCNotificationListCoalescingControlsView *)arg1;
- (void)notificationListCoalescingControlsViewDidBeginPreviewInteraction:(NCNotificationListCoalescingControlsView *)arg1;
- (void)notificationListCoalescingControlsView:(NCNotificationListCoalescingControlsView *)arg1 didTransitionToClearState:(BOOL)arg2;
- (void)notificationListCoalescingControlsViewRequestsRestack:(NCNotificationListCoalescingControlsView *)arg1;
- (void)notificationListCoalescingControlsViewRequestsClearAll:(NCNotificationListCoalescingControlsView *)arg1;
- (UIView *)containerViewForCoalescingControlsPreviewInteractionPresentedContent:(NCNotificationListCoalescingControlsView *)arg1;
- (void)notificationListCoalescingControlsViewRequestsClear:(NCNotificationListCoalescingControlsView *)arg1;
@end
