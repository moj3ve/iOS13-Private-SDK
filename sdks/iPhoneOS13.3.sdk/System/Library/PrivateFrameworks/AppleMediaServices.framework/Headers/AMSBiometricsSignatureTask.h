//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

@class AMSBiometricsSignatureRequest;

__attribute__((visibility("hidden")))
@interface AMSBiometricsSignatureTask : AMSTask
{
    AMSBiometricsSignatureRequest *_request;
}

@property(readonly, nonatomic) AMSBiometricsSignatureRequest *request; // @synthesize request=_request;
// - (void).cxx_destruct;
- (id)performSignature;
- (id)initWithRequest:(id)arg1;

@end

