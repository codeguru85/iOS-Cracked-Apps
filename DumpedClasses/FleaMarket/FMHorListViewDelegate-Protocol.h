//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "UIScrollViewDelegate.h"

@class FMHorListView;

@protocol FMHorListViewDelegate <NSObject, UIScrollViewDelegate>
- (void)listView:(FMHorListView *)arg1 didSelectColumnAtIndex:(long long)arg2;

@optional
- (void)listViewPageChanged:(unsigned long long)arg1;
- (void)listViewScrolled;
@end

