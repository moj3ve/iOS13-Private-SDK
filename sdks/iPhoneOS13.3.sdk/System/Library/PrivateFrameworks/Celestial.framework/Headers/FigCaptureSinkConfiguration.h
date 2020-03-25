//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Celestial/FigXPCCoding-Protocol.h>

@class NSString;

@interface FigCaptureSinkConfiguration : NSObject <FigXPCCoding, NSCopying>
{
    NSString *_sinkID;
}

+ (id)stringForSinkType:(int)arg1;
@property(copy, nonatomic) NSString *sinkID; // @synthesize sinkID=_sinkID;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) int sinkType;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, copy) NSString *description;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;

@end
