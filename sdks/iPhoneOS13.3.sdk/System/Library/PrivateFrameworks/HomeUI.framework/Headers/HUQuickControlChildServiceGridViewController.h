//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUQuickControlViewController.h>

@class HFChildServiceControlItem, HUQuickControlCollectionViewController;

@interface HUQuickControlChildServiceGridViewController : HUQuickControlViewController
{
    HUQuickControlCollectionViewController *_collectionViewController;
}

+ (id)controlItemPredicate;
@property(readonly, nonatomic) HUQuickControlCollectionViewController *collectionViewController; // @synthesize collectionViewController=_collectionViewController;
// - (void).cxx_destruct;
- (void)_subclass_configureQuickControlViewController:(id)arg1;
- (id)childQuickControlContentViewControllers;
@property(readonly, nonatomic) HFChildServiceControlItem *controlItem;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (id)hu_preloadContent;
- (id)initWithChildServiceControlItem:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3;
- (id)initWithControlItems:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3;

@end

