//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@protocol OS_xpc_object;

@interface BKSTouchDeliveryPolicy : NSObject <NSSecureCoding>
{
}

+ (id)policyByCombiningPolicies:(id)arg1;
+ (id)policyCancelingTouchesDeliveredToContextId:(unsigned int)arg1 withInitialTouchTimestamp:(double)arg2;
+ (id)policyRequiringSharingOfTouchesDeliveredToChildContextId:(unsigned int)arg1 withHostContextId:(unsigned int)arg2;
+ (_Bool)supportsSecureCoding;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)policyExcludingPolicy:(id)arg1;
- (id)policyIncludingPolicy:(id)arg1;
- (id)reducePolicyToObjectWithBlock:(id /* block */)arg1;
- (id)policyByMappingContainedPoliciesWithBlock:(id /* block */)arg1;
@property(retain, nonatomic) NSObject<OS_xpc_object> *assertionEndpoint;
- (id)matchSharingTouchesPolicy:(id /* block */)arg1 orCancelTouchesPolicy:(id /* block */)arg2 orCombinedPolicy:(id /* block */)arg3;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
