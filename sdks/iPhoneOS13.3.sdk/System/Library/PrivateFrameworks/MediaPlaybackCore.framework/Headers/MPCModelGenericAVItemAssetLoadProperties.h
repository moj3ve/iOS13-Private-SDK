//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPIdentifierSet, MPModelFileAsset, MPModelGenericObject, MPModelHomeSharingAsset, MPModelStoreAsset, NSString;
@protocol MPCModelPlaybackAssetCacheProviding;

@interface MPCModelGenericAVItemAssetLoadProperties : NSObject
{
    BOOL _allowsHLSContent;
    BOOL _prefersVideoContent;
    BOOL _prefersHighQualityContent;
    BOOL _radioPlayback;
    NSString *_assetSourceStorefrontID;
    id <MPCModelPlaybackAssetCacheProviding> _assetCacheProvider;
    MPModelFileAsset *_fileAsset;
    MPModelGenericObject *_genericObject;
    MPModelHomeSharingAsset *_homeSharingAsset;
    MPIdentifierSet *_itemIdentifiers;
    MPModelStoreAsset *_storeAsset;
    NSUInteger _accountID;
    NSUInteger _delegatedAccountID;
    NSString *_householdID;
    NSString *_storefrontID;
}

@property(copy, nonatomic) NSString *storefrontID; // @synthesize storefrontID=_storefrontID;
@property(copy, nonatomic) NSString *householdID; // @synthesize householdID=_householdID;
@property(nonatomic) NSUInteger delegatedAccountID; // @synthesize delegatedAccountID=_delegatedAccountID;
@property(nonatomic) NSUInteger accountID; // @synthesize accountID=_accountID;
@property(retain, nonatomic) MPModelStoreAsset *storeAsset; // @synthesize storeAsset=_storeAsset;
@property(nonatomic, getter=isRadioPlayback) BOOL radioPlayback; // @synthesize radioPlayback=_radioPlayback;
@property(nonatomic) BOOL prefersHighQualityContent; // @synthesize prefersHighQualityContent=_prefersHighQualityContent;
@property(retain, nonatomic) MPIdentifierSet *itemIdentifiers; // @synthesize itemIdentifiers=_itemIdentifiers;
@property(retain, nonatomic) MPModelHomeSharingAsset *homeSharingAsset; // @synthesize homeSharingAsset=_homeSharingAsset;
@property(retain, nonatomic) MPModelGenericObject *genericObject; // @synthesize genericObject=_genericObject;
@property(retain, nonatomic) MPModelFileAsset *fileAsset; // @synthesize fileAsset=_fileAsset;
@property(retain, nonatomic) id <MPCModelPlaybackAssetCacheProviding> assetCacheProvider; // @synthesize assetCacheProvider=_assetCacheProvider;
@property(nonatomic) BOOL prefersVideoContent; // @synthesize prefersVideoContent=_prefersVideoContent;
@property(copy, nonatomic) NSString *assetSourceStorefrontID; // @synthesize assetSourceStorefrontID=_assetSourceStorefrontID;
@property(nonatomic) BOOL allowsHLSContent; // @synthesize allowsHLSContent=_allowsHLSContent;
// - (void).cxx_destruct;

@end
