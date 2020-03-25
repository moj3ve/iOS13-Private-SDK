//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GEOPlaceDataProvider : NSObject
{
    BOOL _isLoading;
    id /* CDUnknownBlockType */ _finishedHandler;
    id /* CDUnknownBlockType */ _errorHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ errorHandler; // @synthesize errorHandler=_errorHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ finishedHandler; // @synthesize finishedHandler=_finishedHandler;
@property(nonatomic) BOOL isLoading; // @synthesize isLoading=_isLoading;
// - (void).cxx_destruct;
- (void)providerDidCancel;
- (void)providerReceivedErrorCode:(long long)arg1 userInfo:(id)arg2;
- (void)providerReceivedResponse:(id)arg1 userInfo:(id)arg2;
- (void)cancelProviderRequest;
- (void)startProviderWithRequest:(id)arg1 appIdentifier:(id)arg2;
- (void)cancelRequest;
- (void)startRequest:(id)arg1 appIdentifier:(id)arg2 finished:(id /* CDUnknownBlockType */)arg3 error:(id /* CDUnknownBlockType */)arg4;
- (void)requestCompleted;
- (void)dealloc;

@end
