//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSObject, NSString;
@protocol OS_xpc_object;

@protocol BSXPCDecoding <NSObject>
- (BOOL)containsValueForKey:(NSString *)arg1;
- (NSUInteger)decodeUInt64ForKey:(NSString *)arg1;
- (long long)decodeInt64ForKey:(NSString *)arg1;
- (BOOL)decodeBoolForKey:(NSString *)arg1;
- (double)decodeDoubleForKey:(NSString *)arg1;
- (CGRect)decodeCGRectForKey:(NSString *)arg1;
- (CGSize)decodeCGSizeForKey:(NSString *)arg1;
- (CGPoint)decodeCGPointForKey:(NSString *)arg1;
- (NSString *)decodeStringForKey:(NSString *)arg1;
- (NSObject<OS_xpc_object> *)decodeXPCObjectOfType:(const struct _xpc_type_s )arg1 forKey:(NSString *)arg2;
- (id)decodeCollectionOfClass:(Class)arg1 containingClass:(Class)arg2 forKey:(NSString *)arg3;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(NSString *)arg2;
@end
