//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class UILabel;

@interface KKAdsEnterAdsView : UIImageView
{
    UILabel *_tipsLabel;
    struct CGRect _frame;
    id <QLMediaMovieViewlayerProtocol> _mainMovieViewLayerDelegate;
}

@property(nonatomic) id <QLMediaMovieViewlayerProtocol> mainMovieViewLayerDelegate; // @synthesize mainMovieViewLayerDelegate=_mainMovieViewLayerDelegate;
- (void).cxx_destruct;
- (void)cleanResource;
- (void)didMediaPlayerScreenChanged:(id)arg1 fullScreen:(_Bool)arg2;
- (_Bool)needScaleMini;
- (void)freshCountDownView;
- (void)freshCountDownView:(long long)arg1 timerNumber:(long long)arg2;
- (void)controlMediaPlayerLayer:(long long)arg1 playerLayerId:(long long)arg2;
- (void)willEnterAds;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

