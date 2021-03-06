//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FM_BaseViewController.h"

@class FM_ProgramBean, FM_SongBean, FM_SongWordViewController, UIButton, UITapGestureRecognizer, UIView;

@interface FM_SongBtnViewController : FM_BaseViewController
{
    UIView *bgView;
    UIView *btnView;
    UITapGestureRecognizer *tapGesture;
    UIButton *collectBtn;
    UIButton *lookSongBtn;
    UIButton *downSongBtn;
    UIButton *cancelBtn;
    FM_ProgramBean *pbean;
    FM_SongWordViewController *cont;
    FM_SongBean *_songBean;
}

@property(retain, nonatomic) FM_SongBean *songBean; // @synthesize songBean=_songBean;
- (void).cxx_destruct;
- (id)convertToDownloadTask;
- (void)didReceiveMemoryWarning;
- (void)endClicked:(id)arg1;
- (void)beginClicked:(id)arg1;
- (void)cancelBtnClick:(id)arg1;
- (void)downSongBtnClick:(id)arg1;
- (void)lookSongBtnClick:(id)arg1;
- (void)collectBtnClick:(id)arg1;
- (void)removeSongView;
- (void)hideSongBtnViewWithAnimation:(_Bool)arg1;
- (void)showSongBtnView;
- (void)bgViewTap:(id)arg1;
- (void)addLine:(id)arg1;
- (void)initSubviews;
- (id)initWithPromgramBean:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

