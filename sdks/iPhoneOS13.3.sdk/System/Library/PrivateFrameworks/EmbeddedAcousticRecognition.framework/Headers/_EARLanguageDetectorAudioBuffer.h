//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _EARLanguageDetectorAudioBuffer : NSObject
{
    shared_ptr_9e2bfca6 _buffer;
}

- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)endAudio;
- (void)addAudioSamples:(const short )arg1 count:(NSUInteger)arg2;
- (void)addAudioSampleData:(id)arg1;
- (id)_initWithAudioBuffer:(const shared_ptr_9e2bfca6 )arg1;

@end

