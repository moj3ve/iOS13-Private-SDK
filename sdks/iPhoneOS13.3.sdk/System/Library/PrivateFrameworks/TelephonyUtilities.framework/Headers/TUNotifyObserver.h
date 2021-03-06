//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TUNotifyObserver-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface TUNotifyObserver : NSObject <TUNotifyObserver>
{
    int _token;
    id /* CDUnknownBlockType */ _callback;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_notificationName;
}

@property(nonatomic) int token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *notificationName; // @synthesize notificationName=_notificationName;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
// - (void).cxx_destruct;
- (void)_endObserving;
- (void)endObserving;
- (void)beginObserving;
@property(readonly, nonatomic) NSUInteger state;
@property(readonly, nonatomic, getter=isObserving) BOOL observing;
@property(copy, nonatomic) id /* CDUnknownBlockType */ callback; // @synthesize callback=_callback;
- (void)dealloc;
- (id)initWithNotificationName:(id)arg1 queue:(id)arg2;

@end

