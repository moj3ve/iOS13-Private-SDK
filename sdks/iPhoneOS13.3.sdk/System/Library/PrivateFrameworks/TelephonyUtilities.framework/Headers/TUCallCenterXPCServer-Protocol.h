//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUtilities/TUCallServicesProxyCallActions-Protocol.h>

@class NSDictionary, NSString, TUCallDisplayContext, TUDialRequest, TUJoinConversationRequest;

@protocol TUCallCenterXPCServer <TUCallServicesProxyCallActions>
- (oneway void)reportLocalPreviewStoppedForCallWithUniqueProxyIdentifier:(NSString *)arg1;
- (oneway void)pullCallFromClientUsingHandoffActivityUserInfo:(NSDictionary *)arg1 reply:(void (^)(TUCall *, NSArray *))arg2;
- (oneway void)shouldSuppressInCallStatusBar:(BOOL)arg1;
- (oneway void)joinConversationWithRequest:(TUJoinConversationRequest *)arg1;
- (oneway void)dialWithRequest:(TUDialRequest *)arg1 reply:(void (^)(TUCall *, NSArray *))arg2;
- (oneway void)dialWithRequest:(TUDialRequest *)arg1 displayContext:(TUCallDisplayContext *)arg2;
- (oneway void)requestInitialState:(void (^)(NSArray *))arg1;
@end

