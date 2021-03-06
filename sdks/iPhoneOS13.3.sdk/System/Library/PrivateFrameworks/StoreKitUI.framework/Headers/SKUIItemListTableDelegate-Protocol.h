//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSIndexPath, NSString, SKUIItem, SKUIItemListTableViewController, SKUIItemState;

@protocol SKUIItemListTableDelegate <NSObject>

@optional
- (void)itemListWillBeginDragging:(SKUIItemListTableViewController *)arg1;
- (void)itemList:(SKUIItemListTableViewController *)arg1 willDisplayCellForItem:(SKUIItem *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)itemList:(SKUIItemListTableViewController *)arg1 didRemoveItemAtIndexPath:(NSIndexPath *)arg2;
- (BOOL)itemList:(SKUIItemListTableViewController *)arg1 canRemoveItemAtIndexPath:(NSIndexPath *)arg2;
- (NSString *)itemList:(SKUIItemListTableViewController *)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(NSIndexPath *)arg2;
- (SKUIItemState *)itemList:(SKUIItemListTableViewController *)arg1 didConfirmItemOfferForItem:(SKUIItem *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)itemList:(SKUIItemListTableViewController *)arg1 didDeselectItem:(SKUIItem *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)itemList:(SKUIItemListTableViewController *)arg1 didSelectItem:(SKUIItem *)arg2 atIndexPath:(NSIndexPath *)arg3;
@end

