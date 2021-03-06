//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/CDPSecureChannelProxy-Protocol.h>

@class CDPContext;

@interface CDPPiggybackingChannel : NSObject <CDPSecureChannelProxy>
{
    CDPContext *_context;
}

// - (void).cxx_destruct;
- (id)_replyContextWithPakeData:(id)arg1;
- (NSUInteger)approveriCloudKeychainState;
- (BOOL)approverBackupRecordsExist;
- (void)sendPayload:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)initWithContext:(id)arg1;

@end

