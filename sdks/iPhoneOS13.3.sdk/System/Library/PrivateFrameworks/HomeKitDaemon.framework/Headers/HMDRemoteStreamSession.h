//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDCameraStreamSession.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@protocol HMDCameraRemoteStreamReceiverProtocol, HMDCameraRemoteStreamSenderProtocol;

@interface HMDRemoteStreamSession : HMDCameraStreamSession <HMFLogging>
{
    id <HMDCameraRemoteStreamSenderProtocol> _streamSender;
    id <HMDCameraRemoteStreamReceiverProtocol> _streamReceiver;
    NSUInteger _streamState;
}

+ (id)logCategory;
@property(nonatomic) NSUInteger streamState; // @synthesize streamState=_streamState;
@property(readonly, nonatomic) id <HMDCameraRemoteStreamReceiverProtocol> streamReceiver; // @synthesize streamReceiver=_streamReceiver;
@property(readonly, nonatomic) id <HMDCameraRemoteStreamSenderProtocol> streamSender; // @synthesize streamSender=_streamSender;
// - (void).cxx_destruct;
- (id)logIdentifier;
- (id)stateAsString;
- (BOOL)containsState:(long long)arg1;
- (void)updateState:(long long)arg1;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1 reachabilityPath:(NSUInteger)arg2 streamSender:(id)arg3 streamReceiver:(id)arg4 remoteCapabilities:(id)arg5 streamPreference:(id)arg6;

@end

