//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenTimeUI/STPINListViewController.h>

#import <ScreenTimeUI/STAllowanceDetailListControllerDelegate-Protocol.h>

@class NSArray, NSDictionary, NSObject, NSString, PSSpecifier;
@protocol STRootViewModelCoordinator;

__attribute__((visibility("hidden")))
@interface STAllowanceListController : STPINListViewController <STAllowanceDetailListControllerDelegate>
{
    _Bool _shouldShowConfirmDeletionAlert;
    NSObject<STRootViewModelCoordinator> *_coordinator;
    NSArray *_allowanceSpecifiers;
    PSSpecifier *_enableAllAllowancesSpecifier;
    NSDictionary *_allowanceSpecifiersByBundleIdentifier;
}

@property(copy) NSDictionary *allowanceSpecifiersByBundleIdentifier; // @synthesize allowanceSpecifiersByBundleIdentifier=_allowanceSpecifiersByBundleIdentifier;
@property _Bool shouldShowConfirmDeletionAlert; // @synthesize shouldShowConfirmDeletionAlert=_shouldShowConfirmDeletionAlert;
@property(retain) PSSpecifier *enableAllAllowancesSpecifier; // @synthesize enableAllAllowancesSpecifier=_enableAllAllowancesSpecifier;
@property(copy) NSArray *allowanceSpecifiers; // @synthesize allowanceSpecifiers=_allowanceSpecifiers;
@property(retain, nonatomic) NSObject<STRootViewModelCoordinator> *coordinator; // @synthesize coordinator=_coordinator;
- (void)showStoreDemoAlert;
- (void)_didFetchAppInfo:(id)arg1;
- (void)allowanceDetailController:(id)arg1 didDeleteAllowance:(id)arg2;
- (void)allowanceDetailController:(id)arg1 didSaveAllowance:(id)arg2;
- (void)deleteAllowance:(id)arg1;
- (void)_showConfirmDeletionView:(id)arg1;
- (void)confirmDeletion:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)addAllowance:(id)arg1;
- (void)_showAllowanceDetailController:(id)arg1;
- (id)_subtitleTextForAllowance:(id)arg1;
- (id)_specifierForAllowance:(id)arg1;
- (id)_allAllowancesEnabled:(id)arg1;
- (void)_setAllAllowancesEnabled:(id)arg1 specifier:(id)arg2;
- (id)specifiers;
@property(readonly) _Bool shouldShowCompatibilityAlert;
- (void)_adjustCellHeightForAllowanceSpecifier:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_allowancesDidChange;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)canBeShownFromSuspendedState;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
