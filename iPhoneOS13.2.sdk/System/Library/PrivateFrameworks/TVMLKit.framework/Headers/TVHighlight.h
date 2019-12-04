//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, TVTimeRange;

@interface TVHighlight : NSObject
{
    NSString *_localizedName;
    NSString *_highlightDescription;
    TVTimeRange *_timeRange;
    NSURL *_imageURL;
    TVTimeRange *_dateRange;
}

@property(retain, nonatomic) TVTimeRange *dateRange; // @synthesize dateRange=_dateRange;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) TVTimeRange *timeRange; // @synthesize timeRange=_timeRange;
@property(retain, nonatomic) NSString *highlightDescription; // @synthesize highlightDescription=_highlightDescription;
@property(retain, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;

@end
