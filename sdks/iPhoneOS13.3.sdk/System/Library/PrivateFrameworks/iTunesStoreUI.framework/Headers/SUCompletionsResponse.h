//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SUCompletionsResponse : NSObject
{
    NSArray *_completionItems;
    NSString *_title;
}

@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSArray *completionItems; // @synthesize completionItems=_completionItems;
- (void)dealloc;
- (id)initWithPropertyList:(id)arg1;
- (id)init;

@end

