//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/IKEntityProviding-Protocol.h>

@protocol IKEntityValueProviding, SKUIIndexBarEntryEntityValueProviding;

@protocol SKUIEntityProviding <IKEntityProviding>

@optional
- (id <IKEntityValueProviding>)sectionEntityValueProviderAtIndex:(long long)arg1;
- (NSUInteger)sectionForSectionIndexBarEntryAtIndex:(NSUInteger)arg1;
- (NSUInteger)numberOfIndexBarEntries;
- (id <SKUIIndexBarEntryEntityValueProviding>)indexBarEntryEntityValueProviderAtIndex:(NSUInteger)arg1;
@end

