//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFInvalidating-Protocol.h>

@class AFInterstitialConfiguration, NSMutableArray, NSString;
@protocol AFInterstitialProviderDelegate, OS_dispatch_queue;

@interface AFInterstitialProvider : NSObject <AFInvalidating>
{
    NSObject<OS_dispatch_queue> *_queue;
    AFInterstitialConfiguration *_configuration;
    NSMutableArray *_pendingActions;
    id _context;
    id <AFInterstitialProviderDelegate> _delegate;
}

- (void)_performNextAction;
- (void)_invalidate;
- (void)invalidate;
- (id)initWithStyle:(long long)arg1 recordRoute:(id)arg2 isVoiceTrigger:(_Bool)arg3 isDucking:(_Bool)arg4 isTwoShot:(_Bool)arg5 speechEndHostTime:(unsigned long long)arg6 context:(id)arg7 delegate:(id)arg8;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
