//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface ArraySlicer : NSObject
{
    NSUInteger _sliceSize;
    NSUInteger _count;
    NSUInteger _offset;
    NSArray *_array;
}

// - (void).cxx_destruct;
- (id)unconsumed;
- (id)consumed;
- (id)nextSlice;
@property(readonly, nonatomic) NSUInteger remaining;
- (id)initWithArray:(id)arg1 sliceSize:(NSUInteger)arg2;

@end

