//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class REFeature;

@interface REHistogram : NSObject <NSCopying>
{
    REFeature *_feature;
}

@property(readonly, nonatomic) REFeature *feature; // @synthesize feature=_feature;
- (void)enumerateValuesUsingBlock:(id /* block */)arg1;
- (unsigned long long)countOfValuesBetweenMinValue:(unsigned long long)arg1 maxValue:(unsigned long long)arg2;
- (unsigned long long)countForValue:(unsigned long long)arg1;
- (void)removeValue:(unsigned long long)arg1;
- (void)addValue:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long standardDeviation;
@property(readonly, nonatomic) unsigned long long mean;
@property(readonly, nonatomic) unsigned long long count;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithFeature:(id)arg1 binningSize:(unsigned long long)arg2;
- (id)initWithFeature:(id)arg1;

@end
