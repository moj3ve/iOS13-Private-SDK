//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivityAchievements/_HKXPCExportable-Protocol.h>

@class HKPluginProxyProvider, NSString;
@protocol ACHServerInterface, OS_dispatch_queue;

@interface ACHClient : NSObject <_HKXPCExportable>
{
    NSObject<OS_dispatch_queue> *_serverQueue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    id <ACHServerInterface> _serverProxy;
    HKPluginProxyProvider *_pluginProxyProvider;
    id /* block */ _injectedErrorHandler;
}

@property(copy, nonatomic) id /* block */ injectedErrorHandler; // @synthesize injectedErrorHandler=_injectedErrorHandler;
@property(retain, nonatomic) HKPluginProxyProvider *pluginProxyProvider; // @synthesize pluginProxyProvider=_pluginProxyProvider;
@property(retain, nonatomic) id <ACHServerInterface> serverProxy; // @synthesize serverProxy=_serverProxy;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serverQueue; // @synthesize serverQueue=_serverQueue;
- (void)_addPluginProxyErrorHandler:(id /* block */)arg1;
- (void)_injectProxyProvider:(id)arg1;
- (id /* block */)_clientQueueCompletion:(id /* block */)arg1;
- (void)_remoteProxy:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)availableMobileAssetsWithCompletion:(id /* block */)arg1;
- (void)setActivityChallengeAssetsServerURL:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchActivityChallengeAssetsServerURLWithCompletion:(id /* block */)arg1;
- (void)runMonthlyChallengesWithCompletion:(id /* block */)arg1;
- (void)forceAwardingSchedulerWithCompletion:(id /* block */)arg1;
- (void)fetchEphemeralAchievementWithTemplateUniqueName:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchAchievementWithTemplateUniqueName:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchAllAchievementsWithCompletion:(id /* block */)arg1;
- (void)removeAllEarnedInstancesWithCompletion:(id /* block */)arg1;
- (void)removeEarnedInstance:(id)arg1 completion:(id /* block */)arg2;
- (void)addEarnedInstance:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchAllEarnedInstancesWithCompletion:(id /* block */)arg1;
- (void)removeAllTemplatesWithCompletion:(id /* block */)arg1;
- (void)removeTemplate:(id)arg1 completion:(id /* block */)arg2;
- (void)addTemplate:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchAllTemplatesWithCompletion:(id /* block */)arg1;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)remoteInterface;
- (id)initWithHealthStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
