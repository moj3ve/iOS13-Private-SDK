//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RelevanceEngine/_REMLWeightedModel.h>

#import <RelevanceEngine/_REMLSingleWeightedModelProperties-Protocol.h>

@class REMLModel;

@interface _REMLSingleWeightedModel : _REMLWeightedModel <_REMLSingleWeightedModelProperties>
{
    REMLModel *_model;
}

@property(readonly, nonatomic) REMLModel *model;
- (_Bool)loadModelFromURL:(id)arg1 error:(id *)arg2;
- (_Bool)saveModelToURL:(id)arg1 error:(id *)arg2;
- (id)predictWithFeatures:(id)arg1;
- (void)trainModelWithFeatureMap:(id)arg1 positiveEvent:(id)arg2;
- (void)enumerateModels:(id /* block */)arg1;
- (id)initWithFeatureSet:(id)arg1 priorMean:(float)arg2 biasFeature:(id)arg3 modelVarianceEpsilon:(float)arg4;

@end
