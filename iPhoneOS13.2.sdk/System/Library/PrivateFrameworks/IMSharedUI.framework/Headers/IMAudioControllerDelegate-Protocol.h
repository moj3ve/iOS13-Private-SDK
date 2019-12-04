//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class IMAudioController, NSURL;

@protocol IMAudioControllerDelegate 

@optional
- (void)audioControllerPlayingDidChange:(IMAudioController *)arg1;
- (void)audioControllerDidStop:(IMAudioController *)arg1;
- (void)audioControllerDidPause:(IMAudioController *)arg1;
- (void)audioController:(IMAudioController *)arg1 didFinishPlayingContentAtURL:(NSURL *)arg2;
- (void)audioController:(IMAudioController *)arg1 didChangeProgressForContentAtURL:(NSURL *)arg2 currentTime:(double)arg3 duration:(double)arg4;
- (void)audioController:(IMAudioController *)arg1 didPrepareToPlayContentAtURL:(NSURL *)arg2 successfully:(_Bool)arg3;
@end
