//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface PKPaymentTransactionPresentationInformation : NSObject
{
    _Bool _shouldGrayValue;
    _Bool _shouldStrikeValue;
    _Bool _shouldShowDisclosure;
    NSString *_primaryString;
    NSString *_secondaryString;
    NSString *_tertiaryString;
    UIColor *_customSecondaryColor;
    NSString *_rewardsString;
    NSString *_valueString;
}

@property(nonatomic) _Bool shouldShowDisclosure; // @synthesize shouldShowDisclosure=_shouldShowDisclosure;
@property(nonatomic) _Bool shouldStrikeValue; // @synthesize shouldStrikeValue=_shouldStrikeValue;
@property(nonatomic) _Bool shouldGrayValue; // @synthesize shouldGrayValue=_shouldGrayValue;
@property(retain, nonatomic) NSString *valueString; // @synthesize valueString=_valueString;
@property(retain, nonatomic) NSString *rewardsString; // @synthesize rewardsString=_rewardsString;
@property(retain, nonatomic) UIColor *customSecondaryColor; // @synthesize customSecondaryColor=_customSecondaryColor;
@property(retain, nonatomic) NSString *tertiaryString; // @synthesize tertiaryString=_tertiaryString;
@property(retain, nonatomic) NSString *secondaryString; // @synthesize secondaryString=_secondaryString;
@property(retain, nonatomic) NSString *primaryString; // @synthesize primaryString=_primaryString;

@end
