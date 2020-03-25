//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/_PARBagRequest-Protocol.h>

@class NSArray, NSData, NSString;

__attribute__((visibility("hidden")))
@interface _PARBagRequest : PBCodable <_PARBagRequest, NSSecureCoding>
{
    int _tuscanyOption;
    NSString *_countryCode;
    NSString *_secretKey;
    NSString *_locale;
    NSString *_effectiveSystemLanguage;
    NSArray *_preferredLanguages;
}

@property(nonatomic) int tuscanyOption; // @synthesize tuscanyOption=_tuscanyOption;
@property(copy, nonatomic) NSArray *preferredLanguages; // @synthesize preferredLanguages=_preferredLanguages;
@property(copy, nonatomic) NSString *effectiveSystemLanguage; // @synthesize effectiveSystemLanguage=_effectiveSystemLanguage;
@property(copy, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(copy, nonatomic) NSString *secretKey; // @synthesize secretKey=_secretKey;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
// - (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)preferredLanguagesAtIndex:(NSUInteger)arg1;
- (NSUInteger)preferredLanguagesCount;
- (void)addPreferredLanguages:(id)arg1;
- (void)clearPreferredLanguages;

@end
