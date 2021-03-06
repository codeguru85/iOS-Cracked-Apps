//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSString, TBCPhotoObj, TBCPhotoVideoMaskView, UIActivityIndicatorView, UIImageView, UIScrollView;

@interface TBCPhotoView : UIView <UIScrollViewDelegate>
{
    UIImageView *_imageView;
    TBCPhotoVideoMaskView *_videoMaskView;
    TBCPhotoObj *_photo;
    CDUnknownBlockType _tapCallback;
    CDUnknownBlockType _longTapCallback;
    CDUnknownBlockType _videoMaskViewTap;
    UIScrollView *_scrollView;
    UIActivityIndicatorView *_indicator;
    struct CGRect _endImageFrame;
}

@property(nonatomic) struct CGRect endImageFrame; // @synthesize endImageFrame=_endImageFrame;
@property(retain, nonatomic) UIActivityIndicatorView *indicator; // @synthesize indicator=_indicator;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(copy, nonatomic) CDUnknownBlockType videoMaskViewTap; // @synthesize videoMaskViewTap=_videoMaskViewTap;
@property(copy, nonatomic) CDUnknownBlockType longTapCallback; // @synthesize longTapCallback=_longTapCallback;
@property(copy, nonatomic) CDUnknownBlockType tapCallback; // @synthesize tapCallback=_tapCallback;
@property(retain, nonatomic) TBCPhotoObj *photo; // @synthesize photo=_photo;
@property(retain, nonatomic) TBCPhotoVideoMaskView *videoMaskView; // @synthesize videoMaskView=_videoMaskView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (struct CGRect)getImageRect:(id)arg1 inSize:(struct CGSize)arg2;
- (void)hidePhotoViewAnimation:(_Bool)arg1 complete:(CDUnknownBlockType)arg2;
- (void)showPhotoWithAnimation:(_Bool)arg1 complete:(CDUnknownBlockType)arg2;
- (void)longTap:(id)arg1;
- (void)doubleTap:(id)arg1;
- (void)tap:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

