//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WFVolumeButtonManager : NSObject
{
    id /* CDUnknownBlockType */ _pressHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ pressHandler; // @synthesize pressHandler=_pressHandler;
// - (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)dealloc;
- (id)initWithView:(id)arg1 pressHandler:(id /* CDUnknownBlockType */)arg2;

@end

