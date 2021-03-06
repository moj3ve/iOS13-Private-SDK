//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreFollowUp/FLGroupViewModel-Protocol.h>

@class NSMutableArray, NSString;

@interface FLGroupViewModelImpl : NSObject <FLGroupViewModel>
{
    NSMutableArray *_mutableItems;
    NSString *_identifier;
    NSString *_rowTitle;
    NSString *_groupTitle;
}

@property(copy, nonatomic) NSString *groupTitle; // @synthesize groupTitle=_groupTitle;
@property(copy, nonatomic) NSString *rowTitle; // @synthesize rowTitle=_rowTitle;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (BOOL)shouldCoalesceItems;
- (BOOL)restrictionEnabled;
@property(readonly, copy) NSString *description;
- (void)addItem:(id)arg1;
- (id)items;
- (id)initWithIdentifier:(id)arg1;

@end

