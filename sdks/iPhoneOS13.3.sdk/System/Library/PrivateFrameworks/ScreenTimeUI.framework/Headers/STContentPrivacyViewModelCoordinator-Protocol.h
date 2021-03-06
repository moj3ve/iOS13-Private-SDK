//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDictionary, STCommunicationLimits, STContentPrivacyViewModel, STRestrictionItem;

@protocol STContentPrivacyViewModelCoordinator <NSObject>
@property(readonly, nonatomic) STContentPrivacyViewModel *viewModel;
- (void)saveCommunicationLimits:(STCommunicationLimits *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)saveRestrictionValue:(id)arg1 forItem:(STRestrictionItem *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)saveValuesForRestrictions:(NSDictionary *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)saveContentPrivacyEnabled:(BOOL)arg1 completionHandler:(void (^)(NSError *))arg2;
@end

