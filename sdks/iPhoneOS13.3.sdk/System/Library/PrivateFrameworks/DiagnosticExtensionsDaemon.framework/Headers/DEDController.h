//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensionsDaemon/DEDPairingProtocol-Protocol.h>
#import <DiagnosticExtensionsDaemon/DEDSecureArchiving-Protocol.h>
#import <DiagnosticExtensionsDaemon/DEDXPCConnectorDaemonDelegate-Protocol.h>
#import <DiagnosticExtensionsDaemon/DEDXPCProtocol-Protocol.h>

@class DEDIDSConnection, DEDSharingConnection, DEDXPCConnector, DEDXPCInbound, NSMutableDictionary, NSXPCConnection;
@protocol DEDClientProtocol, DEDPairingProtocol, DEDWorkerProtocol, OS_dispatch_queue, OS_os_log;

@interface DEDController : NSObject <DEDXPCConnectorDaemonDelegate, DEDXPCProtocol, DEDPairingProtocol, DEDSecureArchiving>
{
    BOOL _isDaemon;
    BOOL _started;
    BOOL _useSharing;
    BOOL _useIDS;
    BOOL _embeddedInApp;
    NSObject<OS_dispatch_queue> *_bugSessionCallbackQueue;
    DEDXPCConnector *_xpcConnector;
    DEDXPCInbound *_xpcInbound;
    NSXPCConnection *_xpcOutboundConnection;
    id <DEDClientProtocol> _clientDelegate;
    id <DEDWorkerProtocol> _workerDelegate;
    id <DEDPairingProtocol> _pairingDelegate;
    id /* CDUnknownBlockType */ _devicesCompletion;
    id /* CDUnknownBlockType */ _pongBlock;
    id /* CDUnknownBlockType */ _sessionExistsCompletion;
    NSMutableDictionary *_sessionStartBlocks;
    NSMutableDictionary *_sessionDidStartBlocks;
    DEDIDSConnection *__idsConnection;
    DEDSharingConnection *__sharingConnection;
    double _sessionStartTimeout;
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_os_log> *_log;
    id /* CDUnknownBlockType */ _didCancelCompletion;
    NSMutableDictionary *_devices;
    NSMutableDictionary *_sessions;
}

+ (id)archivedClasses;
@property(retain) NSMutableDictionary *sessions; // @synthesize sessions=_sessions;
@property(retain) NSMutableDictionary *devices; // @synthesize devices=_devices;
@property(copy) id /* CDUnknownBlockType */ didCancelCompletion; // @synthesize didCancelCompletion=_didCancelCompletion;
@property(retain) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(retain) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain) NSObject<OS_dispatch_queue> *replyQueue; // @synthesize replyQueue=_replyQueue;
@property double sessionStartTimeout; // @synthesize sessionStartTimeout=_sessionStartTimeout;
@property(retain) DEDSharingConnection *_sharingConnection; // @synthesize _sharingConnection=__sharingConnection;
@property(retain) DEDIDSConnection *_idsConnection; // @synthesize _idsConnection=__idsConnection;
@property(retain) NSMutableDictionary *sessionDidStartBlocks; // @synthesize sessionDidStartBlocks=_sessionDidStartBlocks;
@property(retain) NSMutableDictionary *sessionStartBlocks; // @synthesize sessionStartBlocks=_sessionStartBlocks;
@property(copy) id /* CDUnknownBlockType */ sessionExistsCompletion; // @synthesize sessionExistsCompletion=_sessionExistsCompletion;
@property(copy) id /* CDUnknownBlockType */ pongBlock; // @synthesize pongBlock=_pongBlock;
@property(copy) id /* CDUnknownBlockType */ devicesCompletion; // @synthesize devicesCompletion=_devicesCompletion;
@property BOOL embeddedInApp; // @synthesize embeddedInApp=_embeddedInApp;
@property BOOL useIDS; // @synthesize useIDS=_useIDS;
@property BOOL useSharing; // @synthesize useSharing=_useSharing;
@property BOOL started; // @synthesize started=_started;
@property BOOL isDaemon; // @synthesize isDaemon=_isDaemon;
@property __weak id <DEDPairingProtocol> pairingDelegate; // @synthesize pairingDelegate=_pairingDelegate;
@property __weak id <DEDWorkerProtocol> workerDelegate; // @synthesize workerDelegate=_workerDelegate;
@property __weak id <DEDClientProtocol> clientDelegate; // @synthesize clientDelegate=_clientDelegate;
@property __weak NSXPCConnection *xpcOutboundConnection; // @synthesize xpcOutboundConnection=_xpcOutboundConnection;
@property(retain) DEDXPCInbound *xpcInbound; // @synthesize xpcInbound=_xpcInbound;
@property(retain) DEDXPCConnector *xpcConnector; // @synthesize xpcConnector=_xpcConnector;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *bugSessionCallbackQueue; // @synthesize bugSessionCallbackQueue=_bugSessionCallbackQueue;
// - (void).cxx_destruct;
- (void)connector:(id)arg1 didLooseConnectionToProcessWithPid:(int)arg2;
- (id)sharingConnection;
- (id)idsConnection;
- (void)addDevice:(id)arg1;
- (id)persistence;
- (id)purgeStaleSessions:(id)arg1;
- (BOOL)induceTimeOutIfNeededAndReturnCanProceedWithDevice:(id)arg1 sessionId:(id)arg2;
- (void)hasActiveSession:(id)arg1;
- (void)sessionWithIdentifier:(id)arg1 isActive:(BOOL)arg2;
- (void)didStartBugSessionWithInfo:(id)arg1;
- (void)startBugSessionWithIdentifier:(id)arg1 configuration:(id)arg2 caller:(id)arg3 target:(id)arg4;
- (void)gotDeviceUpdate:(id)arg1;
- (void)didDiscoverDevices:(id)arg1;
- (void)stopDeviceDiscovery;
- (void)discoverAllAvailableDevices;
- (void)pong;
- (void)ping;
- (void)hasActiveSessionForIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_didAbortSessionWithID:(id)arg1;
- (void)abortSession:(id)arg1;
- (void)abortSession:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)reset;
- (id)knownSessions;
- (id)sessionForIdentifier:(id)arg1;
- (void)startBugSessionWithIdentifier:(id)arg1 configuration:(id)arg2 target:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (id)_deviceForIncomingDevice:(id)arg1;
- (BOOL)hasDevice:(id)arg1;
- (id)_deviceForIncomingDevice:(id)arg1 needsReady:(BOOL)arg2;
- (id)_sharingDeviceForIncomingDevice:(id)arg1;
- (void)successPINForDevice:(id)arg1;
- (void)tryPIN:(id)arg1 forDevice:(id)arg2;
- (void)promptPINForDevice:(id)arg1;
- (void)startPairSetupForDevice:(id)arg1;
- (id)devicesWithIdentifier:(id)arg1;
- (id)_allKnownDevicesWithIdentifier:(id)arg1;
- (id)allKnownDevices;
- (void)stopDiscovery;
- (void)discoverDevicesWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)pingDaemonWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)remoteXPCObject;
- (void)start;
- (void)configureForIDS:(BOOL)arg1;
- (void)configureForSharing:(BOOL)arg1;
- (void)configurePairingDelegate:(id)arg1;
- (void)configureWorkerDelegate:(id)arg1;
- (void)configureClientDelegate:(id)arg1;
- (void)configureForEmbedded:(BOOL)arg1;
- (void)configureForDaemon;
- (id)init;
- (void)_timeOutSessionStartBlockWithIdentifier:(id)arg1 timeout:(double)arg2;
- (BOOL)hasCompletionBlockWithIdentifier:(id)arg1;
- (id /* CDUnknownBlockType */)popSessionStartCompletionWithIdentifier:(id)arg1;
- (void)addSessionStartCompletion:(id /* CDUnknownBlockType */)arg1 withIdentifier:(id)arg2;
- (id /* CDUnknownBlockType */)popDidStartSessionCompletionWithIdentifier:(id)arg1;
- (void)addDidStartSessionCompletion:(id /* CDUnknownBlockType */)arg1 withIdentifier:(id)arg2;

@end

