//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUServiceGridItemManager.h>

@class HFMediaSystemBuilder, NSSet;

@interface HUMediaSystemEditorGridItemManager : HUServiceGridItemManager
{
    HFMediaSystemBuilder *_mediaSystemBuilder;
    NSSet *_prioritizedRooms;
}

+ (id /* block */)defaultItemProviderCreatorForMediaSystemBuilder:(id)arg1 options:(unsigned long long)arg2;
@property(retain, nonatomic) NSSet *prioritizedRooms; // @synthesize prioritizedRooms=_prioritizedRooms;
@property(readonly, nonatomic) HFMediaSystemBuilder *mediaSystemBuilder; // @synthesize mediaSystemBuilder=_mediaSystemBuilder;
- (id /* block */)_roomComparator;
- (id)_sortedItems:(id)arg1 forSectionIdentifier:(id)arg2;
- (id)_itemsToHideInSet:(id)arg1;
- (id)initWithMediaSystemBuilder:(id)arg1 delegate:(id)arg2;
- (id)initWithDelegate:(id)arg1 shouldGroupByRoom:(_Bool)arg2 itemProvidersCreator:(id /* block */)arg3;

@end
