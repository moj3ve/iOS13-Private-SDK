//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FPDExtension;

__attribute__((visibility("hidden")))
@interface FPDAccessRight : NSObject
{
    NSUInteger _accessLevel;
    FPDExtension *_provider;
}

@property(readonly, nonatomic) __weak FPDExtension *provider; // @synthesize provider=_provider;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSUInteger level;
- (id)init;
- (id)initWithURL:(id)arg1 connection:(id)arg2 manager:(id)arg3;
- (id)initWithURL:(id)arg1 entitlements:(id)arg2 connection:(id)arg3 manager:(id)arg4;
- (void)_computeAccessForURL:(id)arg1 entitlements:(id)arg2 connection:(id)arg3;

@end

