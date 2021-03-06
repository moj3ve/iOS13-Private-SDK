//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class GEOETATrafficUpdateRequest, GEOETATrafficUpdateResponse, GEOTransitRouteUpdateResponse, MNActiveRouteInfo, MNLocation, MNSessionUpdateManager, NSError, NSSet;

@protocol MNSessionUpdateManagerDelegate <NSObject>
- (MNLocation *)userLocationForUpdateManager:(MNSessionUpdateManager *)arg1;
- (MNActiveRouteInfo *)routeInfoForUpdateManager:(MNSessionUpdateManager *)arg1;
- (BOOL)wantsETAUpdates;
- (void)updateManager:(MNSessionUpdateManager *)arg1 didReceiveETAError:(NSError *)arg2;
- (void)updateManager:(MNSessionUpdateManager *)arg1 didUpdateETAForRouteInfo:(MNActiveRouteInfo *)arg2;
- (void)updateManager:(MNSessionUpdateManager *)arg1 didReceiveETAResponse:(GEOETATrafficUpdateResponse *)arg2 toRequest:(GEOETATrafficUpdateRequest *)arg3;
- (void)updateManager:(MNSessionUpdateManager *)arg1 willSendETARequest:(GEOETATrafficUpdateRequest *)arg2;
- (void)updateManager:(MNSessionUpdateManager *)arg1 didReceiveTransitError:(NSError *)arg2;
- (void)updateManager:(MNSessionUpdateManager *)arg1 didReceiveTransitUpdates:(NSSet *)arg2;
- (void)updateManager:(MNSessionUpdateManager *)arg1 willSendTransitUpdateRequestForRouteIDs:(NSSet *)arg2;
- (void)updateManager:(MNSessionUpdateManager *)arg1 didReceiveTransitUpdateResponse:(GEOTransitRouteUpdateResponse *)arg2;
- (void)updateManager:(MNSessionUpdateManager *)arg1 willSendTransitUpdateRequests:(NSSet *)arg2;
@end

