//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable;

@interface FCFeedPersonalizedItems : NSObject
{
    NSArray *_itemsToShow;
    NSArray *_itemsToHide;
    NSMapTable *_scoreProfiles;
}

@property(retain, nonatomic) NSMapTable *scoreProfiles; // @synthesize scoreProfiles=_scoreProfiles;
@property(retain, nonatomic) NSArray *itemsToHide; // @synthesize itemsToHide=_itemsToHide;
@property(retain, nonatomic) NSArray *itemsToShow; // @synthesize itemsToShow=_itemsToShow;
// - (void).cxx_destruct;

@end

