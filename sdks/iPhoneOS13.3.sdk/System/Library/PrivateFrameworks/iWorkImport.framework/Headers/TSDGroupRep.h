//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDContainerRep.h>

#import <iWorkImport/TSDMagicMoveMatching-Protocol.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface TSDGroupRep : TSDContainerRep <TSDMagicMoveMatching>
{
    CGRect mLastBoundsForStandardKnobs;
}

@property(readonly, nonatomic) NSArray *allRepsContainedInGroup;
- (void)updateFromLayout;
- (CGRect)frameInUnscaledCanvas;
- (void)recursivelyDrawInContext:(CGContext )arg1 keepingChildrenPassingTest:(id /* CDUnknownBlockType */)arg2;
- (CGRect)clipRect;
- (void)drawInContext:(CGContext )arg1;
- (id)p_groupInfo;

@end

