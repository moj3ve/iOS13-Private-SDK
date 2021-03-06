//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MessageSecurity/MSCMSAttributeCoder-Protocol.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface MSCMSMessageDigestAttribute : NSObject <MSCMSAttributeCoder>
{
    NSData *_messageDigest;
}

+ (id)messageDigestAttributeWithDigest:(id)arg1;
@property(retain) NSData *messageDigest; // @synthesize messageDigest=_messageDigest;
// - (void).cxx_destruct;
- (id)initWithDigest:(id)arg1;
- (id)encodeAttributeWithError:(id )arg1;
- (id)initWithAttribute:(id)arg1 error:(id )arg2;

@end

