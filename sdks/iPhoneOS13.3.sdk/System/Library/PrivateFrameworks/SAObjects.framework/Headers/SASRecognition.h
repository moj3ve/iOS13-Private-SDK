//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray;

@interface SASRecognition : AceObject <SAAceSerializable>
{
}

+ (id)recognitionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)recognition;
@property(copy, nonatomic) NSArray *utterances;
@property(nonatomic) long long sentenceConfidence;
@property(copy, nonatomic) NSArray *phrases;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

