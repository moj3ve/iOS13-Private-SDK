//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MFInternalSettingsCache : NSObject
{
    _Bool _tiltedTabSkyViewEnabled;
    _Bool _UIDebuggingEnabled;
}

+ (id)sharedCache;
@property(nonatomic) _Bool UIDebuggingEnabled; // @synthesize UIDebuggingEnabled=_UIDebuggingEnabled;
@property(nonatomic) _Bool tiltedTabSkyViewEnabled; // @synthesize tiltedTabSkyViewEnabled=_tiltedTabSkyViewEnabled;

@end
