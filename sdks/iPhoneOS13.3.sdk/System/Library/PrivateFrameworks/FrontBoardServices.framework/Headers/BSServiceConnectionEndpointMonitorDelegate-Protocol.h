//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class BSServiceConnectionEndpoint, BSServiceConnectionEndpointMonitor;

@protocol BSServiceConnectionEndpointMonitorDelegate <NSObject>
- (void)monitor:(BSServiceConnectionEndpointMonitor *)arg1 willLoseEndpoint:(BSServiceConnectionEndpoint *)arg2;
- (void)monitor:(BSServiceConnectionEndpointMonitor *)arg1 didReceiveEndpoint:(BSServiceConnectionEndpoint *)arg2;
@end

