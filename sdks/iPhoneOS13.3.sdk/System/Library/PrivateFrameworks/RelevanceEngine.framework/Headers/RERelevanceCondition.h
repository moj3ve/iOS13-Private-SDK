//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface RERelevanceCondition : NSObject <NSCopying>
{
    id /* CDUnknownBlockType */ _condition;
}

+ (id)conditionWithBlock:(id /* CDUnknownBlockType */)arg1;
// - (void).cxx_destruct;
- (float)_evaluateRelevanceWithEnvironment:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)_hash;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithCondtionBlock:(id /* CDUnknownBlockType */)arg1;

@end

