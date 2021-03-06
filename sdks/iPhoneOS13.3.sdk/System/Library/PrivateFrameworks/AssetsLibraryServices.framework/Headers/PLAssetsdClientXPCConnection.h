//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssetsLibraryServices/PLXPCProxyCreating-Protocol.h>

@class NSXPCConnection, PLAssetsdClientService, PLXPCMessageLogger;
@protocol OS_dispatch_queue;

@interface PLAssetsdClientXPCConnection : NSObject <PLXPCProxyCreating>
{
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_queue> *_externalNotificationQueue;
    NSXPCConnection *_connection;
    PLXPCMessageLogger *_connectionLogger;
    PLAssetsdClientService *_assetsdClientService;
    BOOL _isShuttingDown;
}

// - (void).cxx_destruct;
- (id)_unboostingRemoteObjectProxy;
- (id)_primitiveSynchronousRemoteObjectProxyWithErrorHandler:(id /* CDUnknownBlockType */)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* CDUnknownBlockType */)arg1;
- (id)remoteObjectProxyWithErrorHandler:(id /* CDUnknownBlockType */)arg1;
- (void)addBarrierBlock:(id /* CDUnknownBlockType */)arg1;
- (id)connectionWithErrorHandler:(id /* CDUnknownBlockType */)arg1;
- (void)prepareToShutdown;
- (void)handleInvalidation;
- (void)_postInterruptedNotification;
- (void)handleInterruption;
- (void)addPhotoLibraryUnavailabilityHandler:(id /* CDUnknownBlockType */)arg1;
- (id)init;

@end

