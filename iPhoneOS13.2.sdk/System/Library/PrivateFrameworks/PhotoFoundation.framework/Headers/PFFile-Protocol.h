//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDate, NSString, NSURL;

@protocol PFFile
@property(readonly) NSString *UTI;
@property(readonly) _Bool isDirectory;
@property(readonly) NSString *fileExtension;
@property(readonly) NSDate *fileModificationDate;
@property(readonly) NSDate *fileCreationDate;
@property(readonly) unsigned long long fileSize;
@property(readonly) NSString *fileName;
@property(readonly) NSString *path;
@property(readonly) NSURL *url;
@end
