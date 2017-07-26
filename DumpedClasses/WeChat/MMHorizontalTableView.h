//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSMutableSet, NSString;

@interface MMHorizontalTableView : UIScrollView <UIScrollViewDelegate>
{
    NSMutableSet *recycledCells;
    NSMutableSet *visibleCells;
    NSMutableArray *originPointList;
    id <MMHorizontalTableViewDelegate> viewDelegate;
    id <MMHorizontalTableViewDataSource> dataSource;
}

@property(nonatomic) __weak id <MMHorizontalTableViewDataSource> dataSource; // @synthesize dataSource;
@property(nonatomic) __weak id <MMHorizontalTableViewDelegate> viewDelegate; // @synthesize viewDelegate;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)isDisplayingCellForIndex:(unsigned long long)arg1;
- (id)dequeueReusableCellWithIdentifier:(id)arg1;
- (void)tileView;
- (void)calculateAllCellOrigin;
- (float)contentSizeWidth;
- (void)reloadData;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
