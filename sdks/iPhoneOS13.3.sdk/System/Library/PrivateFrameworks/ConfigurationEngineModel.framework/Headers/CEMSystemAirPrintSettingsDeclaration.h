//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber;

@interface CEMSystemAirPrintSettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadAllowAirPrint;
    NSNumber *_payloadForceAirPrintTrustedTLSRequirement;
    NSNumber *_payloadAllowAirPrintiBeaconDiscovery;
    NSNumber *_payloadAllowAirPrintCredentialsStorage;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withAllowAirPrint:(id)arg2 withForceAirPrintTrustedTLSRequirement:(id)arg3 withAllowAirPrintiBeaconDiscovery:(id)arg4 withAllowAirPrintCredentialsStorage:(id)arg5;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSNumber *payloadAllowAirPrintCredentialsStorage; // @synthesize payloadAllowAirPrintCredentialsStorage=_payloadAllowAirPrintCredentialsStorage;
@property(copy, nonatomic) NSNumber *payloadAllowAirPrintiBeaconDiscovery; // @synthesize payloadAllowAirPrintiBeaconDiscovery=_payloadAllowAirPrintiBeaconDiscovery;
@property(copy, nonatomic) NSNumber *payloadForceAirPrintTrustedTLSRequirement; // @synthesize payloadForceAirPrintTrustedTLSRequirement=_payloadForceAirPrintTrustedTLSRequirement;
@property(copy, nonatomic) NSNumber *payloadAllowAirPrint; // @synthesize payloadAllowAirPrint=_payloadAllowAirPrint;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id )arg2;
- (id)assetReferences;
- (int)activationLevel;
- (BOOL)mustBeSupervised;
- (BOOL)multipleAllowed;

@end
