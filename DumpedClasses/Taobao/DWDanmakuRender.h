//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DWDanmakuDispatcherDelegate.h"

@class DWDanmakuCanvas, DWDanmakuClock, DWDanmakuDispatcher, NSDate, NSMutableArray, NSMutableDictionary, NSString, UIView;

@interface DWDanmakuRender : NSObject <DWDanmakuDispatcherDelegate>
{
    double _time;
    NSDate *_startTime;
    double _pausedDuration;
    NSDate *_pausedTime;
    _Bool _masked;
    _Bool _redisplay;
    _Bool _zIndex;
    UIView *_view;
    id <DWDanmakuRendererDelegate> _delegate;
    DWDanmakuDispatcher *_dispatcher;
    DWDanmakuCanvas *_canvas;
    DWDanmakuClock *_clock;
    NSMutableDictionary *_context;
    NSMutableDictionary *_danmakuClassMap;
    NSMutableArray *_preloadedDescriptors;
    struct UIEdgeInsets _canvasMargin;
}

@property(copy, nonatomic) NSMutableArray *preloadedDescriptors; // @synthesize preloadedDescriptors=_preloadedDescriptors;
@property(copy, nonatomic) NSMutableDictionary *danmakuClassMap; // @synthesize danmakuClassMap=_danmakuClassMap;
@property(copy, nonatomic) NSMutableDictionary *context; // @synthesize context=_context;
@property(retain, nonatomic) DWDanmakuClock *clock; // @synthesize clock=_clock;
@property(retain, nonatomic) DWDanmakuCanvas *canvas; // @synthesize canvas=_canvas;
@property(retain, nonatomic) DWDanmakuDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property(nonatomic) __weak id <DWDanmakuRendererDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool zIndex; // @synthesize zIndex=_zIndex;
@property(nonatomic) _Bool redisplay; // @synthesize redisplay=_redisplay;
@property(readonly, nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) _Bool masked; // @synthesize masked=_masked;
@property(nonatomic) struct UIEdgeInsets canvasMargin; // @synthesize canvasMargin=_canvasMargin;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)indexRemoveDanmaku:(id)arg1;
- (void)indexAddDanmaku:(id)arg1;
- (double)timeForBarrageDispatcher:(id)arg1;
- (void)willDeactiveDanmaku:(id)arg1;
- (unsigned long long)viewIndexOfSprite:(id)arg1;
- (void)willActiveDanmaku:(id)arg1;
- (_Bool)shouldActiveDanmaku:(id)arg1;
- (void)update;
- (void)load:(id)arg1;
- (long long)danmakusNumberWithName:(id)arg1;
- (void)convertDelayTime:(id)arg1;
- (double)currentTime;
- (double)pausedDuration;
@property(nonatomic) double speed;
- (void)startSeek;
- (void)stop;
- (void)pause;
- (void)start;
- (void)receive:(id)arg1;
- (void)initClock;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

