//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCOperationRetrySignal-Protocol.h>

@protocol OS_dispatch_group;

@interface FCOperationExternalSignal : NSObject <FCOperationRetrySignal>
{
    BOOL _result;
    NSObject<OS_dispatch_group> *_group;
}

// - (void).cxx_destruct;
- (void)onQueue:(id)arg1 signal:(id /* CDUnknownBlockType */)arg2;
- (void)triggerWithRetry:(BOOL)arg1;
- (id)init;

@end
