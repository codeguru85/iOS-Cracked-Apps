//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TBEmojiDownloadManagerDelegate.h"

@class NSDate, NSString, QQStoryUrlImageView, TBEmoticonPackModel, TBExtendedHitButton, UILabel, UIProgressView;

@interface TBEmojiDownloadView : UIView <TBEmojiDownloadManagerDelegate>
{
    TBExtendedHitButton *_downloadBtn;
    UIProgressView *_progress;
    QQStoryUrlImageView *_iconImgView;
    UILabel *_titleLab;
    id <TBEmojiDownloadViewDelegate> _delegate;
    TBEmoticonPackModel *_emotionPackModel;
    unsigned long long _mediaType;
    NSDate *_downloadStartDate;
}

@property(retain, nonatomic) NSDate *downloadStartDate; // @synthesize downloadStartDate=_downloadStartDate;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property(retain, nonatomic) TBEmoticonPackModel *emotionPackModel; // @synthesize emotionPackModel=_emotionPackModel;
@property(nonatomic) __weak id <TBEmojiDownloadViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)downloadEmotionFail:(id)arg1;
- (void)downloadEmotionFinish:(id)arg1;
- (void)updateDownloadEmotion:(id)arg1 progress:(double)arg2;
- (void)downloadEmoticonPack;
- (void)onDownloadBtnClick:(id)arg1;
- (void)updateLoadingProgress:(double)arg1;
- (void)createUI;
- (id)initWithFrame:(struct CGRect)arg1 emotionPackModel:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

