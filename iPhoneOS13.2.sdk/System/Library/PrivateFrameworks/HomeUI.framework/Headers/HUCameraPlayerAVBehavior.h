//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVKit/AVHomeIPCameraBehavior.h>

#import <HomeUI/HFCameraClipScrubbing-Protocol.h>

@class NSString;
@protocol HUCameraPlayerAVBehaviorDelegate;

@interface HUCameraPlayerAVBehavior : AVHomeIPCameraBehavior <HFCameraClipScrubbing>
{
    id <HUCameraPlayerAVBehaviorDelegate> _delegate;
}

@property(nonatomic) __weak id <HUCameraPlayerAVBehaviorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)scrubToTime:(double)arg1;
- (void)endScrubbingWithTargetTime:(double)arg1;
- (void)beginScrubbing;
- (void)playbackControlsDidChangePlayerVolume:(float)arg1;
- (void)pictureInPictureActionButtonTapped;
- (void)playbackControlsDidUpdateVisibilityOfLoadingIndicator:(_Bool)arg1;
- (void)playbackControlsDidToggleMuted:(_Bool)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
