//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

__attribute__((visibility("hidden")))
@interface _UISceneLayerTargetWithContext : NSObject <UISceneLayerTarget>
{
    id _context;
    NSUInteger _equalityType;
    id /* CDUnknownBlockType */ _block;
}

// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (BOOL)matchesLayer:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithContext:(id)arg1 equalityType:(NSUInteger)arg2 matchingBlock:(id /* CDUnknownBlockType */)arg3;

@end

