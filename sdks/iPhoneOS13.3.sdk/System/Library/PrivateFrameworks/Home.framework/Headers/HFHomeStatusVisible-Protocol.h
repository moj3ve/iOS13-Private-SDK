//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NAFuture;

@protocol HFHomeStatusVisible <NSObject>
@property(readonly, nonatomic) BOOL hf_hasSetVisibleInHomeStatus;
@property(readonly, nonatomic) BOOL hf_isVisibleInHomeStatus;
@property(readonly, nonatomic) BOOL hf_supportsHomeStatus;
- (NAFuture *)hf_updateIsVisibleInHomeStatus:(BOOL)arg1;
@end

