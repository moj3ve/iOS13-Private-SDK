//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface OSAReport : NSObject
{
    NSString *_incidentID;
    NSString *_logType;
    double _capture_time;
    NSMutableArray *_notes;
    NSMutableDictionary *_logWritingOptions;
    NSString *_logfile;
}

+ (id)bootArgs;
+ (id)kernelVersionDescription;
+ (id)systemIDWithDescription:(BOOL)arg1;
+ (unsigned char)executeWithTimeout:(unsigned int)arg1 Code:(id /* CDUnknownBlockType */)arg2;
@property(readonly, nonatomic) NSString *logfile; // @synthesize logfile=_logfile;
@property(readonly, nonatomic) NSArray *notes; // @synthesize notes=_notes;
// - (void).cxx_destruct;
- (int)streamContentAtLevel:(BOOL)arg1 withBlock:(id /* CDUnknownBlockType */)arg2;
- (BOOL)saveWithOptions:(id)arg1;
- (BOOL)secondChanceToSylog;
- (void)symlink:(id)arg1;
- (void)generateLogAtLevel:(BOOL)arg1 withBlock:(id /* CDUnknownBlockType */)arg2;
- (id)additionalIPSMetadata;
- (BOOL)isActionable;
- (id)reportNamePrefix;
- (id)appleCareDetails;
- (id)incidentID;
- (BOOL)isAppleTV;
- (id)getSyslogForPid:(int)arg1 andOptionalSenders:(id)arg2;
- (id)problemType;
- (id)init;

@end
