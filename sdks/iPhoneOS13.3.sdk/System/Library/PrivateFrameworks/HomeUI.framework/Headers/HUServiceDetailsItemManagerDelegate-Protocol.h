//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HFItemManagerDelegate-Protocol.h>

@class HFControlPanelItem, HFItemManager, HFServiceItem, NSString;

@protocol HUServiceDetailsItemManagerDelegate <HFItemManagerDelegate>
- (NSString *)itemManager:(HFItemManager *)arg1 sectionFooterForControlPanelItem:(HFControlPanelItem *)arg2 forServiceItem:(HFServiceItem *)arg3;
- (NSString *)itemManager:(HFItemManager *)arg1 sectionTitleForControlPanelItem:(HFControlPanelItem *)arg2 forServiceItem:(HFServiceItem *)arg3;
- (BOOL)itemManager:(HFItemManager *)arg1 shouldShowSectionTitleForControlPanelItem:(HFControlPanelItem *)arg2;
- (BOOL)itemManager:(HFItemManager *)arg1 shouldShowControlPanelItem:(HFControlPanelItem *)arg2;
@end

