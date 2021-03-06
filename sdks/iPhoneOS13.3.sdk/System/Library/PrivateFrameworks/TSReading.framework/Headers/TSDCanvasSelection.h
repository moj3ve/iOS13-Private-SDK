//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSKSelection.h>

#import <TSReading/TSDCanvasSelection-Protocol.h>

@class NSSet, TSDDrawableInfo;
@protocol TSDContainerInfo;

@interface TSDCanvasSelection : TSKSelection <TSDCanvasSelection, NSCopying>
{
    NSSet *mInfos;
    TSDDrawableInfo<TSDContainerInfo> *mContainer;
}

+ (id)emptySelection;
@property(readonly, nonatomic) TSDDrawableInfo<TSDContainerInfo> *container; // @synthesize container=mContainer;
- (id)copyExcludingInfo:(id)arg1;
- (id)copyIncludingInfo:(id)arg1;
- (BOOL)containsUnlockedKindOfClass:(Class)arg1;
@property(readonly, nonatomic) NSUInteger unlockedInfoCount;
@property(readonly, nonatomic) NSSet *unlockedInfos;
- (BOOL)containsKindOfClass:(Class)arg1;
- (id)infosOfClass:(Class)arg1;
@property(readonly, nonatomic) BOOL isEmpty;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSUInteger infoCount;
@property(readonly, nonatomic) NSSet *infos;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)initWithInfos:(id)arg1;
- (id)initWithInfos:(id)arg1 andContainer:(id)arg2;

@end

