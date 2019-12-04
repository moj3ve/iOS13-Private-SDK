//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString, NSURL;

@interface NPKTapToRadarRequest : NSObject
{
    NSURL *_tapToRadarURL;
    NSString *_title;
    NSString *_body;
    NSSet *_attachmentsPaths;
}

@property(readonly, nonatomic) NSSet *attachmentsPaths; // @synthesize attachmentsPaths=_attachmentsPaths;
@property(readonly, nonatomic) NSString *body; // @synthesize body=_body;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id)description;
- (id)_attachmentURLs;
@property(readonly, nonatomic) NSURL *tapToRadarURL;
- (id)initWithURL:(id)arg1;
- (id)initWithTitle:(id)arg1 body:(id)arg2 attachmentPaths:(id)arg3;

@end
