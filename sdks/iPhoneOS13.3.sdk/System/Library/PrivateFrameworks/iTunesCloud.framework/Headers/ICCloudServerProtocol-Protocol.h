//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class ICCloudAddReferral, ICCloudItemIDList, ICConnectionConfiguration, NSArray, NSDictionary, NSString;

@protocol ICCloudServerProtocol
- (void)loadBooksForStoreIDs:(NSArray *)arg1 configuration:(ICConnectionConfiguration *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)disableJaliscoGeniusForConfiguration:(ICConnectionConfiguration *)arg1 completion:(void (^)(NSError *))arg2;
- (void)loadJaliscoGeniusOperationStatusForConfiguration:(ICConnectionConfiguration *)arg1 completion:(void (^)(long long, NSError *))arg2;
- (void)cancelUpdateJaliscoGeniusDataForConfiguration:(ICConnectionConfiguration *)arg1 completion:(void (^)(NSError *))arg2;
- (void)updateJaliscoGeniusDataForConfiguration:(ICConnectionConfiguration *)arg1 completion:(void (^)(NSError *))arg2;
- (void)enableJaliscoGeniusForConfiguration:(ICConnectionConfiguration *)arg1 completion:(void (^)(NSError *))arg2;
- (void)setJaliscoGeniusCUID:(NSString *)arg1 forConfiguration:(ICConnectionConfiguration *)arg2 completion:(void (^)(NSError *))arg3;
- (void)loadJaliscoGeniusCUIDForConfiguration:(ICConnectionConfiguration *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)loadJaliscoGeniusLearnMoreURLForConfiguration:(ICConnectionConfiguration *)arg1 completion:(void (^)(NSURL *, NSError *))arg2;
- (void)loadIsJaliscoGeniusSupportedForConfiguration:(ICConnectionConfiguration *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)updateArtistHeroImagesForConfiguration:(ICConnectionConfiguration *)arg1;
- (void)setAlbumProperties:(NSDictionary *)arg1 forAlbumPersistentID:(long long)arg2 configuration:(ICConnectionConfiguration *)arg3 completion:(void (^)(NSError *))arg4;
- (void)uploadCloudPlaylistPropertiesForConfiguration:(ICConnectionConfiguration *)arg1 completion:(void (^)(NSError *))arg2;
- (void)uploadCloudItemPropertiesForConfiguration:(ICConnectionConfiguration *)arg1 completion:(void (^)(NSError *))arg2;
- (void)setItemProperties:(NSDictionary *)arg1 forSagaID:(NSUInteger)arg2 configuration:(ICConnectionConfiguration *)arg3 completion:(void (^)(NSError *))arg4;
- (void)setItemProperties:(NSDictionary *)arg1 forPurchaseHistoryID:(NSUInteger)arg2 configuration:(ICConnectionConfiguration *)arg3 completion:(void (^)(NSError *))arg4;
- (void)hideItemsWithPurchaseHistoryIDs:(NSArray *)arg1 configuration:(ICConnectionConfiguration *)arg2 completion:(void (^)(NSError *))arg3;
- (void)removeItemsWithSagaIDs:(NSArray *)arg1 configuration:(ICConnectionConfiguration *)arg2 completion:(void (^)(NSError *))arg3;
- (void)addStorePlaylistWithGlobalID:(NSString *)arg1 configuration:(ICConnectionConfiguration *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)sdk_addStoreItemWithOpaqueID:(NSString *)arg1 configuration:(ICConnectionConfiguration *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)addStoreItemWithAdamID:(long long)arg1 referral:(ICCloudAddReferral *)arg2 configuration:(ICConnectionConfiguration *)arg3 completion:(void (^)(NSDictionary *, NSError *))arg4;
- (void)updateSubscribedPlaylistsWithSagaIDs:(NSArray *)arg1 ignoreMinRefreshInterval:(BOOL)arg2 configuration:(ICConnectionConfiguration *)arg3 completion:(void (^)(NSError *))arg4;
- (void)uploadArtworkForPlaylistWithPersistentID:(long long)arg1 configuration:(ICConnectionConfiguration *)arg2 completion:(void (^)(NSError *))arg3;
- (void)removePlaylistsWithSagaIDs:(NSArray *)arg1 configuration:(ICConnectionConfiguration *)arg2 completion:(void (^)(NSError *))arg3;
- (void)publishPlaylistWithSagaID:(long long)arg1 configuration:(ICConnectionConfiguration *)arg2 completion:(void (^)(NSString *, NSString *, NSError *))arg3;
- (void)sdk_addStoreItemWithOpaqueID:(NSString *)arg1 toPlaylistWithPersistentID:(long long)arg2 configuration:(ICConnectionConfiguration *)arg3 completion:(void (^)(NSDictionary *, NSError *))arg4;
- (void)addItemWithSagaID:(long long)arg1 toPlaylistWithPersistentID:(long long)arg2 configuration:(ICConnectionConfiguration *)arg3 completion:(void (^)(NSError *))arg4;
- (void)addStoreItemWithAdamID:(long long)arg1 referral:(ICCloudAddReferral *)arg2 toPlaylistWithPersistentID:(long long)arg3 configuration:(ICConnectionConfiguration *)arg4 completion:(void (^)(NSError *))arg5;
- (void)setPlaylistProperties:(NSDictionary *)arg1 trackList:(ICCloudItemIDList *)arg2 forPlaylistPersistentID:(long long)arg3 configuration:(ICConnectionConfiguration *)arg4 completion:(void (^)(NSError *))arg5;
- (void)sdk_createPlaylistWithPersistentID:(long long)arg1 properties:(NSDictionary *)arg2 trackList:(ICCloudItemIDList *)arg3 configuration:(ICConnectionConfiguration *)arg4 completion:(void (^)(NSUInteger, NSError *))arg5;
- (void)createPlaylistWithPersistentID:(long long)arg1 properties:(NSDictionary *)arg2 trackList:(ICCloudItemIDList *)arg3 configuration:(ICConnectionConfiguration *)arg4 completion:(void (^)(NSUInteger, NSError *))arg5;
- (void)addGeniusPlaylistWithPersistentID:(long long)arg1 name:(NSString *)arg2 seedItemSagaIDs:(NSArray *)arg3 itemSagaIDs:(NSArray *)arg4 configuration:(ICConnectionConfiguration *)arg5 completion:(void (^)(NSUInteger, NSError *))arg6;
- (void)loadGeniusItemsForSagaID:(NSUInteger)arg1 configuration:(ICConnectionConfiguration *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)loadMissingArtworkForConfiguration:(ICConnectionConfiguration *)arg1;
- (void)loadArtworkInfoForSubscriptionContainerPersistentIDs:(NSArray *)arg1 configuration:(ICConnectionConfiguration *)arg2 completion:(void (^)(NSError *, NSArray *))arg3;
- (void)loadScreenshotInfoForSubscriptionPersistentIDs:(NSArray *)arg1 configuration:(ICConnectionConfiguration *)arg2 completion:(void (^)(NSError *, NSArray *))arg3;
- (void)loadArtworkInfoForSubscriptionItemPersistentIDs:(NSArray *)arg1 configuration:(ICConnectionConfiguration *)arg2 completion:(void (^)(NSError *, NSArray *))arg3;
- (void)loadScreenshotInfoForSagaIDs:(NSArray *)arg1 configuration:(ICConnectionConfiguration *)arg2 completion:(void (^)(NSError *, NSArray *))arg3;
- (void)loadArtworkInfoForContainerSagaIDs:(NSArray *)arg1 configuration:(ICConnectionConfiguration *)arg2 completion:(void (^)(NSError *, NSArray *))arg3;
- (void)loadArtworkInfoForSagaIDs:(NSArray *)arg1 configuration:(ICConnectionConfiguration *)arg2 completion:(void (^)(NSError *, NSArray *))arg3;
- (void)loadScreenshotInfoForPurchaseHistoryIDs:(NSArray *)arg1 configuration:(ICConnectionConfiguration *)arg2 completion:(void (^)(NSError *, NSArray *))arg3;
- (void)loadArtworkInfoForPurchaseHistoryIDs:(NSArray *)arg1 configuration:(ICConnectionConfiguration *)arg2 completion:(void (^)(NSError *, NSArray *))arg3;
- (void)deprioritizeAlbumArtistHeroImageForPersistentID:(long long)arg1 configuration:(ICConnectionConfiguration *)arg2;
- (void)deprioritizeArtistHeroImageForPersistentID:(long long)arg1 configuration:(ICConnectionConfiguration *)arg2;
- (void)deprioritizeSubscriptionContainerArtworkForPersistentID:(long long)arg1 configuration:(ICConnectionConfiguration *)arg2;
- (void)deprioritizeSubscriptionScreenshotForPersistentID:(long long)arg1 configuration:(ICConnectionConfiguration *)arg2;
- (void)deprioritizeSubscriptionItemArtworkForPersistentID:(long long)arg1 configuration:(ICConnectionConfiguration *)arg2;
- (void)deprioritizeContainerArtworkForSagaID:(NSUInteger)arg1 configuration:(ICConnectionConfiguration *)arg2;
- (void)deprioritizeScreenshotForSagaID:(NSUInteger)arg1 configuration:(ICConnectionConfiguration *)arg2;
- (void)deprioritizeItemArtworkForSagaID:(NSUInteger)arg1 configuration:(ICConnectionConfiguration *)arg2;
- (void)deprioritizeScreenshotForPurchaseHistoryID:(NSUInteger)arg1 configuration:(ICConnectionConfiguration *)arg2;
- (void)deprioritizeItemArtworkForPurchaseHistoryID:(NSUInteger)arg1 configuration:(ICConnectionConfiguration *)arg2;
- (void)importAlbumArtistHeroImageForPersistentID:(long long)arg1 configuration:(ICConnectionConfiguration *)arg2 completion:(void (^)(NSError *))arg3;
- (void)importArtistHeroImageForPersistentID:(long long)arg1 configuration:(ICConnectionConfiguration *)arg2 completion:(void (^)(NSError *))arg3;
- (void)importSubscriptionContainerArtworkForPersistentID:(long long)arg1 configuration:(ICConnectionConfiguration *)arg2 completion:(void (^)(NSError *))arg3;
- (void)importSubscriptionScreenshotForPersistentID:(long long)arg1 configuration:(ICConnectionConfiguration *)arg2 completion:(void (^)(NSError *))arg3;
- (void)importSubscriptionItemArtworkForPersistentID:(long long)arg1 configuration:(ICConnectionConfiguration *)arg2 completion:(void (^)(NSError *))arg3;
- (void)importContainerArtworkForSagaID:(NSUInteger)arg1 configuration:(ICConnectionConfiguration *)arg2 completion:(void (^)(NSError *))arg3;
- (void)importScreenshotForSagaID:(NSUInteger)arg1 configuration:(ICConnectionConfiguration *)arg2 completion:(void (^)(NSError *))arg3;
- (void)importItemArtworkForSagaID:(NSUInteger)arg1 configuration:(ICConnectionConfiguration *)arg2 completion:(void (^)(NSError *))arg3;
- (void)importScreenshotForPurchaseHistoryID:(NSUInteger)arg1 configuration:(ICConnectionConfiguration *)arg2 completion:(void (^)(NSError *))arg3;
- (void)importItemArtworkForPurchaseHistoryID:(NSUInteger)arg1 configuration:(ICConnectionConfiguration *)arg2 completion:(void (^)(NSError *))arg3;
- (void)loadLastKnownEnableICMLErrorStatusForConfiguration:(ICConnectionConfiguration *)arg1 completion:(void (^)(NSNumber *, NSError *))arg2;
- (void)loadJaliscoUpdateProgressForConfiguration:(ICConnectionConfiguration *)arg1 completion:(void (^)(NSError *, float))arg2;
- (void)loadIsJaliscoUpdateInProgressForConfiguration:(ICConnectionConfiguration *)arg1 completion:(void (^)(BOOL, BOOL))arg2;
- (void)loadSagaUpdateProgressForConfiguration:(ICConnectionConfiguration *)arg1 completion:(void (^)(NSError *, float))arg2;
- (void)loadIsSagaUpdateInProgressForConfiguration:(ICConnectionConfiguration *)arg1 completion:(void (^)(BOOL, BOOL))arg2;
- (void)loadUpdateProgressForConfiguration:(ICConnectionConfiguration *)arg1 completion:(void (^)(NSError *, float))arg2;
- (void)loadIsUpdateInProgressForConfiguration:(ICConnectionConfiguration *)arg1 completion:(void (^)(BOOL, BOOL))arg2;
- (void)isMediaKindDisabledForJaliscoLibrary:(long long)arg1 configuration:(ICConnectionConfiguration *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)removeJaliscoLibraryForConfiguration:(ICConnectionConfiguration *)arg1 completion:(void (^)(NSError *))arg2;
- (void)setCloudAddToPlaylistBehavior:(long long)arg1 forConfiguration:(ICConnectionConfiguration *)arg2 completion:(void (^)(NSError *))arg3;
- (void)deauthenticateAndDisableActiveLockerAccountWithCompletion:(void (^)(NSError *))arg1;
- (void)deauthenticateForConfiguration:(ICConnectionConfiguration *)arg1 completion:(void (^)(NSError *))arg2;
- (void)authenticateForConfiguration:(ICConnectionConfiguration *)arg1 startInitialImport:(BOOL)arg2 enableCloudLibraryPolicy:(long long)arg3 isExplicitUserAction:(BOOL)arg4 completion:(void (^)(NSError *))arg5;
- (void)updateSagaLibraryWithReason:(long long)arg1 forConfiguration:(ICConnectionConfiguration *)arg2 completion:(void (^)(NSError *))arg3;
- (void)updateJaliscoLibraryWithReason:(long long)arg1 forConfiguration:(ICConnectionConfiguration *)arg2 completion:(void (^)(NSError *))arg3;
- (void)isSagaAuthenticatedForConfiguration:(ICConnectionConfiguration *)arg1 completion:(void (^)(NSError *, BOOL))arg2;
- (void)setConnectionConfiguration:(ICConnectionConfiguration *)arg1 preferredVideoQuality:(NSUInteger)arg2 completion:(void (^)(NSError *))arg3;
- (void)setupInitialJaliscoPoolingForConfiguration:(ICConnectionConfiguration *)arg1;
- (void)setupInitialSagaPoolingForConfiguration:(ICConnectionConfiguration *)arg1;
@end
