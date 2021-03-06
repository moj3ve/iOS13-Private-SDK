//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFActionItem-Protocol.h>

@class NSData, NSDictionary, NSString, SFActionItem, SFImage;

@protocol SFMediaOffer <SFActionItem>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(retain, nonatomic) SFImage *image;
@property(nonatomic) BOOL isEnabled;
@property(copy, nonatomic) NSString *offerIdentifier;
@property(copy, nonatomic) NSString *sublabel;
@property(retain, nonatomic) SFActionItem *actionItem;
@end

