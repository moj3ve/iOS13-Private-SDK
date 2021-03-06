//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>


@class NSArray, UICollectionView;
@protocol WFActionDrawerAppsTableViewCellDelegate;

@interface WFActionDrawerAppsTableViewCell : UITableViewCell <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    NSArray *_appSections;
    id <WFActionDrawerAppsTableViewCellDelegate> _delegate;
    UICollectionView *_appsCollectionView;
    NSArray *_appItems;
}

@property(retain, nonatomic) NSArray *appItems; // @synthesize appItems=_appItems;
@property(retain, nonatomic) UICollectionView *appsCollectionView; // @synthesize appsCollectionView=_appsCollectionView;
@property(nonatomic) __weak id <WFActionDrawerAppsTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *appSections; // @synthesize appSections=_appSections;
// - (void).cxx_destruct;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)configureWithActionDrawerSections:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

