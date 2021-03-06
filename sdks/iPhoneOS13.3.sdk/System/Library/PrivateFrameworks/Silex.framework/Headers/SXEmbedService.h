//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXEmbedService-Protocol.h>

@class NSURLSession;
@protocol SXEmbedDataProvider;

@interface SXEmbedService : NSObject <SXEmbedService>
{
    id <SXEmbedDataProvider> _embedDataProvider;
    NSURLSession *_session;
}

@property(readonly, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) id <SXEmbedDataProvider> embedDataProvider; // @synthesize embedDataProvider=_embedDataProvider;
// - (void).cxx_destruct;
- (id)addAdditionalQueryParameters:(id)arg1 toURL:(id)arg2;
- (id)additionalQueryParametersForConfiguration:(id)arg1;
- (void)fetchHTMLFromOEmbedURL:(id)arg1 embedType:(id)arg2 completionBlock:(id /* CDUnknownBlockType */)arg3;
- (id)embedConfigurationForType:(id)arg1;
- (void)dealloc;
- (id)initWithDataProvider:(id)arg1;

@end

