//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXPhotoKitAssetActionPerformer.h>

@class NSProgress;

@interface PXPhotoKitSelectVariationAssetActionPerformer : PXPhotoKitAssetActionPerformer
{
    NSProgress *_progress;
}

+ (BOOL)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;
+ (id)editOperationType;
+ (id)editOperationManager;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
// - (void).cxx_destruct;
- (void)cancelActionWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)performBackgroundTask;

@end

