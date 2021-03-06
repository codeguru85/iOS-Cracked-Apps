//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, UIColor, UIImageView, UIPanGestureRecognizer, UITableView;

@interface FAKTVMultiLineKrcView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    NSMutableArray *krcArray;
    int curRow;
    int insetKrcCount;
    double curRowDisplacement;
    float _fontHeight;
    double startTime;
    double krcDurationTime;
    int maxScrollRow;
    int maxScrollCol;
    UIView *maskView;
    UIColor *colorLrc;
    UIColor *highLightColorLrc;
    _Bool noAnimatedLrc;
    unsigned long long cellType;
    _Bool canTouch;
    _Bool _hideBg;
    int reduceDissmissKrcCount;
    UITableView *krcTableView;
    UIView *countBackView;
    UIView *point1View;
    UIView *point2View;
    UIView *point3View;
    UIPanGestureRecognizer *panRecognizer;
    UIImageView *bgView;
    id <FAKTVPanKrcViewDelegate> krcDelegate;
    unsigned long long _krcViewType;
    double _hightlightFontHeight;
    UIColor *_strokeColor;
}

@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(nonatomic) double hightlightFontHeight; // @synthesize hightlightFontHeight=_hightlightFontHeight;
@property(nonatomic) unsigned long long krcViewType; // @synthesize krcViewType=_krcViewType;
@property(nonatomic) _Bool hideBg; // @synthesize hideBg=_hideBg;
@property(nonatomic) int reduceDissmissKrcCount; // @synthesize reduceDissmissKrcCount;
@property(nonatomic) _Bool canTouch; // @synthesize canTouch;
@property(nonatomic) __weak id <FAKTVPanKrcViewDelegate> krcDelegate; // @synthesize krcDelegate;
@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView;
@property(retain, nonatomic) UIPanGestureRecognizer *panRecognizer; // @synthesize panRecognizer;
@property(retain, nonatomic) UIView *point3View; // @synthesize point3View;
@property(retain, nonatomic) UIView *point2View; // @synthesize point2View;
@property(retain, nonatomic) UIView *point1View; // @synthesize point1View;
@property(retain, nonatomic) UIView *countBackView; // @synthesize countBackView;
@property(retain, nonatomic) UITableView *krcTableView; // @synthesize krcTableView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setCellType:(unsigned long long)arg1;
- (void)setOneRowLrcNoAnimatedLrc:(_Bool)arg1 highLightColorLrc:(id)arg2 colorLrc:(id)arg3;
- (void)setKrcDisplayFontHeight:(float)arg1;
- (double)getKrcStartTime;
- (void)setScrollToHead;
- (void)restoreCurRow;
- (void)fixCountBackViewPos;
- (void)setCurRowToMiddle;
- (void)updateCellOpacity;
- (void)restorePointStatus;
- (void)showPointAnimation:(double)arg1;
- (void)setPointViewShow:(_Bool)arg1;
- (void)displaySondWord:(double)arg1;
- (void)updateKrcWords:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)panGestureRecognizer:(id)arg1;
- (void)calculateMaxScrollRowCol;
- (void)removePanGesture;
- (void)setKrcDuration:(double)arg1;
- (void)hideBackgroundImage;
- (id)initWithFrame:(struct CGRect)arg1 withBgImgUrl:(id)arg2 reduceCount:(int)arg3 krcViewLocation:(int)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

