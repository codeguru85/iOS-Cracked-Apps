//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NMCategoryCell, NSString;

@protocol NMCategoryCellDelegate <NSObject>

@optional
- (_Bool)categoryButtonClicked:(NMCategoryCell *)arg1 categoryName:(NSString *)arg2 selected:(_Bool)arg3;
- (void)onCategoryButtonClicked:(NSString *)arg1;
@end

