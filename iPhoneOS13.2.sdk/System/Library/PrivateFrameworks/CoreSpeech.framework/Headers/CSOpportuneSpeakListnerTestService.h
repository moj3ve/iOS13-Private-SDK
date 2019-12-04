//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSOpportuneSpeakListenerDelegate-Protocol.h>

@class CSOpportuneSpeakListener, NSString;
@protocol OS_dispatch_queue;

@interface CSOpportuneSpeakListnerTestService : NSObject <CSOpportuneSpeakListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    int _notifyToken;
    CSOpportuneSpeakListener *listener;
}

- (void)opportuneSpeakListener:(id)arg1 didStopUnexpectly:(_Bool)arg2;
- (void)opportuneSpeakListener:(id)arg1 hasVADAvailable:(_Bool)arg2;
- (void)opportuneSpeakListener:(id)arg1 hasRemoteVADAvailable:(_Bool)arg2;
- (void)receiveOpportuneSpeakListenerStop;
- (void)receiveOpportuneSpeakListenerStart;
- (void)start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
