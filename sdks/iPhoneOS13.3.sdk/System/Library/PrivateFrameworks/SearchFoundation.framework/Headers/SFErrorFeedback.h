//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFFeedback.h>

@class NSError;

@interface SFErrorFeedback : SFFeedback
{
    NSError *_error;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithError:(id)arg1;

@end
