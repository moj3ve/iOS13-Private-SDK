//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIFeedbackGenerator.h"


__attribute__((visibility("hidden")))
@interface _UIClickPresentationFeedbackGenerator : UIFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven>
{
}

+ (Class)_configurationClass;
- (void)userInteractionCancelled;
- (void)userInteractionEnded;
- (void)userInteractionStarted;
- (void)dragged;
- (void)popped;
- (void)previewed;
- (id)_clickConfiguration;
- (id)initWithCoordinateSpace:(id)arg1;

@end

