//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDTLVDescription.h>

@class NSData;

@interface HMDTLVBase : HMDTLVDescription
{
    NSData *_tlvDatablob;
}

@property(readonly, nonatomic) NSData *tlvDatablob; // @synthesize tlvDatablob=_tlvDatablob;
// - (void).cxx_destruct;
- (id)_parseArray:(id)arg1 result:(id )arg2 objectCreator:(id /* CDUnknownBlockType */)arg3;
- (BOOL)_parse:(id)arg1;
- (BOOL)_parseMandatory:(id)arg1 optional:(id)arg2;
- (BOOL)_parseFields:(id)arg1;
- (BOOL)_parseFromTLVData;
- (id)initWithTLVData:(id)arg1;

@end

