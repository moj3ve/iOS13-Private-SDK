//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoSubscriberAccountUI/VSAppDocumentController.h>

#import <VideoSubscriberAccountUI/VSMessagePortFeatureDelegate-Protocol.h>
#import <VideoSubscriberAccountUI/VSMessageQueueDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VSWebAuthenticationAppDocumentController : VSAppDocumentController <VSMessagePortFeatureDelegate, VSMessageQueueDelegate>
{
}

- (_Bool)_updateViewModel:(id)arg1 error:(id *)arg2;
- (id)_newViewModel;
- (void)_stopObservingViewModel:(id)arg1;
- (void)_startObservingViewModel:(id)arg1;
- (void)didAddMessagesToMessageQueue:(id)arg1;
- (void)messagePort:(id)arg1 didReceiveMessage:(id)arg2;
- (void)_sendMessage:(id)arg1;
- (_Bool)_updateWebAuthenticationViewModel:(id)arg1 withTemplate:(id)arg2 error:(id *)arg3;
- (_Bool)_updateWebAuthenticationViewModel:(id)arg1 error:(id *)arg2;
- (id)_webAuthenticationViewModelWithViewModel:(id)arg1;
- (id)initWithAppDocument:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
