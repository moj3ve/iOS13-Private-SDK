//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/WFMatchTextGetGroupIntentHandling-Protocol.h>

@class NSString;

@interface WFMatchTextGetGroupIntentHandler : NSObject <WFMatchTextGetGroupIntentHandling>
{
}

- (id)matchedTextInString:(id)arg1 withResult:(id)arg2 atIndex:(long long)arg3;
- (void)handleMatchTextGetGroup:(id)arg1 completion:(id /* block */)arg2;
- (void)resolveTypeForMatchTextGetGroup:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveMatchesForMatchTextGetGroup:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveGroupIndexForMatchTextGetGroup:(id)arg1 withCompletion:(id /* block */)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
