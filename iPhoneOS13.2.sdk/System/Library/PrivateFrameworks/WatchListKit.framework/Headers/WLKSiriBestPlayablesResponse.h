//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface WLKSiriBestPlayablesResponse : NSObject
{
    NSDictionary *_dictionary;
    NSDictionary *_playablesByID;
}

@property(copy, nonatomic) NSDictionary *playablesByID; // @synthesize playablesByID=_playablesByID;
@property(readonly, copy, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (id)playableForStatsID:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end
