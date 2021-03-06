//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData;

@interface IDSCertifiedDeliveryReplayKey : NSObject <NSCopying, NSSecureCoding>
{
    NSData *_payloadHash;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSData *payloadHash; // @synthesize payloadHash=_payloadHash;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToReplayKey:(id)arg1;
- (id)initWithHash:(id)arg1;
- (id)initWithPayload:(id)arg1 legacyIdentity:(id)arg2;

@end

