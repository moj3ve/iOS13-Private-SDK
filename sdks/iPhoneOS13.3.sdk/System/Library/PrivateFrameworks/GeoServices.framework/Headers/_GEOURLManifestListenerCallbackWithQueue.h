//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/_GEOURLManifestListenerCallback-Protocol.h>

@protocol OS_dispatch_queue, OS_voucher;

__attribute__((visibility("hidden")))
@interface _GEOURLManifestListenerCallbackWithQueue : NSObject <_GEOURLManifestListenerCallback>
{
    id /* CDUnknownBlockType */ _handler;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_voucher> *_voucher;
    unsigned int _qos;
}

// - (void).cxx_destruct;
- (void)performHandler:(BOOL)arg1;
- (id)initWithQueue:(id)arg1 handler:(id /* CDUnknownBlockType */)arg2;

@end
