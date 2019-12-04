//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISplitViewController.h>

#import <VideosUI/UISplitViewControllerDelegate-Protocol.h>
#import <VideosUI/VUICategoryMenuViewControllerDelegate-Protocol.h>
#import <VideosUI/VUIHomeShareViewControllerDelegate-Protocol.h>
#import <VideosUI/VUILibraryCategoryMenuViewModelDelegate-Protocol.h>
#import <VideosUI/VUILibraryGridCollectionViewControllerDelegate-Protocol.h>

@class NSIndexPath, NSString, UINavigationController, VUICategoryMenuViewController, VUILibraryAlertView, VUILibraryCategoryMenuViewModel, VUILibraryGridCollectionViewController, VUIMediaLibrary;
@protocol VUILibrarySplitViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VUILibrarySplitViewController : UISplitViewController <VUILibraryCategoryMenuViewModelDelegate, VUICategoryMenuViewControllerDelegate, VUILibraryGridCollectionViewControllerDelegate, VUIHomeShareViewControllerDelegate, UISplitViewControllerDelegate>
{
    _Bool _shouldShowBackButton;
    _Bool _hasLoaded;
    id <VUILibrarySplitViewControllerDelegate> _librarySplitViewControllerDelegate;
    VUICategoryMenuViewController *_menuViewController;
    VUIMediaLibrary *_mediaLibrary;
    UINavigationController *_masterNavigationController;
    UINavigationController *_detailNavigationController;
    VUILibraryCategoryMenuViewModel *_categoryViewModel;
    VUILibraryGridCollectionViewController *_currentGridCollectionViewController;
    NSIndexPath *_currentlySelectedIndexPath;
    VUILibraryAlertView *_alertView;
    VUIMediaLibrary *_currentHomeShareMediaLibrary;
}

@property(nonatomic) _Bool hasLoaded; // @synthesize hasLoaded=_hasLoaded;
@property(retain, nonatomic) VUIMediaLibrary *currentHomeShareMediaLibrary; // @synthesize currentHomeShareMediaLibrary=_currentHomeShareMediaLibrary;
@property(nonatomic) _Bool shouldShowBackButton; // @synthesize shouldShowBackButton=_shouldShowBackButton;
@property(retain, nonatomic) VUILibraryAlertView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) NSIndexPath *currentlySelectedIndexPath; // @synthesize currentlySelectedIndexPath=_currentlySelectedIndexPath;
@property(retain, nonatomic) VUILibraryGridCollectionViewController *currentGridCollectionViewController; // @synthesize currentGridCollectionViewController=_currentGridCollectionViewController;
@property(retain, nonatomic) VUILibraryCategoryMenuViewModel *categoryViewModel; // @synthesize categoryViewModel=_categoryViewModel;
@property(retain, nonatomic) UINavigationController *detailNavigationController; // @synthesize detailNavigationController=_detailNavigationController;
@property(retain, nonatomic) UINavigationController *masterNavigationController; // @synthesize masterNavigationController=_masterNavigationController;
@property(retain, nonatomic) VUIMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
@property(retain, nonatomic) VUICategoryMenuViewController *menuViewController; // @synthesize menuViewController=_menuViewController;
@property(nonatomic) __weak id <VUILibrarySplitViewControllerDelegate> librarySplitViewControllerDelegate; // @synthesize librarySplitViewControllerDelegate=_librarySplitViewControllerDelegate;
- (_Bool)vui_ppt_isLoading;
- (void)showDetailViewController:(id)arg1 sender:(id)arg2;
- (id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2;
- (_Bool)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3;
- (void)setPageMetricsForCategory:(id)arg1 onLibraryGridCollectionViewController:(id)arg2;
- (id)_deviceMediaLibrary;
- (void)_removeRentalsUpdateNotificationObserver;
- (void)_removeNotificationObserversWithDeviceLibrary:(id)arg1;
- (void)_removeMediaLibraryNotificationObservers;
- (void)_addRentalsUpdateNotificationObserver;
- (void)_addNotificationObserversWithDeviceLibrary:(id)arg1;
- (void)_addMediaLibraryNotificationObservers;
- (void)_updateRentals;
- (id)_createDetailNavigationViewControllerWithRootViewController:(id)arg1;
- (void)_homeShareMediaLibrariesDidChange:(id)arg1;
- (void)_setDisplayModeForLayoutType:(long long)arg1;
- (void)_showOrHideNoContentView;
- (id)_getMediaEntitiesForIndexPath:(id)arg1;
- (void)homeShareViewController:(id)arg1 didSelectHomeShare:(id)arg2;
- (void)gridCollectionViewController:(id)arg1 didSelectMediaEntity:(id)arg2;
- (void)categoryMenuViewControllerShouldDismiss:(id)arg1;
- (void)categoryMenuViewController:(id)arg1 didSelectMenuItemAtIndexPath:(id)arg2;
- (id)_viewControllerForIndexPath:(id)arg1;
- (void)updateForViewModel:(id)arg1;
- (void)fetchDidCompleteForViewModel:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithMediaLibrary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
