//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class MCNearbyServiceBrowser, MCPeerID, NSDictionary, NSError;

@protocol MCNearbyServiceBrowserDelegate <NSObject>
- (void)browser:(MCNearbyServiceBrowser *)arg1 lostPeer:(MCPeerID *)arg2;
- (void)browser:(MCNearbyServiceBrowser *)arg1 foundPeer:(MCPeerID *)arg2 withDiscoveryInfo:(NSDictionary *)arg3;

@optional
- (void)browser:(MCNearbyServiceBrowser *)arg1 didNotStartBrowsingForPeers:(NSError *)arg2;
@end

