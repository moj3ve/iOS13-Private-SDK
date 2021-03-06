//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableData;

@interface HAPSecuritySessionEncryption : NSObject
{
    NSData *_inputKey;
    NSMutableData *_inputNonce;
    NSData *_outputKey;
    NSMutableData *_outputNonce;
}

@property(retain, nonatomic) NSMutableData *outputNonce; // @synthesize outputNonce=_outputNonce;
@property(retain, nonatomic) NSData *outputKey; // @synthesize outputKey=_outputKey;
@property(retain, nonatomic) NSMutableData *inputNonce; // @synthesize inputNonce=_inputNonce;
@property(retain, nonatomic) NSData *inputKey; // @synthesize inputKey=_inputKey;
// - (void).cxx_destruct;
- (id)decrypt:(const void )arg1 length:(NSUInteger)arg2 additionalAuthData:(const void )arg3 additionalAuthDataLength:(NSUInteger)arg4 authTagData:(const void )arg5 authTagDataLength:(NSUInteger)arg6 error:(id )arg7;
- (id)decrypt:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(id )arg3;
- (id)encrypt:(id)arg1 additionalAuthenticatedData:(id)arg2;
- (id)initWithInputKey:(id)arg1 outputKey:(id)arg2;
- (id)init;

@end

