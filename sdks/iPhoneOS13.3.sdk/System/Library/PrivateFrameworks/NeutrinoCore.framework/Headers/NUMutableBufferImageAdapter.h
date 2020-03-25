//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUBufferImageAdapter.h>

#import <NeutrinoCore/NUMutableBufferImage-Protocol.h>

@protocol NUMutableBufferProvider;

@interface NUMutableBufferImageAdapter : NUBufferImageAdapter <NUMutableBufferImage>
{
    id <NUMutableBufferProvider> _mutableBufferProvider;
}

// - (void).cxx_destruct;
- (BOOL)copyBufferStorage:(id)arg1 fromRect:(CDStruct_996ac03c)arg2 toPoint:(CDStruct_912cb5d2)arg3;
- (BOOL)copySurfaceStorage:(id)arg1 fromRect:(CDStruct_996ac03c)arg2 toPoint:(CDStruct_912cb5d2)arg3 device:(id)arg4;
- (void)writeBufferRegion:(id)arg1 withBlock:(id /* CDUnknownBlockType */)arg2;
- (id)initWithBufferProvider:(id)arg1 colorSpace:(id)arg2 validRegion:(id)arg3;
- (id)initWithMutableBufferProvider:(id)arg1 colorSpace:(id)arg2 validRegion:(id)arg3;
- (id)initWithMutableBuffer:(id)arg1 colorSpace:(id)arg2 validRegion:(id)arg3;

@end
