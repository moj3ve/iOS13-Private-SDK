//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIDiffableDataSourceSnapshotter.h>

@class UITableView;

@interface _UITableViewDiffableDataSource : _UIDiffableDataSourceSnapshotter
{
    long long _defaultRowAnimation;
}

@property(nonatomic) long long defaultRowAnimation; // @synthesize defaultRowAnimation=_defaultRowAnimation;
- (id)initWithTableView:(id)arg1 reuseIdentifierProvider:(id /* CDUnknownBlockType */)arg2 cellConfigurationHandler:(id /* CDUnknownBlockType */)arg3;
@property(readonly, nonatomic) __weak UITableView *tableView;
- (id)initWithTableView:(id)arg1 cellProvider:(id /* CDUnknownBlockType */)arg2;

@end

