//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CSLanguageDetectorAssetMonitorDelegate, OS_dispatch_queue;

@interface CSLanguageDetectorAssetMonitor : NSObject
{
    int _notifyToken;
    id <CSLanguageDetectorAssetMonitorDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
@property(nonatomic) int notifyToken; // @synthesize notifyToken=_notifyToken;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <CSLanguageDetectorAssetMonitorDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_supportedLocale:(id /* CDUnknownBlockType */)arg1;
- (void)supportedLocale:(id /* CDUnknownBlockType */)arg1;
- (void)startMonitor;
- (id)init;

@end

