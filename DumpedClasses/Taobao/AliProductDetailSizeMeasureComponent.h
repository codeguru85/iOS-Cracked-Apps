//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AliProductDetailComponent.h"

#import "AliDetailMultimediaBrowserDelegate.h"

@class AliDetailMultimediaBrowserViewControl, AliDetailMultimediaBrowserViewController, AliDetailPtSingleImageWithTitleModel, NSString, TBDetailPhotoAnimationModel, UIImageView;

@interface AliProductDetailSizeMeasureComponent : AliProductDetailComponent <AliDetailMultimediaBrowserDelegate>
{
    NSString *_imagePath;
    UIImageView *_imageView;
    TBDetailPhotoAnimationModel *_defaultPhotoModel;
    AliDetailPtSingleImageWithTitleModel *_imageWithTitleModel;
    AliDetailMultimediaBrowserViewController *_bigBrowserVC;
    AliDetailMultimediaBrowserViewControl *_browserViewModel;
}

+ (struct CGSize)getComponentSize:(id)arg1 constrainedToSize:(struct CGSize)arg2;
@property(retain, nonatomic) AliDetailMultimediaBrowserViewControl *browserViewModel; // @synthesize browserViewModel=_browserViewModel;
@property(retain, nonatomic) AliDetailMultimediaBrowserViewController *bigBrowserVC; // @synthesize bigBrowserVC=_bigBrowserVC;
@property(retain, nonatomic) AliDetailPtSingleImageWithTitleModel *imageWithTitleModel; // @synthesize imageWithTitleModel=_imageWithTitleModel;
@property(retain, nonatomic) TBDetailPhotoAnimationModel *defaultPhotoModel; // @synthesize defaultPhotoModel=_defaultPhotoModel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(copy, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
- (void).cxx_destruct;
- (id)getMaskImageView;
- (void)setupBigPhotoBrowser;
- (void)showBigImage:(id)arg1;
- (void)createTextLabel;
- (void)createImageView;
- (void)setObject:(id)arg1;
- (struct CGSize)getComponentSize:(id)arg1 constrainedToSize:(struct CGSize)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

