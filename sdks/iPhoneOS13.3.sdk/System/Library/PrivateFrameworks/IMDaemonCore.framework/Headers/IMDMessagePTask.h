//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMDMessagePTask : NSObject
{
    NSString *_guid;
    NSUInteger _taskFlags;
}

@property(readonly, nonatomic) NSUInteger taskFlags; // @synthesize taskFlags=_taskFlags;
@property(readonly, nonatomic) NSString *guid; // @synthesize guid=_guid;
- (void)compeletedTask:(NSUInteger)arg1;
- (BOOL)needsProccesingFor:(NSUInteger)arg1;
- (void)setTaskFlag:(NSUInteger)arg1;
- (void)dealloc;
- (id)initWithStoreDictionary:(id)arg1;
- (id)initWithGUID:(id)arg1;

@end
