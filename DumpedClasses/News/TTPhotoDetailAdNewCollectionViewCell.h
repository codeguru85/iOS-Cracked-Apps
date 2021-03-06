//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class TTPhotoDetailAdContainView, TTPhotoDetailAdModel;

@interface TTPhotoDetailAdNewCollectionViewCell : UICollectionViewCell
{
    TTPhotoDetailAdContainView *_containView;
    TTPhotoDetailAdModel *_detailModel;
}

@property(retain, nonatomic) TTPhotoDetailAdModel *detailModel; // @synthesize detailModel=_detailModel;
@property(retain, nonatomic) TTPhotoDetailAdContainView *containView; // @synthesize containView=_containView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (void)deviceOrientationDidChangeNotification:(id)arg1;
- (void)setImageScrollViewDelegate:(id)arg1;
- (void)refreshBlackOpaqueWithPersent:(double)arg1;
- (void)configureADPhotoViewWithModel:(id)arg1 WithImage:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

