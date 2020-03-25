//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivityRingsUI/ARUIPrecompiledRendering-Protocol.h>
#import <ActivityRingsUI/ARUIRendering-Protocol.h>

@protocol MTLRenderPipelineState;

__attribute__((visibility("hidden")))
@interface ARUISpriteRenderState : NSObject <ARUIRendering, ARUIPrecompiledRendering>
{
    id <MTLRenderPipelineState> _renderPipelineState;
}

// - (void).cxx_destruct;
- (BOOL)shouldRunStateForIcon:(id)arg1;
- (id)name;
- (id)initWithPipelineLibrary:(id)arg1;
- (id)renderPipelineDescriptorFromLibrary:(id)arg1;
@property(retain, nonatomic) id <MTLRenderPipelineState> renderPipelineState;
- (id)initWithDevice:(id)arg1 library:(id)arg2;

@end
