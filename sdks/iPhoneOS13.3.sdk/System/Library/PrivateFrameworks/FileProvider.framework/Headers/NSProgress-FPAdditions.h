//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProgress.h>

#import <FileProvider/FPCancellable-Protocol.h>

@interface NSProgress (FPAdditions) <FPCancellable>
- (void)fp_addChildProgress:(id)arg1;
- (BOOL)fp_isOfFileOperationKind:(id)arg1;
- (void)fp_setFileOperationKind:(id)arg1;
- (id)fp_fileOperationKind;
@end
