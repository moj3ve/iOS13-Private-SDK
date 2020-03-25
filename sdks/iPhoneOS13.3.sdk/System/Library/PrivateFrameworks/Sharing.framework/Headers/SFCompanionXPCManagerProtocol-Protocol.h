//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDictionary, NSString;
@protocol SFCompanionServiceManagerClient;

@protocol SFCompanionXPCManagerProtocol <NSObject>
- (void)appleAccountSignedOut;
- (void)appleAccountSignedIn;
- (void)createUnlockManagerWithReply:(void (^)(id <SFUnlockProtocol>, NSError *))arg1;
- (void)createStreamsForMessage:(NSDictionary *)arg1 reply:(void (^)(NSFileHandle *, NSError *))arg2;
- (void)createCompanionServiceManagerWithIdentifier:(NSString *)arg1 clientProxy:(id <SFCompanionServiceManagerClient>)arg2 reply:(void (^)(id <SFCompanionServiceManagerProtocol>, NSString *, NSString *, NSString *, NSError *))arg3;
@end
