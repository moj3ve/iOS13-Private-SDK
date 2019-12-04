//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;
@protocol OS_dispatch_queue;

@interface ICMachineDataActionHandler : NSObject
{
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSOperationQueue *_operationQueue;
}

+ (id)sharedHandler;
- (void)processActionFromResponse:(id)arg1 withRequestContext:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)processAction:(id)arg1 data:(id)arg2 withRequestContext:(id)arg3 version:(long long)arg4 withCompletionHandler:(id /* block */)arg5;
- (id)init;

@end
