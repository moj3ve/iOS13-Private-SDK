//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCAssetKeyManagerType-Protocol.h>
#import <NewsCore/FCOperationThrottlerDelegate-Protocol.h>

@class FCThreadSafeMutableDictionary, FCThreadSafeMutableSet;
@protocol FCAssetKeyCacheType, FCAssetKeyManagerDelegate, FCAssetKeyServiceType, FCOperationThrottler;

@interface FCAssetKeyManager : NSObject <FCOperationThrottlerDelegate, FCAssetKeyManagerType>
{
    id <FCAssetKeyServiceType> _service;
    id <FCAssetKeyCacheType> _cache;
    id <FCAssetKeyManagerDelegate> _delegate;
    id <FCOperationThrottler> _throttler;
    FCThreadSafeMutableSet *_pendingWrappingKeyIDs;
    FCThreadSafeMutableDictionary *_errorsByKey;
}

@property(readonly, nonatomic) FCThreadSafeMutableDictionary *errorsByKey; // @synthesize errorsByKey=_errorsByKey;
@property(readonly, nonatomic) FCThreadSafeMutableSet *pendingWrappingKeyIDs; // @synthesize pendingWrappingKeyIDs=_pendingWrappingKeyIDs;
@property(readonly, nonatomic) id <FCOperationThrottler> throttler; // @synthesize throttler=_throttler;
@property(readonly, nonatomic) __weak id <FCAssetKeyManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <FCAssetKeyCacheType> cache; // @synthesize cache=_cache;
@property(readonly, nonatomic) id <FCAssetKeyServiceType> service; // @synthesize service=_service;
// - (void).cxx_destruct;
- (BOOL)_canRetryAfterNetworkError:(id)arg1;
- (void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)eraseAllKeys;
- (void)clearUnauthorizedAssetKeys;
- (void)fetchWrappingKeyWithID:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)cachedWrappingKeyWithID:(id)arg1;
- (id)initWithService:(id)arg1 cache:(id)arg2 delegate:(id)arg3;

@end
