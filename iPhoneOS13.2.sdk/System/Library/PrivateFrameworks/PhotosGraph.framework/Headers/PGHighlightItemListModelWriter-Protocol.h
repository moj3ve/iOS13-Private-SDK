//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class PGHighlightItemList;
@protocol PGHighlightItem;

@protocol PGHighlightItemListModelWriter 
- (void)setVisibilityState:(unsigned short)arg1 forHighlightItem:(id <PGHighlightItem>)arg2;
- (id)consumeHighlightItemList:(PGHighlightItemList *)arg1;
@end
