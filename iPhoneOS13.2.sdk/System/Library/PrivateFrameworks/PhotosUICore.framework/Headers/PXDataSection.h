//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@protocol NSObject><NSCopying;

@interface PXDataSection : NSObject <NSFastEnumeration>
{
    id <NSCopying> _outlineObject;
    unsigned long long _identifier;
    id _content;
}

@property(readonly, nonatomic) id content; // @synthesize content=_content;
@property(readonly, nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) id <NSCopying> outlineObject; // @synthesize outlineObject=_outlineObject;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)description;
@property(readonly, nonatomic) _Bool containsAnyObjects;
- (id)objectsAtIndexes:(id)arg1;
- (id)objectAtIndex:(long long)arg1;
@property(readonly, nonatomic) long long count;
- (id)init;
- (id)initWithOutlineObject:(id)arg1;

@end
