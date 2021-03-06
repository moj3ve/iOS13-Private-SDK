//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface TSBonjourIPv4Address : NSObject <NSCopying>
{
    unsigned char _linkLayerAddress[6];
    BOOL _hasLinkLayerAddress;
    unsigned int _ipv4Address;
}

+ (BOOL)getLinkLayerAddress:(char )arg1 forIPv4Address:(unsigned int)arg2 error:(id )arg3;
@property(nonatomic) BOOL hasLinkLayerAddress; // @synthesize hasLinkLayerAddress=_hasLinkLayerAddress;
@property(readonly, nonatomic) unsigned int ipv4Address; // @synthesize ipv4Address=_ipv4Address;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)getLinkLayerAddressError:(id )arg1;
@property(readonly, nonatomic) const char linkLayerAddress; // @dynamic linkLayerAddress;
- (id)initWithIPv4Address:(unsigned int)arg1;
- (id)init;

@end

