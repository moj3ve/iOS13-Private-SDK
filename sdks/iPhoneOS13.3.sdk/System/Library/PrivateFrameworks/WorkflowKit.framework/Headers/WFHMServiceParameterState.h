//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFParameterState-Protocol.h>

@class HMService, NSDictionary, NSString;

@interface WFHMServiceParameterState : NSObject <WFParameterState>
{
    HMService *_service;
    NSString *_homeIdentifier;
    NSDictionary *_serializedService;
}

@property(retain, nonatomic) NSDictionary *serializedService; // @synthesize serializedService=_serializedService;
@property(readonly, nonatomic) NSString *homeIdentifier; // @synthesize homeIdentifier=_homeIdentifier;
// - (void).cxx_destruct;
- (void)processWithVariableSource:(id)arg1 parameter:(id)arg2 userInputRequiredHandler:(id /* CDUnknownBlockType */)arg3 valueHandler:(id /* CDUnknownBlockType */)arg4;
- (id)containedVariables;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, nonatomic) HMService *service; // @synthesize service=_service;
- (id)serializedRepresentation;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (id)initWithService:(id)arg1 homeIdentifier:(id)arg2;

@end

