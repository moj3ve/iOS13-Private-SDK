//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FCKeyValueStoreClassRegistry : NSObject
{
    struct unordered_map<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>, std::__1::hash<int>, std::__1::equal_to<NTPBKeyValuePair_ValueType>, std::__1::allocator<std::__1::pair<const NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>>> _registry;
}

- (id).cxx_construct;
// - (void).cxx_destruct;
- (Class)classForValueType:(int)arg1;
- (void)registerClass:(Class)arg1;
- (id)init;

@end
