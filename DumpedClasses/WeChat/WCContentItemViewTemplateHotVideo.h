//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCContentItemBaseView.h"

#import "FavAddItemHelperDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "WCImageViewDelegate.h"

@class ForwardMessageLogicController, MMUIWindow, NSString, UILabel, WCDataItem, WCHotVideoController, WCImageView, WCMediaItem;

@interface WCContentItemViewTemplateHotVideo : WCContentItemBaseView <FavAddItemHelperDelegate, WCImageViewDelegate, UIGestureRecognizerDelegate>
{
    WCDataItem *m_oDataItem;
    WCMediaItem *m_oMediaItem;
    UILabel *m_oTitleLabel;
    WCImageView *m_oWCCoverImage;
    MMUIWindow *m_fullScreenWindow;
    ForwardMessageLogicController *m_forwardMsgLogic;
    WCHotVideoController *m_oVideoPlayerVC;
    unsigned long long _legalityType;
}

+ (double)heightForMedia:(id)arg1 showDetail:(_Bool)arg2;
@property(nonatomic) unsigned long long legalityType; // @synthesize legalityType=_legalityType;
- (void).cxx_destruct;
- (void)OnDownloadSuccessForFavoriteAdd;
- (void)onAddFavTagBegin;
- (id)getImage;
- (void)playHotVideo;
- (void)onLongPressedWCImage:(id)arg1;
- (void)onClickWCImage:(id)arg1;
- (void)setNormalColor;
- (void)setHighlightedColor;
- (void)onLongTouch;
- (void)throwUrlMessage;
- (void)initViewsWithWCDataItem:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
