//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKitLegacy/WebOpenPanelResultListener-Protocol.h>

__attribute__((visibility("hidden")))
@interface WebOpenPanelResultListener : NSObject <WebOpenPanelResultListener>
{
    struct RefPtr<WebCore::FileChooser, WTF::DumbPtrTraits<WebCore::FileChooser>> _chooser;
}

- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)chooseFilenames:(id)arg1 displayString:(id)arg2 iconImage:(CGImage )arg3;
- (void)chooseFilename:(id)arg1 displayString:(id)arg2 iconImage:(CGImage )arg3;
- (void)chooseFilenames:(id)arg1;
- (void)chooseFilename:(id)arg1;
- (void)cancel;
- (id)initWithChooser:(struct FileChooser )arg1;

@end

