//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BookUtility/BUZipWriter.h>

@protocol BURandomWriteChannel;

@interface BUZipFileWriter : BUZipWriter
{
    id <BURandomWriteChannel> _writeChannel;
    id /* block */ _writeChannelCompletionHandler;
}

+ (void)zipDirectoryAtURL:(id)arg1 customDirectoryFilename:(id)arg2 toURL:(id)arg3 queue:(id)arg4 progressHandler:(id /* block */)arg5;
+ (void)zipDirectoryAtURL:(id)arg1 toURL:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)truncateToOffsetImpl:(long long)arg1 completion:(id /* block */)arg2;
- (id)prepareWriteChannelWithCloseCompletionHandler:(id /* block */)arg1;
- (void)copyRemainingEntries:(id)arg1 fromArchive:(id)arg2 progress:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)copyEntriesFromZipFileWriter:(id)arg1 readingFromURL:(id)arg2 options:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithZipFileArchive:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithZipFileArchive:(id)arg1 error:(id *)arg2;
- (id)initWithURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithURL:(id)arg1 error:(id *)arg2;

@end
