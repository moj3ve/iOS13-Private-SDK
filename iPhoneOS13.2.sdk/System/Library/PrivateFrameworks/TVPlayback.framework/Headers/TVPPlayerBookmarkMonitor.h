//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;
@protocol TVPPlayback;

__attribute__((visibility("hidden")))
@interface TVPPlayerBookmarkMonitor : NSObject
{
    _Bool _playerHasFinishedLoading;
    NSTimer *_bookmarkPeriodicSaveTimer;
    NSObject<TVPPlayback> *_player;
}

@property(nonatomic) _Bool playerHasFinishedLoading; // @synthesize playerHasFinishedLoading=_playerHasFinishedLoading;
@property(nonatomic) __weak NSObject<TVPPlayback> *player; // @synthesize player=_player;
@property(retain, nonatomic) NSTimer *bookmarkPeriodicSaveTimer; // @synthesize bookmarkPeriodicSaveTimer=_bookmarkPeriodicSaveTimer;
- (void)_updatePlayCountForMediaItem:(id)arg1 player:(id)arg2;
- (void)_updateBookmarkTimeForMediaItem:(id)arg1 player:(id)arg2 playbackOfMediaItemIsEnding:(_Bool)arg3;
- (void)_bookmarkPeriodicSaveTimerFired:(id)arg1;
- (void)_playerErrorDidOccur:(id)arg1;
- (void)_playerCurrentMediaItemWillChange:(id)arg1;
- (void)_playerStateWillChange:(id)arg1;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1;

@end
