//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseTabelViewCell.h"

#import "QLHorizontalWaterflowLayoutDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSString, QLChannelGetNewLineModel, QLJCEONAExploreTagList, UIButton, UICollectionView, UILabel;

@interface QLJCEONAExploreTagListCell : QLBaseTabelViewCell <UICollectionViewDelegate, UICollectionViewDataSource, QLHorizontalWaterflowLayoutDelegate>
{
    UILabel *_titleLabel;
    UIButton *_cancelButton;
    UICollectionView *_collectionView;
    QLJCEONAExploreTagList *_exploreList;
    UIButton *_confirmButton;
    QLChannelGetNewLineModel *_dataModel;
}

+ (Class)cellClassWithJceType:(unsigned long long)arg1;
+ (long long)numberOfLinesWithExploreList:(id)arg1;
+ (double)collectionHeightWithExploreList:(id)arg1;
+ (double)getHeightWithPosterObj:(id)arg1 uInfo:(id)arg2;
@property(retain, nonatomic) QLChannelGetNewLineModel *dataModel; // @synthesize dataModel=_dataModel;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) QLJCEONAExploreTagList *exploreList; // @synthesize exploreList=_exploreList;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long numberOfLine;
@property(readonly, nonatomic) double collectionViewHeight;
- (void)reportShowUp;
- (struct UIEdgeInsets)edgeInsetsForWaterflowLayout:(id)arg1;
- (double)horizontalSpacingForWaterflowLayout:(id)arg1;
- (double)verticalSpacingForWaterflowLayout:(id)arg1;
- (long long)numerOfLinesForWaterflowLayout:(id)arg1;
- (struct CGSize)waterflowLayout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)layoutSubviews;
- (void)setObject:(id)arg1;
- (void)dealloc;
- (void)replaceData:(id)arg1 withData:(id)arg2;
- (void)didClickConfirm:(id)arg1;
- (void)didClickCancel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

