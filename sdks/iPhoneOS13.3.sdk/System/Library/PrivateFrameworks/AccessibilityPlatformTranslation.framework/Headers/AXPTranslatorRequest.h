//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class AXPTranslationObject, NSDictionary;

@interface AXPTranslatorRequest : NSObject <NSCopying, NSSecureCoding>
{
    AXPTranslationObject *_translation;
    NSUInteger _requestType;
    NSUInteger _attributeType;
    NSUInteger _actionType;
    NSDictionary *_parameters;
    NSUInteger _clientType;
}

+ (id)allowedDecodableClasses;
+ (id)requestWithTranslation:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) NSUInteger clientType; // @synthesize clientType=_clientType;
@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(nonatomic) NSUInteger actionType; // @synthesize actionType=_actionType;
@property(nonatomic) NSUInteger attributeType; // @synthesize attributeType=_attributeType;
@property(nonatomic) NSUInteger requestType; // @synthesize requestType=_requestType;
@property(retain, nonatomic) AXPTranslationObject *translation; // @synthesize translation=_translation;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;

@end

