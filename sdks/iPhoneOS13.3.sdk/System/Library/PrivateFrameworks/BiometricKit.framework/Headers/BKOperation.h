//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKDevice;
@protocol BKOperationDelegate, OS_dispatch_queue;

@interface BKOperation : NSObject
{
    BKDevice *_device;
    id <BKOperationDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    long long _state;
}

@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <BKOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) BKDevice *device; // @synthesize device=_device;
// - (void).cxx_destruct;
- (id)userPresentWithError:(id )arg1;
- (void)cancel;
- (void)startWithReply:(id /* CDUnknownBlockType */)arg1;
- (BOOL)startWithError:(id )arg1;

@end

