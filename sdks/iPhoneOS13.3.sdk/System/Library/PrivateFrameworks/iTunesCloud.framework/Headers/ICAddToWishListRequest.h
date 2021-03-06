//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/ICRequestOperation.h>

@class ICAddToWishListResponse, ICStoreRequestContext, NSString;

@interface ICAddToWishListRequest : ICRequestOperation
{
    ICStoreRequestContext *_requestContext;
    NSString *_buyParams;
    long long _storeItemID;
    NSString *_itemName;
    NSString *_itemKind;
    ICAddToWishListResponse *_response;
}

// - (void).cxx_destruct;
- (void)execute;
- (void)performWithResponseHandler:(id /* CDUnknownBlockType */)arg1;
- (id)initWithRequestContext:(id)arg1 platformMetadataItem:(id)arg2;
- (id)initWithRequestContext:(id)arg1 buyParams:(id)arg2 storeItemID:(long long)arg3 itemName:(id)arg4 itemKind:(id)arg5;

@end

