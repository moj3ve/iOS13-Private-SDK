//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MFDataHolder : NSObject
{
    NSMutableArray *_datas;
    NSUInteger _length;
}

+ (id)dataHolderWithData:(id)arg1;
+ (id)dataHolder;
@property(readonly, nonatomic) NSUInteger length; // @synthesize length=_length;
// - (void).cxx_destruct;
- (void)enumerateConvertingNewlinesUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (NSUInteger)numberOfNewlinesNeedingConversion:(BOOL)arg1;
- (void)enumerateByteRangesUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)enumerateDatasUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (id)data;
- (void)addData:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)init;

@end

