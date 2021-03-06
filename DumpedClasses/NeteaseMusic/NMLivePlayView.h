//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NELivePlayerController, NMLive, NMLivePlayLoadingView, NSArray;

@interface NMLivePlayView : UIView
{
    NELivePlayerController *_playerController;
    NMLivePlayLoadingView *_playLoadingView;
    NSArray *_bitrateInfoArray;
    NSArray *_viewInfoArray;
    id <NMLivePlayViewDelegate> _delegate;
    NMLive *_live;
    unsigned long long _lastBitrate;
}

@property(nonatomic) unsigned long long lastBitrate; // @synthesize lastBitrate=_lastBitrate;
@property(retain, nonatomic) NMLive *live; // @synthesize live=_live;
@property(nonatomic) __weak id <NMLivePlayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)moviePlayBackViewBRChange:(id)arg1;
- (void)moviePlayBackStateDidChange:(id)arg1;
- (void)mediaIsPreparedToPlayDidChange:(id)arg1;
- (void)moviePlayBackDidFinish:(id)arg1;
- (void)loadStateDidChange:(id)arg1;
- (void)layoutSubviews;
- (long long)currentTimestamp;
- (void)reload;
- (void)stop;
- (void)pause;
- (void)play;
- (void)setBitrateWithLiveResolution:(id)arg1;
- (void)setViewWithLiveScreen:(id)arg1;
- (void)unloadPlayer;
- (void)loadPlayerWithResolution:(id)arg1;
- (void)installMovieNotificationObservers;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

