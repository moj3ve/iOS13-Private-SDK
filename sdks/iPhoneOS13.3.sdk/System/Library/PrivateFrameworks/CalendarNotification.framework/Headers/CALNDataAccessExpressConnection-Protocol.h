//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol CALNDataAccessExpressConnection <NSObject>
- (void)reportSharedCalendarInviteAsJunkForCalendarWithID:(NSString *)arg1 accountID:(NSString *)arg2 queue:(NSObject<OS_dispatch_queue> *)arg3 completionBlock:(void (^)(NSString *, NSString *, NSError *))arg4;
- (void)respondToSharedCalendarInvite:(long long)arg1 forCalendarWithID:(NSString *)arg2 accountID:(NSString *)arg3 queue:(NSObject<OS_dispatch_queue> *)arg4 completionBlock:(void (^)(NSString *, NSString *, NSError *))arg5;
@end

