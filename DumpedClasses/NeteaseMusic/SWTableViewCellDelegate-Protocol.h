//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SWTableViewCell, UIScrollView;

@protocol SWTableViewCellDelegate <NSObject>

@optional
- (void)swipeableTableViewCell:(SWTableViewCell *)arg1 didScroll:(UIScrollView *)arg2;
- (void)swipeableTableViewCellDidEndScrolling:(SWTableViewCell *)arg1;
- (_Bool)swipeableTableViewCell:(SWTableViewCell *)arg1 canSwipeToState:(long long)arg2;
- (_Bool)swipeableTableViewCellShouldHideUtilityButtonsOnSwipe:(SWTableViewCell *)arg1;
- (void)swipeableTableViewCell:(SWTableViewCell *)arg1 scrollingToState:(long long)arg2;
- (void)swipeableTableViewCell:(SWTableViewCell *)arg1 didTriggerRightUtilityButtonWithIndex:(long long)arg2;
- (void)swipeableTableViewCell:(SWTableViewCell *)arg1 didTriggerLeftUtilityButtonWithIndex:(long long)arg2;
@end

