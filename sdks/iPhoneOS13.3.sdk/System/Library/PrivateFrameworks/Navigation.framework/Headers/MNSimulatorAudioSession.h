//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNAudioSession-Protocol.h>

@class MNTraceRouteSimulator;

__attribute__((visibility("hidden")))
@interface MNSimulatorAudioSession : NSObject <MNAudioSession>
{
    id _delegate;
    BOOL _isSpeaking;
    NSUInteger _voiceGuidanceLevel;
    MNTraceRouteSimulator *_simulator;
}

@property(retain, nonatomic) MNTraceRouteSimulator *simulator; // @synthesize simulator=_simulator;
@property(nonatomic) NSUInteger voiceGuidanceLevel; // @synthesize voiceGuidanceLevel=_voiceGuidanceLevel;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)clearAllAnnouncements;
- (void)stop;
- (BOOL)vibrateForPrompt:(NSUInteger)arg1;
- (BOOL)isSpeaking;
- (void)speak:(id)arg1 shortPromptType:(NSUInteger)arg2 ignorePromptStyle:(BOOL)arg3 minimumRequiredLevel:(NSUInteger)arg4 completionBlock:(id /* CDUnknownBlockType */)arg5;
- (void)speak:(id)arg1 shortPromptType:(NSUInteger)arg2 ignorePromptStyle:(BOOL)arg3 completionBlock:(id /* CDUnknownBlockType */)arg4;
- (void)prepareToAnnounce;
- (void)endSession;
- (void)beginSession;
- (id)initWithSimulator:(id)arg1;

@end

