//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UITableViewDiffableDataSource.h>

@protocol _UIActivityUserDefaultsDataSourceProxy;

@interface _UIActivityUserDefaultsDataSource : UITableViewDiffableDataSource
{
    id <_UIActivityUserDefaultsDataSourceProxy> _dataSourceProxy;
}

@property(nonatomic) __weak id <_UIActivityUserDefaultsDataSourceProxy> dataSourceProxy; // @synthesize dataSourceProxy=_dataSourceProxy;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;

@end
