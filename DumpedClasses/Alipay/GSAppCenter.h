//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GSAppCenter : NSObject
{
}

+ (id)appCenter;
- (void)markUserHasChosenMode;
- (id)listStatus;
- (void)requestDefaultRules:(CDUnknownBlockType)arg1;
- (void)handleWhiteRules;
- (void)handleBlackRulesWith:(CDUnknownBlockType)arg1;
- (void)resetUserUpgradeFlag;
- (_Bool)needToDowngradeToNormalMode;
- (void)loginFinish:(id)arg1;
- (void)fatchStageFromOpenPlatform:(id)arg1;
- (id)init;

@end

