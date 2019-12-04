//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSCyclerServiceProtocol-Protocol.h>

@class NSXPCConnection;

@interface WBSCyclerServiceProxy : NSObject <WBSCyclerServiceProtocol>
{
    NSXPCConnection *_xpcConnection;
    id /* block */ _errorHandler;
}

@property(copy, nonatomic) id /* block */ errorHandler; // @synthesize errorHandler=_errorHandler;
- (id)_cyclerProxy;
- (void)fetchStatusWithReply:(id /* block */)arg1;
- (void)sendRequestToTestSuite:(id)arg1 reply:(id /* block */)arg2;
- (void)stopCyclingWithReply:(id /* block */)arg1;
- (void)startCyclingFromBeginning:(_Bool)arg1 reply:(id /* block */)arg2;
- (void)setValue:(id)arg1 forConfigurationKey:(id)arg2 reply:(id /* block */)arg3;
- (void)setTestTargetEndpoint:(id)arg1 reply:(id /* block */)arg2;
@property(copy, nonatomic) id /* block */ connectionInvalidationHandler;
- (void)dealloc;
- (id)init;

@end
