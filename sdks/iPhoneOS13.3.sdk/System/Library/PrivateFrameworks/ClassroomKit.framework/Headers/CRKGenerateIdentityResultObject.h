//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATTaskResultObject.h"

@class NSData;

@interface CRKGenerateIdentityResultObject : CATTaskResultObject
{
    NSData *_certificateData;
    NSData *_privateKeyData;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSData *privateKeyData; // @synthesize privateKeyData=_privateKeyData;
@property(copy, nonatomic) NSData *certificateData; // @synthesize certificateData=_certificateData;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

