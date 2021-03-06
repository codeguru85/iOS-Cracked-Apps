//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VRVideoViewController.h"

@class PPKAVVideo, TBVRHeatMap;

@interface VRMultiVideoViewController : VRVideoViewController
{
    _Bool buffering;
    _Bool _needsPlayAfterSeeking;
    TBVRHeatMap *_heatMap;
    PPKAVVideo *_playerA;
    PPKAVVideo *_playerB;
    long long _videoModel;
    CDStruct_1b6d18a9 _timeWhenSwitch;
}

@property(nonatomic) long long videoModel; // @synthesize videoModel=_videoModel;
@property(nonatomic) CDStruct_1b6d18a9 timeWhenSwitch; // @synthesize timeWhenSwitch=_timeWhenSwitch;
@property(retain, nonatomic) PPKAVVideo *playerB; // @synthesize playerB=_playerB;
@property(retain, nonatomic) PPKAVVideo *playerA; // @synthesize playerA=_playerA;
@property(nonatomic) _Bool needsPlayAfterSeeking; // @synthesize needsPlayAfterSeeking=_needsPlayAfterSeeking;
@property(nonatomic) __weak TBVRHeatMap *heatMap; // @synthesize heatMap=_heatMap;
- (void).cxx_destruct;
- (int)getCurrentTime;
- (_Bool)switchURL:(id)arg1 backwardURL:(id)arg2 rendType:(int)arg3;
- (void)setPaused:(_Bool)arg1;
- (void)play;
- (void)seekBackToTime:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)play:(id)arg1;
- (void)superPause;
- (void)pause;
- (id)resolution;
- (_Bool)backward;
- (_Bool)forward;
- (void)setMultiVideoModel:(long long)arg1;
- (void)dealloc;
- (void)_hanldePlayDidEnd:(id)arg1;
- (void)_handleAVPlayerReadyToPlay:(id)arg1;
- (void)_handleAVPlayerItemOpenFailed:(id)arg1;
- (long long)registerUIManager:(id)arg1;
- (void)_handleAVPlayerBufferingStop:(id)arg1;
- (void)_handleAVPlayerBufferingStart:(id)arg1;
- (void)cleanupNotifications;
- (void)registerNotifications;
- (void)setupPlayers;
- (id)initWithRendType:(int)arg1;
- (id)init;

@end

