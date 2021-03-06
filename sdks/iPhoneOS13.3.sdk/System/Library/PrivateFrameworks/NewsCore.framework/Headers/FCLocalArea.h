//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface FCLocalArea : NSObject
{
    NSArray *_regionIds;
    NSString *_identifier;
    NSArray *_bbox;
}

@property(retain, nonatomic) NSArray *bbox; // @synthesize bbox=_bbox;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSArray *regionIds; // @synthesize regionIds=_regionIds;
// - (void).cxx_destruct;
- (BOOL)containsLocation:(id)arg1;
- (BOOL)isValue:(double)arg1 betweenValue:(double)arg2 andValue:(double)arg3;
- (id)init;
- (id)initWithDictionary:(id)arg1;

@end

