//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDate, NSDictionary, NSString;

@interface AASession : NSObject
{
    MISSING_TYPE *identifier;
    MISSING_TYPE *kind;
    MISSING_TYPE *name;
    MISSING_TYPE *startDate;
    MISSING_TYPE *sessionData;
}

// - (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSDictionary *sessionData;
@property(nonatomic, readonly) NSDate *startDate;
@property(nonatomic, readonly) NSString *name;
@property(nonatomic, readonly) long long kind; // @synthesize kind;
@property(nonatomic, readonly) NSString *identifier;

@end

