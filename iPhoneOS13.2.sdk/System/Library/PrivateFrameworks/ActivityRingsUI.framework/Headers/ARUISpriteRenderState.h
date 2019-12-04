//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivityRingsUI/ARUIPrecompiledRendering-Protocol.h>
#import <ActivityRingsUI/ARUIRendering-Protocol.h>

@class NSString;
@protocol MTLRenderPipelineState;

__attribute__((visibility("hidden")))
@interface ARUISpriteRenderState : NSObject <ARUIRendering, ARUIPrecompiledRendering>
{
    id <MTLRenderPipelineState> _renderPipelineState;
}

- (_Bool)shouldRunStateForIcon:(id)arg1;
- (id)name;
- (id)initWithPipelineLibrary:(id)arg1;
- (id)renderPipelineDescriptorFromLibrary:(id)arg1;
@property(retain, nonatomic) id <MTLRenderPipelineState> renderPipelineState;
- (id)initWithDevice:(id)arg1 library:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
