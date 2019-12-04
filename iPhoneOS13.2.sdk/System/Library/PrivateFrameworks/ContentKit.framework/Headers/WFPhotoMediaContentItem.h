//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContentKit/WFGenericFileContentItem.h>

#import <ContentKit/WFContentItemClass-Protocol.h>

@class PHAsset, WFFileType;

@interface WFPhotoMediaContentItem : WFGenericFileContentItem <WFContentItemClass>
{
    WFFileType *_preferredFileType;
}

+ (_Bool)isAvailableOnPlatform:(long long)arg1;
+ (_Bool)hasLibrary;
+ (id)pluralFilterDescription;
+ (id)filterDescription;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)typeDescription;
+ (id)ownedPasteboardTypes;
+ (id)ownedTypes;
+ (_Bool)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+ (id)remoteItemWithAssetIdentifier:(id)arg1 named:(id)arg2;
+ (id)propertyBuilders;
+ (id)photoAlbums;
+ (void)runQuery:(id)arg1 withItems:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)itemWithSerializedItem:(id)arg1 forType:(id)arg2 named:(id)arg3;
+ (id)itemsWithBurstIdentifier:(id)arg1;
+ (id)itemWithAssetIdentifier:(id)arg1 assetFile:(id)arg2 nameIfKnown:(id)arg3;
+ (id)itemWithAssetIdentifier:(id)arg1 assetFile:(id)arg2;
+ (id)itemWithAssetIdentifier:(id)arg1;
@property(retain, nonatomic) WFFileType *preferredFileType; // @synthesize preferredFileType=_preferredFileType;
- (id)outputTypes;
- (id)assetRepresentationTypes;
- (id)fullSizeAssetResourcesInResources:(id)arg1;
- (_Bool)canGenerateRepresentationForType:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithName:(id)arg1 zone:(struct _NSZone *)arg2;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (void)generateObjectRepresentation:(id /* block */)arg1 options:(id)arg2 forClass:(Class)arg3;
- (void)generateAVAsset:(id /* block */)arg1 networkAccessAllowed:(_Bool)arg2;
- (void)generateFileRepresentation:(id /* block */)arg1 options:(id)arg2 forType:(id)arg3;
- (id)preferredAssetResourceForType:(id)arg1;
- (void)retrieveFileWithImageManager:(id /* block */)arg1 forType:(id)arg2;
- (void)retrieveAssetResource:(id)arg1 withNetworkAccess:(_Bool)arg2 completionHandler:(id /* block */)arg3;
- (void)getThumbnail:(id /* block */)arg1 ofSize:(struct CGSize)arg2;
@property(readonly, nonatomic) PHAsset *asset;
- (id)orientation;
- (_Bool)isScreenshot;
- (id)mediaType;
- (id)isFavorite;
- (id)isHidden;
- (id)isLivePhoto;
- (id)isBurst;
- (id)photoTypes;
- (_Bool)isPhotoType:(id)arg1;
- (id)height;
- (id)width;
- (id)model;
- (id)make;
- (struct CGSize)size;
- (id)metadataIfLocallyAvailable;
- (void)getFrameRate:(id /* block */)arg1;
- (void)getMetadata:(id /* block */)arg1;
- (id)assetResourceManager;
- (id)imageManager;
- (id)duration;
- (void)getPreferredFileExtension:(id /* block */)arg1;
- (void)getPreferredFileSize:(id /* block */)arg1;
- (id)additionalRepresentationsForSerialization;
- (_Bool)getListThumbnail:(id /* block */)arg1 forSize:(struct CGSize)arg2;
- (_Bool)getListSubtitle:(id /* block */)arg1;

@end
