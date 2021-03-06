//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSData, NSDecimalNumber, NSString;

@interface PKPaymentPrepareTransactionDetailsResponse : PKPaymentWebServiceResponse
{
    NSDecimalNumber *_amount;
    NSString *_secureElementIdentifier;
    NSData *_instructions;
    NSData *_signature;
}

@property(readonly, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(readonly, nonatomic) NSData *instructions; // @synthesize instructions=_instructions;
@property(readonly, nonatomic) NSString *secureElementIdentifier; // @synthesize secureElementIdentifier=_secureElementIdentifier;
@property(readonly, nonatomic) NSDecimalNumber *amount; // @synthesize amount=_amount;
// - (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end

