//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NMActionSheetBackgroundView, UITableView;

@interface NMAssetGroupView : UIButton
{
    UITableView *_groupTableView;
    NMActionSheetBackgroundView *_bgView;
}

- (void).cxx_destruct;
- (_Bool)isAccessibilityElement;
- (void)reloadData;
- (double)prefferedHeight;
@property(nonatomic) __weak id <UITableViewDataSource> dataSource;
@property(nonatomic) __weak id <UITableViewDelegate> delegate;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

