//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUPaging-Protocol.h>

@class NSArray, NSOrderedSet;
@protocol NUPage;

@interface NUPagingBlueprint : NSObject <NUPaging>
{
    NSOrderedSet *_blueprintItems;
}

@property(retain, nonatomic) NSOrderedSet *blueprintItems; // @synthesize blueprintItems=_blueprintItems;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *allPages;
@property(readonly, nonatomic) id <NUPage> lastPage;
@property(readonly, nonatomic) id <NUPage> firstPage;
- (void)forEachPage:(id /* CDUnknownBlockType */)arg1;
- (id)pageAfterIdentifier:(id)arg1;
- (id)pageForIdentifier:(id)arg1;
- (id)pageBeforeForIdentifier:(id)arg1;
- (id)initWithPages:(id)arg1;

@end

