//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

@interface WFGetTravelTimeAction : WFAction
{
}

+ (NSUInteger)transportTypeFromString:(id)arg1;
- (BOOL)setParameterState:(id)arg1 forKey:(id)arg2;
- (id)outputContentClasses;
- (void)getMapItemFromCollection:(id)arg1 parameterKey:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)runAsynchronouslyWithInput:(id)arg1;

@end

