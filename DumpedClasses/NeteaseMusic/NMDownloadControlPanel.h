//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImage, UIImageView;

@interface NMDownloadControlPanel : UIView
{
    UIView *_bgView;
    UIImageView *_bottomLineView;
    UIView *_vSepLine;
    UIImage *_pauseIcon;
    UIImage *_startIcon;
    UIImage *_clearIcon;
    _Bool _isDownloading;
    UIButton *_pauseStartButton;
    UIButton *_clearButton;
    id <NMDownloadControlPanelDelegate> _delegate;
}

+ (double)height;
@property(nonatomic) id <NMDownloadControlPanelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *clearButton; // @synthesize clearButton=_clearButton;
@property(retain, nonatomic) UIButton *pauseStartButton; // @synthesize pauseStartButton=_pauseStartButton;
- (void).cxx_destruct;
- (void)clearButtonClicked;
- (void)pauseStartButtonClicked;
- (void)updatePauseButtonIcon:(id)arg1;
- (void)updateButtonStatus:(_Bool)arg1;
- (void)layoutSubviews;
- (void)handleChangingTheme:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

