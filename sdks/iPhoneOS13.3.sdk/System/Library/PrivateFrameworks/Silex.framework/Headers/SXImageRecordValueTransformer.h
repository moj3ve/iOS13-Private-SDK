//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXDataRecordValueTransformer-Protocol.h>

@protocol SXDOMObjectProviding;

@interface SXImageRecordValueTransformer : NSObject <SXDataRecordValueTransformer>
{
    id <SXDOMObjectProviding> _DOMObjectProvider;
}

@property(readonly, nonatomic) id <SXDOMObjectProviding> DOMObjectProvider; // @synthesize DOMObjectProvider=_DOMObjectProvider;
// - (void).cxx_destruct;
- (id)transformValueForRecord:(id)arg1 descriptor:(id)arg2;
- (id)initWithDOMObjectProvider:(id)arg1;

@end

