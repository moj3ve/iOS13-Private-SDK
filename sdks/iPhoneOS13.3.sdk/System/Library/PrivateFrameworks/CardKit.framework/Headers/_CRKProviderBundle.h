//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSBundle.h>

#import <CardKit/CRKIdentifiedProviding-Protocol.h>

@class NSString;
@protocol CRKProviding;

@interface _CRKProviderBundle : NSBundle <CRKIdentifiedProviding>
{
    id <CRKProviding> _provider;
}

// - (void).cxx_destruct;
- (void)presentation:(id)arg1 didApplyCardSectionViewSource:(id)arg2 toCardViewController:(id)arg3;
- (NSUInteger)displayPriorityForCard:(id)arg1;
- (id)cardViewControllerForCard:(id)arg1;
- (void)requestIdentifiedCardSectionViewProviderForCard:(id)arg1 delegate:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)requestCardSectionViewProviderForCard:(id)arg1 delegate:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
@property(readonly, copy, nonatomic) NSString *providerIdentifier;
- (void)_initializeProviderWithClass:(Class)arg1;
- (id)provider;

@end

