//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPaymentSetupProduct.h>

@interface PKPaymentSetupProduct (PKUIUtilities)
- (void)resetCache;
- (id)logoCachedImage:(id /* block */)arg1;
- (id)thumbnailCachedImageForSize:(struct CGSize)arg1 completion:(id /* block */)arg2;
- (id)plasticCardCachedImage:(id /* block */)arg1;
- (id)_getCardImageUrlFromMetadata:(id)arg1 forScale:(double)arg2;
- (id)digitalCardCachedImage:(id /* block */)arg1;
- (void)_commonCachedImageFromURL:(id)arg1 completion:(id /* block */)arg2;
@end
