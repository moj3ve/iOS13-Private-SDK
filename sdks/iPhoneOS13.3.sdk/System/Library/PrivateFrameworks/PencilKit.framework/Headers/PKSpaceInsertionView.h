//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface PKSpaceInsertionView : UIView
{
    CGPath _lassoPath;
    CGPoint _handleLocation;
    double _scale;
    BOOL _isDragging;
    NSUInteger _insertionType;
}

@property(nonatomic) BOOL isDragging; // @synthesize isDragging=_isDragging;
@property(nonatomic) NSUInteger insertionType; // @synthesize insertionType=_insertionType;
- (void)drawRect:(CGRect)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1 insertionType:(NSUInteger)arg2 path:(CGPath )arg3 handleLocation:(CGPoint)arg4 scale:(double)arg5;

@end

