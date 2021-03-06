//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol EFSQLExpressable;

@interface EFSQLIndexedColumnSchema : NSObject
{
    id <EFSQLExpressable> _expression;
    NSUInteger _collation;
    NSUInteger _orderDirection;
}

@property(readonly, nonatomic) NSUInteger orderDirection; // @synthesize orderDirection=_orderDirection;
@property(readonly, nonatomic) NSUInteger collation; // @synthesize collation=_collation;
@property(readonly, nonatomic) id <EFSQLExpressable> expression; // @synthesize expression=_expression;
// - (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *definition;
@property(readonly, copy, nonatomic) NSString *name;
- (id)initWithColumnName:(id)arg1;
- (id)initWithColumnName:(id)arg1 orderDirection:(NSUInteger)arg2;
- (id)initWithColumnName:(id)arg1 collation:(NSUInteger)arg2 orderDirection:(NSUInteger)arg3;
- (id)initWithExpression:(id)arg1;
- (id)initWithExpression:(id)arg1 orderDirection:(NSUInteger)arg2;
- (id)initWithExpression:(id)arg1 collation:(NSUInteger)arg2 orderDirection:(NSUInteger)arg3;

@end

