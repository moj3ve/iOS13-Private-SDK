//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PGTitleGeneratorTypeMatching : NSObject
{
    long long _type;
    id /* CDUnknownBlockType */ _eventEvaluationBlock;
}

+ (id)typeMatchingWithType:(long long)arg1 eventEvaluationBlock:(id /* CDUnknownBlockType */)arg2;
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ eventEvaluationBlock; // @synthesize eventEvaluationBlock=_eventEvaluationBlock;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (id)initWithType:(long long)arg1 eventEvaluationBlock:(id /* CDUnknownBlockType */)arg2;

@end

