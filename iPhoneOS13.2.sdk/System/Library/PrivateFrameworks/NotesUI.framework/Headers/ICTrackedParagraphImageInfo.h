//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICTrackedParagraph, NSString, UIImage, UIImageView;

@interface ICTrackedParagraphImageInfo : NSObject
{
    _Bool _estimated;
    ICTrackedParagraph *_trackedParagraph;
    NSString *_uuid;
    struct UIImage *_image;
    struct UIImageView *_imageViewIfExists;
    struct CGRect _boundingRect;
    struct CGRect _rect;
}

@property(nonatomic) _Bool estimated; // @synthesize estimated=_estimated;
@property(retain, nonatomic) UIImageView *imageViewIfExists; // @synthesize imageViewIfExists=_imageViewIfExists;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(nonatomic) struct CGRect boundingRect; // @synthesize boundingRect=_boundingRect;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) ICTrackedParagraph *trackedParagraph; // @synthesize trackedParagraph=_trackedParagraph;

@end
