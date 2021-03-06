//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SRDefaults : NSObject
{
    NSUInteger _datastoreVersion;
    NSUInteger _segmentSize;
    NSUInteger _metadataSize;
    NSUInteger _maxAllowedMappedPages;
    float _segmentResizeFactor;
    float _segmentPaddingFactor;
    NSString *_className;
    NSString *_exportingClassName;
}

@property(readonly, nonatomic) NSUInteger metadataSize; // @synthesize metadataSize=_metadataSize;
@property(readonly, nonatomic) NSString *exportingClassName; // @synthesize exportingClassName=_exportingClassName;
@property(readonly, nonatomic) NSString *className; // @synthesize className=_className;
@property(readonly, nonatomic) float segmentPaddingFactor; // @synthesize segmentPaddingFactor=_segmentPaddingFactor;
@property(readonly, nonatomic) float segmentResizeFactor; // @synthesize segmentResizeFactor=_segmentResizeFactor;
@property(readonly, nonatomic) NSUInteger maxAllowedMappedPages; // @synthesize maxAllowedMappedPages=_maxAllowedMappedPages;
@property(readonly, nonatomic) NSUInteger segmentSize; // @synthesize segmentSize=_segmentSize;
@property(readonly, nonatomic) NSUInteger datastoreVersion; // @synthesize datastoreVersion=_datastoreVersion;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;

@end

