//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import <HomeUI/HUResizableCellDelegate-Protocol.h>

@class NSMapTable;

@interface HUCollectionViewController : UICollectionViewController <HUResizableCellDelegate>
{
    NSMapTable *_installedChildViewControllersKeyedByCell;
}

@property(retain, nonatomic) NSMapTable *installedChildViewControllersKeyedByCell; // @synthesize installedChildViewControllersKeyedByCell=_installedChildViewControllersKeyedByCell;
// - (void).cxx_destruct;
- (void)didUpdateRequiredHeightForCell:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithCollectionViewLayout:(id)arg1;

@end

