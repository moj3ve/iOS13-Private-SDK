//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOSQLiteVirtualTable : NSObject
{
    NSString *_name;
}

@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (void)fetchValueForContext:(struct sqlite3_context )arg1 row:(NSUInteger)arg2 column:(NSUInteger)arg3;
@property(readonly, nonatomic) NSUInteger rowCount;
@property(readonly, nonatomic) NSString *columnDefinitions;
@property(readonly, nonatomic) struct sqlite3_module module;
- (id)initWithName:(id)arg1;
- (id)init;

@end

