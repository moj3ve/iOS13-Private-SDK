//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoRegistry/NRNSXPCConnectionProtocol-Protocol.h>

@class NSString, NSXPCConnection, NSXPCInterface;

@interface NRNSXPCConnection : NSObject <NRNSXPCConnectionProtocol>
{
    NSXPCConnection *_connection;
}

// - (void).cxx_destruct;
@property(readonly, nonatomic) int processIdentifier;
- (void)_setQueue:(id)arg1;
- (void)invalidate;
- (void)suspend;
- (void)resume;
@property(copy, nonatomic) id /* CDUnknownBlockType */ invalidationHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ interruptionHandler;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* CDUnknownBlockType */)arg1;
- (id)remoteObjectProxyWithErrorHandler:(id /* CDUnknownBlockType */)arg1;
@property(readonly, retain, nonatomic) id remoteObjectProxy;
@property(retain, nonatomic) NSXPCInterface *remoteObjectInterface;
@property(retain, nonatomic) id exportedObject;
@property(retain, nonatomic) NSXPCInterface *exportedInterface;
- (id)initWithMachServiceName:(id)arg1 options:(NSUInteger)arg2;
- (id)valueForEntitlement:(id)arg1;
@property(readonly, retain, nonatomic) NSString *processName;
- (void)runCompletionBlock:(id /* CDUnknownBlockType */)arg1;
- (id)initWithConnection:(id)arg1;

@end

