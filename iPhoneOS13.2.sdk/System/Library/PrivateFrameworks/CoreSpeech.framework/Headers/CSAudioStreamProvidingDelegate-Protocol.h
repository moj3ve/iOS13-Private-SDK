//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class CSAudioChunk, CSAudioChunkForTV;
@protocol CSAudioStreamProviding;

@protocol CSAudioStreamProvidingDelegate 
- (void)audioStreamProvider:(id <CSAudioStreamProviding>)arg1 audioChunkForTVAvailable:(CSAudioChunkForTV *)arg2;
- (void)audioStreamProvider:(id <CSAudioStreamProviding>)arg1 audioBufferAvailable:(CSAudioChunk *)arg2;
- (void)audioStreamProvider:(id <CSAudioStreamProviding>)arg1 didStopStreamUnexpectly:(long long)arg2;

@optional
- (void)audioStreamProvider:(id <CSAudioStreamProviding>)arg1 didHardwareConfigurationChange:(long long)arg2;
@end
