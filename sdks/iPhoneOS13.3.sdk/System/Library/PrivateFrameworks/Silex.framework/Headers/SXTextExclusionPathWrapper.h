//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/TSDWrappable-Protocol.h>

@class SXTextExclusionPath, TSDWrapPolygon;

@interface SXTextExclusionPathWrapper : NSObject <TSDWrappable>
{
    BOOL _isRectangular;
    SXTextExclusionPath *_exclusionPath;
    TSDWrapPolygon *_myWrapPolygon;
}

@property(readonly, nonatomic) TSDWrapPolygon *myWrapPolygon; // @synthesize myWrapPolygon=_myWrapPolygon;
@property(readonly, nonatomic) BOOL isRectangular; // @synthesize isRectangular=_isRectangular;
@property(readonly, nonatomic) __weak SXTextExclusionPath *exclusionPath; // @synthesize exclusionPath=_exclusionPath;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL hasAlpha;
- (id)parent;
- (CGRect)boundsInRoot;
- (CGRect)boundsInfluencingExteriorWrap;
- (BOOL)isHTMLWrap;
- (int)wrapType;
- (id)wrapPolygon;
- (int)wrapFitType;
- (int)wrapDirection;
- (id)initWithTextExclusionPath:(id)arg1;

@end

