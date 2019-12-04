//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <PrototypeToolsUI/PTRowObserver-Protocol.h>

@class NSIndexPath, NSString, PTChoiceRow;

@interface PTUIChoiceViewController : UITableViewController <PTRowObserver>
{
    NSIndexPath *_valueIndexPath;
    PTChoiceRow *_row;
}

@property(retain, nonatomic) PTChoiceRow *row; // @synthesize row=_row;
- (void)_checkAppropriateCell;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)rowDidReload:(id)arg1;
- (void)rowDidChangeValue:(id)arg1;
- (void)dealloc;
- (id)initWithPresentingRow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
