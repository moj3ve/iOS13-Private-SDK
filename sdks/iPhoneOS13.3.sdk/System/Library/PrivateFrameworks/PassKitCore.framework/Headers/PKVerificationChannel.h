//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface PKVerificationChannel : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _requiresUserInteraction;
    NSString *_identifier;
    NSUInteger _type;
    NSString *_organizationName;
    NSString *_contactPoint;
    NSString *_sourceAddress;
    NSString *_typeDescription;
}

+ (BOOL)supportsSecureCoding;
+ (id)verificationChannelWithDictionary:(id)arg1 andOrganizationName:(id)arg2;
@property(copy, nonatomic) NSString *typeDescription; // @synthesize typeDescription=_typeDescription;
@property(copy, nonatomic) NSString *sourceAddress; // @synthesize sourceAddress=_sourceAddress;
@property(copy, nonatomic) NSString *contactPoint; // @synthesize contactPoint=_contactPoint;
@property(nonatomic) BOOL requiresUserInteraction; // @synthesize requiresUserInteraction=_requiresUserInteraction;
@property(copy, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property(nonatomic) NSUInteger type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (BOOL)needsServerRequest;
- (id)description;
@property(readonly, copy, nonatomic) NSString *typeDescriptionUnlocalized;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

