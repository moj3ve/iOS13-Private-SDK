//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSCountedSet, NSSet;

@protocol HMDNetworkRouterFirewallRuleManager 
@property(readonly, nonatomic) NSSet *interestedAccessories;
- (void)fetchRulesForAccessories:(NSSet *)arg1 completion:(void (^)(NSSet *, NSError *))arg2;
- (void)fetchCloudChangesWithCompletion:(void (^)(NSSet *, NSError *))arg1;
- (void)removeInterestedAccessories:(NSCountedSet *)arg1;
- (void)addInterestedAccessories:(NSCountedSet *)arg1;
- (void)shutdownWithCompletion:(void (^)(NSError *))arg1;
- (void)startupWithCompletion:(void (^)(NSError *))arg1;
@end
