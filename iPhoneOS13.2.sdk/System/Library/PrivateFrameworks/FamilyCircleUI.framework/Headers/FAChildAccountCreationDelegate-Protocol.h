//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class FAChildAccountCreationController, NSError, UINavigationItem;

@protocol FAChildAccountCreationDelegate 
- (UINavigationItem *)navigationItemToShowInitialLoadingForChildAccountCreationController:(FAChildAccountCreationController *)arg1;
- (void)childAccountCreationController:(FAChildAccountCreationController *)arg1 didCompleteWithSuccess:(_Bool)arg2 error:(NSError *)arg3;
- (void)childAccountCreationController:(FAChildAccountCreationController *)arg1 didLoadRemoteUIWithSuccess:(_Bool)arg2;
@end
