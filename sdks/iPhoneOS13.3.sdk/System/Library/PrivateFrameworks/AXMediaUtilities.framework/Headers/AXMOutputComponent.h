//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AXMOutputComponent : NSObject
{
    long long _componentState;
}

+ (BOOL)isSupported;
@property(nonatomic) long long componentState; // @synthesize componentState=_componentState;
- (void)handleRequest:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (BOOL)canHandleRequest:(id)arg1;
- (void)transitionToState:(long long)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)description;
- (id)init;

@end

