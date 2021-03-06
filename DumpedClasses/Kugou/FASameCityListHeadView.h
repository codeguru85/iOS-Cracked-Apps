//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class UIImageView, UILabel, UIView;

@interface FASameCityListHeadView : UICollectionReusableView
{
    UILabel *_titleLab;
    UIView *_bottomView;
    UIView *_noStarsView;
    UILabel *_labelUp;
    UILabel *_labelDown;
    UIImageView *_imgViewBaground;
}

@property(retain, nonatomic) UIImageView *imgViewBaground; // @synthesize imgViewBaground=_imgViewBaground;
@property(retain, nonatomic) UILabel *labelDown; // @synthesize labelDown=_labelDown;
@property(retain, nonatomic) UILabel *labelUp; // @synthesize labelUp=_labelUp;
@property(retain, nonatomic) UIView *noStarsView; // @synthesize noStarsView=_noStarsView;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
- (void).cxx_destruct;
- (void)noStars:(_Bool)arg1 CityName:(id)arg2;
- (void)setSectionTitle:(id)arg1 City:(id)arg2 SameCityStars:(_Bool)arg3 ShowCity:(_Bool)arg4;
- (void)configSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

