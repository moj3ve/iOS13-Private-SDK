//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFParameter.h>

@interface WFAppPickerParameter : WFParameter
{
    long long _appSearchType;
}

@property(readonly, nonatomic) long long appSearchType; // @synthesize appSearchType=_appSearchType;
- (id)stateForApp:(id)arg1;
- (id)accessoryIconForState:(id)arg1;
- (id)localizedLabelForState:(id)arg1;
- (id)localizedPlaceholder;
- (id)defaultSupportedVariableTypes;
- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;

@end

