//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSOpenApplicationService;

@interface SSApplicationScreenshotSupplementalDataCapturer : NSObject
{
    FBSOpenApplicationService *_openAppService;
}

+ (id)settingsForDocumentCapture:(BOOL)arg1 elementIdentifier:(id)arg2;
// - (void).cxx_destruct;
- (void)_sendRequestForEnvironmentElement:(id)arg1 info:(id)arg2 completionBlock:(id /* CDUnknownBlockType */)arg3;
- (void)captureDocumentForEnvironmentElement:(id)arg1 withCompletionBlock:(id /* CDUnknownBlockType */)arg2;
- (void)captureMetadataForEnvironmentElement:(id)arg1 withCompletionBlock:(id /* CDUnknownBlockType */)arg2;
- (id)init;

@end

