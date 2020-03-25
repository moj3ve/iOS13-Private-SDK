//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVMLKit/TVImageLoader-Protocol.h>

@class NSOperationQueue;

@interface _TVMonogramImageGenerator : NSObject <TVImageLoader>
{
    NSOperationQueue *_imageGeneratorQueue;
}

// - (void).cxx_destruct;
- (void)cancelLoad:(id)arg1;
- (id)loadImageForObject:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 imageDirection:(long long)arg4 requestLoader:(id)arg5 completionHandler:(id /* CDUnknownBlockType */)arg6;
- (id)imageKeyForObject:(id)arg1;
- (id)loadImageForURL:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 imageDirection:(long long)arg4 requestLoader:(id)arg5 completionHandler:(id /* CDUnknownBlockType */)arg6;
@property(readonly, nonatomic) NSOperationQueue *imageGeneratorQueue; // @synthesize imageGeneratorQueue=_imageGeneratorQueue;

@end
