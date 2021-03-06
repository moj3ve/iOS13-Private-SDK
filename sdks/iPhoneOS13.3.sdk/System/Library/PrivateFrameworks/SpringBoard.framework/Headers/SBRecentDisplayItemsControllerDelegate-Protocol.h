//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SBDisplayItem, SBRecentDisplayItemsController;

@protocol SBRecentDisplayItemsControllerDelegate <NSObject>

@optional
- (BOOL)recentDisplayItemsController:(SBRecentDisplayItemsController *)arg1 shouldAddItem:(SBDisplayItem *)arg2;
- (void)recentDisplayItemsController:(SBRecentDisplayItemsController *)arg1 didMoveItemToFront:(SBDisplayItem *)arg2;
- (void)recentDisplayItemsController:(SBRecentDisplayItemsController *)arg1 didAddItem:(SBDisplayItem *)arg2 andDropItem:(SBDisplayItem *)arg3;
- (void)recentDisplayItemsController:(SBRecentDisplayItemsController *)arg1 didAddItem:(SBDisplayItem *)arg2;
- (void)recentDisplayItemsController:(SBRecentDisplayItemsController *)arg1 didRemoveItem:(SBDisplayItem *)arg2;
- (void)recentDisplayItemsControllerDidUpdateDisplayItems:(SBRecentDisplayItemsController *)arg1;
@end

