//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class SiriUISiriStatusView;

@protocol SiriUISiriStatusViewDelegate 
- (struct UIEdgeInsets)safeAreaInsetsForSiriStatusView:(SiriUISiriStatusView *)arg1;
- (void)siriStatusViewHoldDidEnd:(SiriUISiriStatusView *)arg1;
- (void)siriStatusViewHoldDidBegin:(SiriUISiriStatusView *)arg1;
- (void)siriStatusViewWasTapped:(SiriUISiriStatusView *)arg1;
- (float)audioLevelForSiriStatusView:(SiriUISiriStatusView *)arg1;
@end
