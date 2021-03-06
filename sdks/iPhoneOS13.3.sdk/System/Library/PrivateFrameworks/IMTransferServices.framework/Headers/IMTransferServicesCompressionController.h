//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IMTransferServicesCompressionController : NSObject
{
    NSMutableDictionary *_blockMap;
}

+ (id)sharedInstance;
- (void)fileCopierDidFinish:(id)arg1;
- (void)fileCopierDidStart:(id)arg1;
- (void)compressFileTransfer:(id)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;
- (id /* CDUnknownBlockType */)_blockForCopier:(id)arg1;
- (void)_unmapCopier:(id)arg1;
- (void)_mapCopier:(id)arg1 toBlock:(id /* CDUnknownBlockType */)arg2;

@end

