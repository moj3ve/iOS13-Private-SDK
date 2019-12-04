//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class GEOMapRegion, GEOPDCategorySearchResultSection, GEOPDRelatedSearchSuggestion, GEOPDSearchClientBehavior, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDCategorySearchResult : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_browseCategorys;
    GEOPDCategorySearchResultSection *_categorySearchResultSection;
    GEOPDRelatedSearchSuggestion *_defaultRelatedSearchSuggestion;
    GEOMapRegion *_displayMapRegion;
    NSMutableArray *_relatedSearchSuggestions;
    NSMutableArray *_resultDetourInfos;
    GEOPDSearchClientBehavior *_searchClientBehavior;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    _Bool _enablePartialClientization;
    _Bool _isChainResultSet;
    struct {
        unsigned int has_enablePartialClientization:1;
        unsigned int has_isChainResultSet:1;
        unsigned int read_unknownFields:1;
        unsigned int read_browseCategorys:1;
        unsigned int read_categorySearchResultSection:1;
        unsigned int read_defaultRelatedSearchSuggestion:1;
        unsigned int read_displayMapRegion:1;
        unsigned int read_relatedSearchSuggestions:1;
        unsigned int read_resultDetourInfos:1;
        unsigned int read_searchClientBehavior:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_browseCategorys:1;
        unsigned int wrote_categorySearchResultSection:1;
        unsigned int wrote_defaultRelatedSearchSuggestion:1;
        unsigned int wrote_displayMapRegion:1;
        unsigned int wrote_relatedSearchSuggestions:1;
        unsigned int wrote_resultDetourInfos:1;
        unsigned int wrote_searchClientBehavior:1;
        unsigned int wrote_enablePartialClientization:1;
        unsigned int wrote_isChainResultSet:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)browseCategoryType;
+ (Class)resultDetourInfoType;
+ (Class)relatedSearchSuggestionType;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEOPDCategorySearchResultSection *categorySearchResultSection;
@property(readonly, nonatomic) _Bool hasCategorySearchResultSection;
- (void)_readCategorySearchResultSection;
- (id)browseCategoryAtIndex:(unsigned long long)arg1;
- (unsigned long long)browseCategorysCount;
- (void)_addNoFlagsBrowseCategory:(id)arg1;
- (void)addBrowseCategory:(id)arg1;
- (void)clearBrowseCategorys;
@property(retain, nonatomic) NSMutableArray *browseCategorys;
- (void)_readBrowseCategorys;
@property(nonatomic) _Bool hasEnablePartialClientization;
@property(nonatomic) _Bool enablePartialClientization;
@property(retain, nonatomic) GEOPDSearchClientBehavior *searchClientBehavior;
@property(readonly, nonatomic) _Bool hasSearchClientBehavior;
- (void)_readSearchClientBehavior;
@property(retain, nonatomic) GEOPDRelatedSearchSuggestion *defaultRelatedSearchSuggestion;
@property(readonly, nonatomic) _Bool hasDefaultRelatedSearchSuggestion;
- (void)_readDefaultRelatedSearchSuggestion;
- (id)resultDetourInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultDetourInfosCount;
- (void)_addNoFlagsResultDetourInfo:(id)arg1;
- (void)addResultDetourInfo:(id)arg1;
- (void)clearResultDetourInfos;
@property(retain, nonatomic) NSMutableArray *resultDetourInfos;
- (void)_readResultDetourInfos;
- (id)relatedSearchSuggestionAtIndex:(unsigned long long)arg1;
- (unsigned long long)relatedSearchSuggestionsCount;
- (void)_addNoFlagsRelatedSearchSuggestion:(id)arg1;
- (void)addRelatedSearchSuggestion:(id)arg1;
- (void)clearRelatedSearchSuggestions;
@property(retain, nonatomic) NSMutableArray *relatedSearchSuggestions;
- (void)_readRelatedSearchSuggestions;
@property(nonatomic) _Bool hasIsChainResultSet;
@property(nonatomic) _Bool isChainResultSet;
@property(retain, nonatomic) GEOMapRegion *displayMapRegion;
@property(readonly, nonatomic) _Bool hasDisplayMapRegion;
- (void)_readDisplayMapRegion;
- (id)initWithData:(id)arg1;
- (id)init;

@end
