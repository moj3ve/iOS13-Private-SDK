//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class NSMutableDictionary;

@interface HFTransformItemProvider : HFItemProvider
{
    HFItemProvider *_sourceProvider;
    id /* CDUnknownBlockType */ _transformationBlock;
    NSMutableDictionary *_transformedItems;
}

@property(retain, nonatomic) NSMutableDictionary *transformedItems; // @synthesize transformedItems=_transformedItems;
@property(copy, nonatomic) id /* CDUnknownBlockType */ transformationBlock; // @synthesize transformationBlock=_transformationBlock;
@property(retain, nonatomic) HFItemProvider *sourceProvider; // @synthesize sourceProvider=_sourceProvider;
// - (void).cxx_destruct;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithSourceProvider:(id)arg1 transformationBlock:(id /* CDUnknownBlockType */)arg2;
- (id)init;

@end

