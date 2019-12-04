//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CPLNetworkState, NSString;
@protocol CPLNetworkWatcherDelegate, OS_dispatch_queue, OS_nw_path_monitor;

@interface CPLNetworkWatcher : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_nw_path_monitor> *_monitor;
    NSString *_endPoint;
    CPLNetworkState *_networkState;
    id <CPLNetworkWatcherDelegate> _delegate;
}

@property(nonatomic) __weak id <CPLNetworkWatcherDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) CPLNetworkState *networkState; // @synthesize networkState=_networkState;
@property(readonly, nonatomic) NSString *endPoint; // @synthesize endPoint=_endPoint;
- (void)stop;
- (void)start;
- (id)initWithQueue:(id)arg1;

@end
