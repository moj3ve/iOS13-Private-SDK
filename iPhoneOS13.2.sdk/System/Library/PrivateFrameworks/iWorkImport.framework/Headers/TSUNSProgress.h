//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSUProgress.h>

@class NSArray, NSProgress;

__attribute__((visibility("hidden")))
@interface TSUNSProgress : TSUProgress
{
    NSProgress *_NSProgress;
    NSArray *_NSProgressObservers;
}

- (void)setMessage:(id)arg1;
- (id)message;
- (_Bool)isIndeterminate;
- (double)maxValue;
- (double)value;
- (id)initForSubclass;
- (id)init;
- (id)initWithNSProgress:(id)arg1;

@end
