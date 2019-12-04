//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServicesUI/AKAppleIDAuthenticationDelegate-Protocol.h>
#import <AppleMediaServicesUI/AMSAuthKitUpdateController-Protocol.h>

@class NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface AMSUIAuthKitUpdatePromptController : NSObject <AKAppleIDAuthenticationDelegate, AMSAuthKitUpdateController>
{
    struct UIViewController *_presentingViewController;
}

+ (id)_createAuthenticationController;
+ (Class)_authKitAuthenticationContextClass;
@property(readonly, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void)_handleAuthKitError:(id)arg1 options:(id)arg2;
- (id)_createAuthenticationContextForAccount:(id)arg1 options:(id)arg2;
- (id)performAuthKitUpdateForAccount:(id)arg1 options:(id)arg2;
- (_Bool)authenticationController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4;
- (id)initWithPresentingViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
