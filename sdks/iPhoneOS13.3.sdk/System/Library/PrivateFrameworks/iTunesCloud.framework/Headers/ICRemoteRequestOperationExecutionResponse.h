//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSError;
@protocol NSSecureCoding;

@interface ICRemoteRequestOperationExecutionResponse : NSObject <NSSecureCoding>
{
    id <NSSecureCoding> _remoteRequestOperationResponse;
    NSError *_remoteRequestOperationError;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSError *remoteRequestOperationError; // @synthesize remoteRequestOperationError=_remoteRequestOperationError;
@property(retain, nonatomic) id <NSSecureCoding> remoteRequestOperationResponse; // @synthesize remoteRequestOperationResponse=_remoteRequestOperationResponse;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRemoteRequestOperationResponse:(id)arg1 remoteRequestOperationError:(id)arg2;

@end

