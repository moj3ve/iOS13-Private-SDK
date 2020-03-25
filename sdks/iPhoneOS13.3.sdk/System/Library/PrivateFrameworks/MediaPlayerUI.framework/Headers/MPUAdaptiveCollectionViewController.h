//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPUFoundation/MPUDataSourceViewController.h>

@class NSMutableDictionary;

@interface MPUAdaptiveCollectionViewController : MPUDataSourceViewController
{
    UIEdgeInsets _contentInsetAdditions;
    UIEdgeInsets _scrollIndicatorInsetsAdditions;
    NSMutableDictionary *_sizeClassToClassMap;
}

@property(retain, nonatomic) NSMutableDictionary *sizeClassToClassMap; // @synthesize sizeClassToClassMap=_sizeClassToClassMap;
// - (void).cxx_destruct;
- (void)_updateViewControllerIfNecessary;
- (void)_restoreTopVisibleIndexPath:(id)arg1;
- (id)_indexPathOfTopVisibleItem;
- (id)_childDataSourceViewController;
- (void)_applyNewScrollIndicatorInsetsAdditions:(UIEdgeInsets)arg1 withExistingScrollIndicatorInsetsAdditions:(UIEdgeInsets)arg2 toScrollView:(id)arg3;
- (void)_applyNewContentInsetAdditions:(UIEdgeInsets)arg1 withExistingContentInsetAdditions:(UIEdgeInsets)arg2 toScrollView:(id)arg3;
- (void)dataSourceDidInvalidate;
- (void)reloadData;
- (void)setViewControllerClass:(Class)arg1 forHorizontalSizeClass:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (id)contentScrollView;
- (void)viewDidLayoutSubviews;

@end
