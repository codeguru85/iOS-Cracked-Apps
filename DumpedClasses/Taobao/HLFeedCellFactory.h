//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HLFeedCellFactory : NSObject
{
}

+ (_Bool)isNeedToShowSpecialColumnEntry:(id)arg1;
+ (_Bool)isValidFeedModel:(id)arg1;
+ (_Bool)isNeedToFootPrint:(long long)arg1;
+ (double)cellHeight:(long long)arg1;
+ (double)cellHeightWithModel:(id)arg1;
+ (id)createCell:(long long)arg1 tableView:(id)arg2 indexPath:(id)arg3;
+ (void)registerCellTypesWithTableView:(id)arg1;

@end

