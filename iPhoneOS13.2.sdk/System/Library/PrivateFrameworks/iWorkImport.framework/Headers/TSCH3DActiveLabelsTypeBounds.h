//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexSet, NSMutableDictionary, NSMutableIndexSet, NSNumber;

__attribute__((visibility("hidden")))
@interface TSCH3DActiveLabelsTypeBounds : NSObject
{
    NSMutableIndexSet *_activeIndices;
    NSMutableDictionary *_map;
    NSNumber *_activeType;
}

@property(readonly, copy, nonatomic) NSNumber *activeType; // @synthesize activeType=_activeType;
- (_Bool)resetIndex:(long long)arg1;
- (_Bool)hasAnyCachedBoundsAtIndices:(id)arg1;
- (_Bool)hasCachedBoundsAtIndex:(unsigned long long)arg1;
- (id)arrayAtIndex:(long long)arg1;
- (id)active;
- (void)addBounds:(id)arg1;
- (_Bool)setActiveType:(long long)arg1;
@property(readonly, retain, nonatomic) NSIndexSet *activeIndices;
- (void)dealloc;
- (id)init;

@end
