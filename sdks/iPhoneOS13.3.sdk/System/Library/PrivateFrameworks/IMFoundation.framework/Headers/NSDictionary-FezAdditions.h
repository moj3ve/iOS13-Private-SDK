//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (FezAdditions)
+ (id)dictionaryWithKeyArray:(id)arg1 defaultValue:(id)arg2;
+ (id)dictionaryWithPlistData:(id)arg1;
- (id)__imDictionaryByFilteringWithBlock:(id /* CDUnknownBlockType */)arg1;
- (id)__imDeepCopy;
- (id)dictionaryFromChanges:(id)arg1;
- (id)plistData;
- (id)keysOfChangedEntriesComparedTo:(id)arg1;
- (BOOL)__imIsMutable;
- (id)_dataForKey:(id)arg1;
- (id)_stringForKey:(id)arg1;
- (id)_numberForKey:(id)arg1;
- (id)_arrayForKey:(id)arg1;
- (id)_dictionaryForKey:(id)arg1;
@property(readonly, nonatomic) NSUInteger fileHFSResourceForkSize;
@property(readonly, nonatomic) unsigned short fileHFSFlags;
@end
