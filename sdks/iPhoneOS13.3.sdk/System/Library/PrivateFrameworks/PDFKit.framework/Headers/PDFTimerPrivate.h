//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSInvocation, NSTimer;

__attribute__((visibility("hidden")))
@interface PDFTimerPrivate : NSObject
{
    NSObject *target;
    NSInvocation *methodInvocation;
    NSTimer *timer;
    double timeInterval;
    BOOL isRequested;
}

// - (void).cxx_destruct;

@end

