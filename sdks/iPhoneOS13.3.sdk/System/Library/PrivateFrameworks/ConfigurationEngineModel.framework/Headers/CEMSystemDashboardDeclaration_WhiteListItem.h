//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMSystemDashboardDeclaration_WhiteListItem : CEMPayloadBase
{
    NSString *_payloadType;
    NSString *_payloadID;
}

+ (id)buildRequiredOnlyWithType:(id)arg1 withID:(id)arg2;
+ (id)buildWithType:(id)arg1 withID:(id)arg2;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) NSString *payloadID; // @synthesize payloadID=_payloadID;
@property(copy, nonatomic) NSString *payloadType; // @synthesize payloadType=_payloadType;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id )arg2;

@end
