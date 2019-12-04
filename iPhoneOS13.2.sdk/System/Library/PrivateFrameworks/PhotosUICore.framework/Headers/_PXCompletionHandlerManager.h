//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol _PXCompletionHandlerManagerDelegate;

@interface _PXCompletionHandlerManager : NSObject
{
    NSMutableArray *_completionHandlers;
    id <_PXCompletionHandlerManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <_PXCompletionHandlerManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)callCompletionHandlers;
- (void)addCompletionHandler:(id /* block */)arg1;
- (void)_handleTimeoutOfCompletionHandler:(id /* block */)arg1;
- (id)init;

@end
