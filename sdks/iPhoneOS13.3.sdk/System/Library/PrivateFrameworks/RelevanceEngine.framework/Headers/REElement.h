//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/REAutomaticExportedInterface-Protocol.h>

@class NSArray, NSString, REContent, REElementAction;

@interface REElement : NSObject <REAutomaticExportedInterface, NSCopying, NSCoding>
{
    NSString *_bundleIdentifier;
    NSString *_identifier;
    NSUInteger _privacyBehavior;
    REContent *_content;
    REContent *_idealizedContent;
    NSArray *_relevanceProviders;
    REElementAction *_action;
}

+ (id)_supportedDictionaryEncodingKeys;
@property(readonly, nonatomic) REElementAction *action; // @synthesize action=_action;
@property(readonly, nonatomic) NSArray *relevanceProviders; // @synthesize relevanceProviders=_relevanceProviders;
@property(readonly, nonatomic) REContent *idealizedContent; // @synthesize idealizedContent=_idealizedContent;
@property(readonly, nonatomic) REContent *content; // @synthesize content=_content;
@property(readonly, nonatomic) NSUInteger privacyBehavior; // @synthesize privacyBehavior=_privacyBehavior;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (BOOL)_relevanceProvidersEqualToElement:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (void)_updateIdentifier:(id)arg1;
- (BOOL)isNoContentElement;
- (void)setBundleIdentifier:(id)arg1;
- (id)bundleIdentifier;
- (id)shallowCopy;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyElementWithUpdatedRelevanceProviders:(id)arg1;
- (void)finalizeContent;
- (id)dictionaryEncodingWithRelevanceProviderGenerator:(id)arg1;
- (id)initWithDictionary:(id)arg1 relevanceProviderGenerator:(id)arg2;
- (id)initWithIdentifier:(id)arg1 content:(id)arg2 idealizedContent:(id)arg3 action:(id)arg4 relevanceProviders:(id)arg5 privacyBehavior:(NSUInteger)arg6;
- (id)initWithIdentifier:(id)arg1 content:(id)arg2 action:(id)arg3 relevanceProviders:(id)arg4 privacyBehavior:(NSUInteger)arg5;
- (id)initWithIdentifier:(id)arg1 content:(id)arg2 action:(id)arg3 relevanceProviders:(id)arg4;
- (id)initWithIdentifier:(id)arg1 content:(id)arg2 idealizedContent:(id)arg3 action:(id)arg4 relevanceProviders:(id)arg5;

@end
