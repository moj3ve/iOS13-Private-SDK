//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCH3DShaderEffect.h>

__attribute__((visibility("hidden")))
@interface TSCH3DTextureBlendShaderEffect : TSCH3DShaderEffect
{
}

+ (void)setBlendFactor:(float)arg1 unit:(long long)arg2 effectsStates:(id)arg3;
+ (id)variableTexture;
+ (id)variableBlendTexture;
+ (id)variableBlendFactor;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)effect;
+ (id)_singletonAlloc;
- (void)uploadData:(id)arg1 effectsStates:(id)arg2;
- (void)injectCommonShaderInto:(id)arg1 context:(id)arg2;
- (void)addVariables:(id)arg1;
- (id)variableBlendTexture;
- (id)variableBlendFactor;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
