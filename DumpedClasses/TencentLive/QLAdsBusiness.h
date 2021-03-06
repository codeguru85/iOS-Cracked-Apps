//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLMediaPlayerBusinessBase.h"

#import "TADMediaManagerDelegate.h"

@class NSString, QLAdsPlayerControlsViewComponent, QLAdsVideoInfo, TADMediaManager;

@interface QLAdsBusiness : QLMediaPlayerBusinessBase <TADMediaManagerDelegate>
{
    TADMediaManager *_tadMediaManager;
    QLAdsPlayerControlsViewComponent *_controlsViewComponent;
    QLAdsVideoInfo *_adsVideoInfo;
}

@property(retain, nonatomic) QLAdsVideoInfo *adsVideoInfo; // @synthesize adsVideoInfo=_adsVideoInfo;
@property(retain, nonatomic) QLAdsPlayerControlsViewComponent *controlsViewComponent; // @synthesize controlsViewComponent=_controlsViewComponent;
@property(retain, nonatomic) TADMediaManager *tadMediaManager; // @synthesize tadMediaManager=_tadMediaManager;
- (void).cxx_destruct;
- (id)userInfo;
- (id)videoInfoDic:(id)arg1;
- (void)requestAds:(id)arg1;
- (long long)getPlayerState:(int)arg1;
- (void)didMediaPlayerScreenChanged:(id)arg1 fullScreen:(_Bool)arg2;
- (void)didMediaPlayerStateChanged:(int)arg1 error:(id)arg2 playerCtl:(id)arg3;
- (void)startRequestAds:(id)arg1;
- (void)didShowClarityView:(id)arg1;
- (void)didShowSliderPoint:(id)arg1;
- (void)didShowLoadingView:(id)arg1;
- (id)getCustomClarityAdsInfo;
- (id)getCustomPlayerSliderInfo;
- (id)getCustomPlayerLoadingInfo;
- (void)airPlayStopToPlay;
- (void)airPlayStartToPlay;
- (void)mpbMediaClosed;
- (void)mpbPlayBackFinished;
- (void)mpbStartToPlayMedia;
- (_Bool)needRecieverMessage;
- (id)mpbMgrPlayerEventObserverObject;
- (_Bool)mpbMgrNeedPlayerStateNotification:(id)arg1;
- (void)landingViewDismiss:(id)arg1;
- (void)landingViewPresent:(id)arg1;
- (id)mediaManagerGetAdLayer:(id)arg1;
- (double)mediaManagerGetMovieTime:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

