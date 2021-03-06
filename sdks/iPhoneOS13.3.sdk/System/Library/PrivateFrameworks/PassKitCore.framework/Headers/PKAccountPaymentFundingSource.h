//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString, PKAccountPaymentFundingDetails;

@interface PKAccountPaymentFundingSource : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    long long _type;
    NSString *_accountSuffix;
    PKAccountPaymentFundingDetails *_fundingDetails;
}

+ (BOOL)supportsSecureCoding;
+ (Class)fundingDetailsClassForFundingSourceType:(long long)arg1;
@property(copy, nonatomic) PKAccountPaymentFundingDetails *fundingDetails; // @synthesize fundingDetails=_fundingDetails;
@property(copy, nonatomic) NSString *accountSuffix; // @synthesize accountSuffix=_accountSuffix;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)hashComponentWithCertificatesResponse:(id)arg1;
- (id)jsonDictionaryRepresentationWithCertificatesResponse:(id)arg1;
- (id)jsonDictionaryRepresentation;
- (id)jsonString;
- (id)displayDescription;
- (id)bankAccountRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithType:(long long)arg1;

@end

