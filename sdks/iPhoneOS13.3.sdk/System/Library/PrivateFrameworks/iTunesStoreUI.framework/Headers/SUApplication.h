//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIApplication.h>


@class UIColor, UIWindow;

@interface SUApplication : UIApplication <UIApplicationDelegate>
{
    BOOL _terminateOnNextSuspend;
    UIWindow *_window;
    UIColor *_interactionTintColor;
}

@property(copy, nonatomic) UIColor *interactionTintColor; // @synthesize interactionTintColor=_interactionTintColor;
- (void)_teardownUI;
- (void)_setupUI;
- (void)_exitIfStoreNotAvailable;
- (void)_exitForStoreNotAvailable;
- (void)_applicationDidFinishLaunching:(id)arg1;
- (void)_storeEnabledChangeNotification:(id)arg1;
- (double)defaultImageSnapshotExpiration;
- (void)applicationWillEnterForeground:(id)arg1;
- (BOOL)applicationSuspendWithSettings:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (NSUInteger)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
- (BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)_runScriptTestWithOptions:(id)arg1;
- (BOOL)runTest:(id)arg1 options:(id)arg2;
- (void)runTestInvocation:(id)arg1;

@end

