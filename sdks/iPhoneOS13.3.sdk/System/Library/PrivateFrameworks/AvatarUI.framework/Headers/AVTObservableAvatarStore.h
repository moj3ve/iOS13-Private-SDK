//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTAvatarStoreInternal-Protocol.h>

@protocol AVTAvatarStoreDelegate, AVTAvatarStoreInternal, OS_dispatch_queue;

@interface AVTObservableAvatarStore : NSObject <AVTAvatarStoreInternal>
{
    id <AVTAvatarStoreDelegate> _delegate;
    id <AVTAvatarStoreInternal> _store;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

+ (NSUInteger)maximumNumberOfFetchableAvatars;
+ (NSUInteger)maximumNumberOfSavableAvatars;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(readonly, nonatomic) id <AVTAvatarStoreInternal> store; // @synthesize store=_store;
@property(nonatomic) __weak id <AVTAvatarStoreDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)deleteRecentStickersForChangeTracker:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)recentStickersForFetchRequest:(id)arg1 error:(id )arg2;
- (void)didUseStickerWithAvatarIdentifier:(id)arg1 stickerIdentifier:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)deleteRecentStickersWithAvatarIdentifier:(id)arg1 stickerIdentifier:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)duplicateAvatar:(id)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;
- (void)saveAvatarRecord:(id)arg1 thumbnailAvatar:(id)arg2 completionBlock:(id /* CDUnknownBlockType */)arg3 thumbnailGenerationCompletionBlock:(id /* CDUnknownBlockType */)arg4;
- (void)deleteAvatarWithIdentifier:(id)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;
- (void)deleteAvatar:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)fetchAvatarsForFetchRequest:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)avatarsForFetchRequest:(id)arg1 error:(id )arg2;
- (BOOL)canCreateAvatarWithError:(id )arg1;
- (BOOL)canCreateAvatar;
- (id)initWithStore:(id)arg1 callbackQueue:(id)arg2;

@end

