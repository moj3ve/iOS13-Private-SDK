//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSFileHandle, NSURL;

@protocol UASharedPasteboardManagerResponseProtocol 
- (void)tellClientDebuggingEnabled:(_Bool)arg1 logFileHandle:(NSFileHandle *)arg2;
- (void)writeLocalPasteboardToFile:(NSFileHandle *)arg1 itemDir:(NSURL *)arg2 withCompletion:(void (^)(UASharedPasteboardInfo *, NSError *))arg3;
@end
