//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOMapItemAttribution, GEOPDAttribution, GEOPDPlaceCollection, NSData, NSString;

@interface GEOPlaceCollection : NSObject
{
    GEOPDPlaceCollection *_collection;
    GEOPDAttribution *_dataAttribution;
    GEOMapItemAttribution *_attribution;
}

+ (id)placeCollectionForData:(id)arg1;
// - (void).cxx_destruct;
- (id)imageURLforSize:(CGSize)arg1;
@property(readonly, nonatomic) NSUInteger placeCount;
@property(readonly, nonatomic) NSString *description;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *actionURLString;
@property(readonly, nonatomic) NSUInteger muid;
@property(readonly, nonatomic) NSData *storageData;
- (void)loadAttribution;
- (id)initWithCollection:(id)arg1 attribution:(id)arg2;

@end
