//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class RETrainingSimulationClient;

@protocol RETrainingSimulationClientDelegate <NSObject>

@optional
- (void)availableRelevanceEnginesDidChangeForTrainingSimulationClient:(RETrainingSimulationClient *)arg1;
- (void)trainingSimulationClientWasInvalidated:(RETrainingSimulationClient *)arg1;
- (void)trainingSimulationClientWasInterrupted:(RETrainingSimulationClient *)arg1;
@end
