//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NRMockXPCProxy : NSProxy
{
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _async;
    id _target;
}

@property(nonatomic) __weak id target; // @synthesize target=_target;
// - (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)initWithBlahBlahBlahTarget:(id)arg1 queue:(id)arg2 async:(BOOL)arg3;

@end

