//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PGPictureInPictureApplication : NSObject
{
    int _processIdentifier;
    NSString *_bundleIdentifier;
}

+ (id)pictureInPictureApplicationWithProcessIdentifier:(int)arg1;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) int processIdentifier; // @synthesize processIdentifier=_processIdentifier;
// - (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithProcessIdentifier:(int)arg1;

@end

