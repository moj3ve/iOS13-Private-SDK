//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PMLMultiLabelLogisticRegressionModel, SGQuickResponsesTransformerInstance;

@interface SGQuickResponsesModel : NSObject
{
    PMLMultiLabelLogisticRegressionModel *_model;
    SGQuickResponsesTransformerInstance *_transformer;
}

+ (void)setGlobalTransformerForTesting:(id)arg1;
+ (id)newTransformerInstanceForLanguage:(id)arg1 mode:(unsigned long long)arg2 plistPath:(id)arg3;
+ (id)transformerInstanceForLanguage:(id)arg1 mode:(unsigned long long)arg2 plistPath:(id)arg3;
+ (id)transformerInstanceForLanguage:(id)arg1 mode:(unsigned long long)arg2;
+ (id)modelForEntity:(id)arg1 type:(id)arg2 mode:(unsigned long long)arg3 language:(id)arg4 class:(Class)arg5 chunkPath:(id)arg6 plistPath:(id)arg7;
+ (id)modelForName:(id)arg1 language:(id)arg2 mode:(unsigned long long)arg3 chunkPath:(id)arg4 plistPath:(id)arg5;
+ (_Bool)shouldSampleForLabel:(id)arg1 inLanguage:(id)arg2;
+ (id)labelOf:(id)arg1 inLanguage:(id)arg2;
+ (id)labelOf:(id)arg1 withLabeler:(id)arg2;
+ (id)featuresOf:(id)arg1 inLanguage:(id)arg2 andMode:(unsigned long long)arg3;
+ (id)featuresOf:(id)arg1 withFeaturizer:(id)arg2 source:(id)arg3;
+ (id)configForLanguage:(id)arg1 mode:(unsigned long long)arg2 plistPath:(id)arg3;
- (void)setTransformer:(id)arg1;
- (id)initWithLazyMultiLabelModel:(id)arg1 language:(id)arg2 mode:(unsigned long long)arg3 plistPath:(id)arg4;
- (_Bool)shouldSampleForLabel:(id)arg1;
- (id)labelOf:(id)arg1;
- (id)featuresOf:(id)arg1;
- (id)classify:(id)arg1;
- (id)predict:(id)arg1;
- (id)config;

@end
