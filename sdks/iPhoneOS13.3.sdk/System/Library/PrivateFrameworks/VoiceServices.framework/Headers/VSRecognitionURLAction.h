//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceServices/VSRecognitionAction.h>

@class NSURL;

@interface VSRecognitionURLAction : VSRecognitionAction
{
    NSURL *_url;
}

- (id)perform;
- (id)URL;
- (void)setURL:(id)arg1;
- (int)completionType;
- (void)dealloc;

@end

