//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CLLocation, NSArray, NSDate, NSString;

@protocol CAMTimelapseMovieWriterProtocol <NSObject>
@property(nonatomic, getter=isSuspended) BOOL suspended;
- (void)writeMovieFromImageFiles:(NSArray *)arg1 visMetadataFiles:(NSArray *)arg2 startDate:(NSDate *)arg3 location:(CLLocation *)arg4 outputPath:(NSString *)arg5 transform:(CGAffineTransform)arg6 framesPerSecond:(long long)arg7 preferHEVC:(BOOL)arg8 completionHandler:(void (^)(BOOL, struct, NSArray *))arg9;
@end

