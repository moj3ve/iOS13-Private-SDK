//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InAppMessages/IAMEventProtocol-Protocol.h>

@class NSDictionary, NSString;

@interface IAMEvent : NSObject <IAMEventProtocol>
{
    NSString *_name;
    long long _type;
}

@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)matchesWithKey:(id)arg1;
- (id)initWithName:(id)arg1 type:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly, copy, nonatomic) NSDictionary *payload;
@property(readonly, copy, nonatomic) NSString *source;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) id value;

@end
