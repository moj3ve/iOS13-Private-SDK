//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>


@class BPSMultipleWatchMigrationPickerTableView, NSArray, NSMutableDictionary;

@interface BPSMultipleWatchMigrationView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    NSArray *_migratableDevices;
    NSUInteger _style;
    BPSMultipleWatchMigrationPickerTableView *_devicesTable;
    NSMutableDictionary *_selectedStates;
}

@property(retain, nonatomic) NSMutableDictionary *selectedStates; // @synthesize selectedStates=_selectedStates;
@property(retain, nonatomic) BPSMultipleWatchMigrationPickerTableView *devicesTable; // @synthesize devicesTable=_devicesTable;
@property(nonatomic) NSUInteger style; // @synthesize style=_style;
@property(retain, nonatomic) NSArray *migratableDevices; // @synthesize migratableDevices=_migratableDevices;
// - (void).cxx_destruct;
- (id)selectedMigrationDevices;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (double)tableHeight;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1 andStyle:(NSUInteger)arg2;

@end

