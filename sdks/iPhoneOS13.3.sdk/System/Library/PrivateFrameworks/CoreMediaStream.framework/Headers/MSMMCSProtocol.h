//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMediaStream/MSStorageProtocol-Protocol.h>

@class NSString;

@interface MSMMCSProtocol : NSObject <MSStorageProtocol>
{
    NSString *_personID;
    NSString *_MMCSDirPath;
    struct _mmcs_engine _engine;
    NSString *_engineDirPath;
}

+ (id)computeItemIDForAsset:(id)arg1;
@property(readonly, nonatomic) struct _mmcs_engine engine; // @synthesize engine=_engine;
@property(readonly, nonatomic) NSString *personID; // @synthesize personID=_personID;
// - (void).cxx_destruct;
- (void)_requestCompleted;
- (void)_putItemDone:(NSUInteger)arg1 putReceipt:(id)arg2 error:(id)arg3;
- (void)_getItemDone:(NSUInteger)arg1 path:(id)arg2 error:(id)arg3;
- (id)_getUTIFromItem:(NSUInteger)arg1;
- (int)_getFileDescriptorFromItem:(NSUInteger)arg1;
- (void)didFinishUsingAssets:(id)arg1;
- (void)abort;
- (void)dealloc;
- (void)deactivateRemoveAllFiles:(BOOL)arg1;
- (void)deactivate;
- (id)initWithPersonID:(id)arg1 path:(id)arg2;

@end

