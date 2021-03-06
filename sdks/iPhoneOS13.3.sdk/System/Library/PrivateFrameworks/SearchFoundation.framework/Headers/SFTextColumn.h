//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchFoundation/SFTextColumn-Protocol.h>

@class NSArray, NSData, NSDictionary;

@interface SFTextColumn : NSObject <SFTextColumn, NSSecureCoding, NSCopying>
{
    NSArray *_sections;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;

@end

