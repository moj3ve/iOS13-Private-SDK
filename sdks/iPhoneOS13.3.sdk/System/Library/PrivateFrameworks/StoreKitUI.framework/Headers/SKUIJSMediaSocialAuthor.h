//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUIJSMediaSocialAuthor-Protocol.h>

@class NSArray, NSDictionary, NSString, SKUIMediaSocialAuthor;

__attribute__((visibility("hidden")))
@interface SKUIJSMediaSocialAuthor : NSObject <SKUIJSMediaSocialAuthor>
{
    SKUIMediaSocialAuthor *_mediaSocialAuthor;
}

// - (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *storePlatformData;
@property(readonly, nonatomic) NSArray *permissions;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *entityType;
@property(readonly, nonatomic) NSString *entityIdentifier;
@property(readonly, nonatomic) NSString *dsId;
- (id)initWithSKUIMediaSocialAuthor:(id)arg1;

@end

