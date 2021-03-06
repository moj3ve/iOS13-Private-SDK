//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoRegistry/NRPBSwitchRecordCollection.h>


__attribute__((visibility("hidden")))
@interface NRSwitchRecordCollection : NRPBSwitchRecordCollection <NSSecureCoding>
{
}

+ (BOOL)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (void)truncateSwitchRecords;
- (id)initWithHistoryEntries:(id)arg1;
- (id)deviceIDAtSwitchIndex:(unsigned int)arg1 date:(id )arg2;
- (void)addSwitchRecordWithHistoryEntry:(id)arg1;

@end

