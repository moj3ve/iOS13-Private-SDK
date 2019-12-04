//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol ICCloudServerListenerEndpointProvider, OS_dispatch_queue;

@interface ICCloudClientCloudService : NSObject
{
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_serialQueue;
    id <ICCloudServerListenerEndpointProvider> _listenerEndpointProvider;
}

@property(readonly, nonatomic) __weak id <ICCloudServerListenerEndpointProvider> listenerEndpointProvider; // @synthesize listenerEndpointProvider=_listenerEndpointProvider;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
- (id)_xpcConnectionWithListenerEndpoint:(id)arg1;
@property(readonly, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (id)initWithListenerEndpointProvider:(id)arg1;

@end
