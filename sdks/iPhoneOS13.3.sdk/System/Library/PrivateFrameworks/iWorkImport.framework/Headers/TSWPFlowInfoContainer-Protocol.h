//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKDocumentObject-Protocol.h>

@class NSArray, TSKAddedToDocumentContext;
@protocol TSWPFlowInfo;

@protocol TSWPFlowInfoContainer <NSObject, TSKDocumentObject>
@property(nonatomic) NSUInteger nextUserInterfaceIdentifier;
- (void)removeFlowInfo:(id <TSWPFlowInfo>)arg1;
- (void)addFlowInfo:(id <TSWPFlowInfo>)arg1 dolcContext:(TSKAddedToDocumentContext *)arg2;
- (void)addFlowInfo:(id <TSWPFlowInfo>)arg1;
- (NSArray *)flowInfos;
- (BOOL)containsFlowInfo:(id <TSWPFlowInfo>)arg1;
@end

