//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface NPKGizmoDatabaseManifestEntry : NSObject
{
    NSString *_uniqueID;
    NSArray *_localManifestHashes;
    NSArray *_remoteManifestHashes;
}

@property(retain, nonatomic) NSArray *remoteManifestHashes; // @synthesize remoteManifestHashes=_remoteManifestHashes;
@property(retain, nonatomic) NSArray *localManifestHashes; // @synthesize localManifestHashes=_localManifestHashes;
@property(retain, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
// - (void).cxx_destruct;
- (id)description;

@end

