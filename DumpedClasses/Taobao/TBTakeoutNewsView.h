//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, NXLooperView, TBTakeoutTopRecommendContentView, UIControl, UIImageView, UILabel;

@interface TBTakeoutNewsView : UIView
{
    int _loopIndex;
    int _viewTage;
    NXLooperView *_looperView;
    UIImageView *_titleIconImageView;
    UIView *_splitLineView;
    UILabel *_indicatorImageView;
    UIControl *_recommendControl;
    NSString *_targetUrl;
    TBTakeoutTopRecommendContentView *_defaultContentView;
}

@property(retain, nonatomic) TBTakeoutTopRecommendContentView *defaultContentView; // @synthesize defaultContentView=_defaultContentView;
@property(nonatomic) int viewTage; // @synthesize viewTage=_viewTage;
@property(nonatomic) int loopIndex; // @synthesize loopIndex=_loopIndex;
@property(copy, nonatomic) NSString *targetUrl; // @synthesize targetUrl=_targetUrl;
@property(retain, nonatomic) UIControl *recommendControl; // @synthesize recommendControl=_recommendControl;
@property(retain, nonatomic) UILabel *indicatorImageView; // @synthesize indicatorImageView=_indicatorImageView;
@property(retain, nonatomic) UIView *splitLineView; // @synthesize splitLineView=_splitLineView;
@property(retain, nonatomic) UIImageView *titleIconImageView; // @synthesize titleIconImageView=_titleIconImageView;
@property(retain, nonatomic) NXLooperView *looperView; // @synthesize looperView=_looperView;
- (void).cxx_destruct;
- (void)reloadTopOrderList:(id)arg1;
- (void)reloadNearbyItem:(id)arg1;
- (void)openURL;
- (id)initWithFrame:(struct CGRect)arg1;

@end

