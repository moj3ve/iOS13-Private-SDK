//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol HUControlView;

@protocol HUControlViewDelegate <NSObject>
- (void)controlView:(id <HUControlView>)arg1 valueDidChange:(id)arg2;
- (void)controlViewDidEndUserInteraction:(id <HUControlView>)arg1;
- (void)controlViewDidBeginUserInteraction:(id <HUControlView>)arg1;
@end

