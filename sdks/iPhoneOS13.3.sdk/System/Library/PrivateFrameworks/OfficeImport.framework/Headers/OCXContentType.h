//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OCXContentType : NSObject
{
    NSString *mContentType;
    NSString *mPath;
    NSString *mExtension;
}

@property(readonly, nonatomic) NSString *path; // @synthesize path=mPath;
@property(readonly, nonatomic) NSString *contentType; // @synthesize contentType=mContentType;
// - (void).cxx_destruct;
- (void)writeToStreamWriter:(id)arg1;
- (BOOL)isOverride;
- (id)initWithContentType:(id)arg1 path:(id)arg2;
- (id)initWithContentType:(id)arg1 extension:(id)arg2;

@end

