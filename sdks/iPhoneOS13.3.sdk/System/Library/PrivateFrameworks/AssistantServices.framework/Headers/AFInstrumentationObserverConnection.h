//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFInvalidating-Protocol.h>

@class AFAnalyticsObserverConnection, NSSet;

@interface AFInstrumentationObserverConnection : NSObject <AFInvalidating>
{
    AFAnalyticsObserverConnection *_observerConnection;
    NSSet *_filteredTagIdentifiers;
}

// - (void).cxx_destruct;
- (void)flushWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)waitUntilInvalidated;
- (void)invalidate;
- (id)initWithObservation:(id /* CDUnknownBlockType */)arg1 filterByInstrumentationTypes:(id)arg2;
- (id)initWithObservation:(id /* CDUnknownBlockType */)arg1;

@end

