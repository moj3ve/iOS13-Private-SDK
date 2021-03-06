//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class TPUIState;

__attribute__((visibility("hidden")))
@interface TPArchivedUIState : TSPObject
{
    TPUIState *_uiState;
}

@property(copy, nonatomic) TPUIState *uiState; // @synthesize uiState=_uiState;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (BOOL)isEqualToArchivedUIState:(id)arg1;
- (id)initWithContext:(id)arg1 uiState:(id)arg2;

@end

