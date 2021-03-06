//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXInboxModelDataSourceManager.h>

#import <PhotosUICore/PXInboxModelTitleProvider-Protocol.h>
#import <PhotosUICore/PXInboxProviderSource-Protocol.h>

@class NSArray, PXSampleInboxMediaProvider;
@protocol PXInboxModelDetailViewControllerProvider, PXInboxModelMediaProvider, PXInboxModelTitleProvider;

@interface PXSampleInboxDataSourceManager : PXInboxModelDataSourceManager <PXInboxProviderSource, PXInboxModelTitleProvider>
{
    NSArray *_mockedModels;
    PXSampleInboxMediaProvider *_sampleMediaProvider;
}

@property(retain, nonatomic) PXSampleInboxMediaProvider *sampleMediaProvider; // @synthesize sampleMediaProvider=_sampleMediaProvider;
@property(retain, nonatomic) NSArray *mockedModels; // @synthesize mockedModels=_mockedModels;
// - (void).cxx_destruct;
- (void)requestTitleAndSubtitleForModel:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)subtitleForModel:(id)arg1;
- (id)titleForModel:(id)arg1;
@property(readonly, nonatomic) id <PXInboxModelTitleProvider> titleProvider;
@property(readonly, nonatomic) id <PXInboxModelMediaProvider> mediaProvider;
@property(readonly, nonatomic) id <PXInboxModelDetailViewControllerProvider> detailViewControllerProvider;
- (id)providerSource;
- (id)_dataSourceSnapshot;
- (void)_updateDataSource;
- (void)_changeData;
- (id)_modelElements;
- (void)_generateModels;
- (id)createInitialDataSource;
- (id)init;

@end

