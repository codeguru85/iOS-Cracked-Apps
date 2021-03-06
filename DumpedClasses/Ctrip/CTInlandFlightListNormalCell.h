//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CTFlightImageView, NSLayoutConstraint, UIImageView, UILabel, UIView;

@interface CTInlandFlightListNormalCell : UITableViewCell
{
    _Bool _isShowRoundTrip;
    UIView *_viewContainer;
    UIImageView *_imageViewBG;
    UILabel *_labelDepTime;
    UILabel *_labelArrTime;
    UILabel *_labelDepAirportTerminal;
    UILabel *_labelArrAirportTerminal;
    UILabel *_labelInterval;
    UIImageView *_imageViewArrow;
    UILabel *_labelStop;
    UILabel *_labelStopCityName;
    UILabel *_labelPrice;
    UILabel *_labelSymbol;
    UILabel *_labelTicketNumber;
    UILabel *_labelRecommendSubClass;
    UILabel *_labelDelayHint;
    CTFlightImageView *_airCompanyIcon;
    CTFlightImageView *_aircompanyIcon2;
    UILabel *_labelOtherInfo;
    UILabel *_labelOtherInfo2;
    UIView *_viewTag1;
    UIView *_viewTag2;
    UIView *_viewTag3;
    NSLayoutConstraint *_hConstForViewContainer;
    NSLayoutConstraint *_wConstForViewTag1;
    NSLayoutConstraint *_wConstForViewTag2;
    NSLayoutConstraint *_wConstForViewTag3;
    NSLayoutConstraint *_hConstForViewTag3;
    NSLayoutConstraint *_tConstForLabelDepTime;
    NSLayoutConstraint *_wConstForLabelDepTime;
    NSLayoutConstraint *_tConstForlabelInterval;
    NSLayoutConstraint *_wConstForlabelArrTime;
    NSLayoutConstraint *_tConstForLabelDepAirport;
    NSLayoutConstraint *_wConstForTicketNumber;
    NSLayoutConstraint *_hConstForTicketNumber;
    NSLayoutConstraint *_bConstForLabelOther;
    NSLayoutConstraint *_tConstForImageArrow;
    NSLayoutConstraint *_heigitCOns;
    UILabel *_roundTripLabel;
    NSLayoutConstraint *_viewtag1RightCons;
    UIView *_leftTagView;
    NSLayoutConstraint *_leftTagViewWidthCons;
    NSLayoutConstraint *_leftTagViewHeightCons;
    UIView *_bottomTagView;
    NSLayoutConstraint *_bottomTagViewWidthCons;
    NSLayoutConstraint *_bottomTagViewHeightCons;
    NSLayoutConstraint *_bottomTagViewRightCons;
    NSLayoutConstraint *_cnsTag3Leading;
}

+ (double)setupRoundTripListCell:(id)arg1 withModel:(id)arg2 additionInfo:(id)arg3 isRecommendFlightSort:(_Bool)arg4;
+ (void)appendUserFavoriteLeftTopIconWithListCell:(id)arg1 withModel:(id)arg2 isShow:(_Bool)arg3;
+ (double)setupListCell:(id)arg1 withModel:(id)arg2 additionInfo:(id)arg3 isRecommendFlightSort:(_Bool)arg4;
@property(nonatomic) __weak NSLayoutConstraint *cnsTag3Leading; // @synthesize cnsTag3Leading=_cnsTag3Leading;
@property(retain, nonatomic) NSLayoutConstraint *bottomTagViewRightCons; // @synthesize bottomTagViewRightCons=_bottomTagViewRightCons;
@property(retain, nonatomic) NSLayoutConstraint *bottomTagViewHeightCons; // @synthesize bottomTagViewHeightCons=_bottomTagViewHeightCons;
@property(retain, nonatomic) NSLayoutConstraint *bottomTagViewWidthCons; // @synthesize bottomTagViewWidthCons=_bottomTagViewWidthCons;
@property(retain, nonatomic) UIView *bottomTagView; // @synthesize bottomTagView=_bottomTagView;
@property(retain, nonatomic) NSLayoutConstraint *leftTagViewHeightCons; // @synthesize leftTagViewHeightCons=_leftTagViewHeightCons;
@property(retain, nonatomic) NSLayoutConstraint *leftTagViewWidthCons; // @synthesize leftTagViewWidthCons=_leftTagViewWidthCons;
@property(retain, nonatomic) UIView *leftTagView; // @synthesize leftTagView=_leftTagView;
@property(retain, nonatomic) NSLayoutConstraint *viewtag1RightCons; // @synthesize viewtag1RightCons=_viewtag1RightCons;
@property(nonatomic) _Bool isShowRoundTrip; // @synthesize isShowRoundTrip=_isShowRoundTrip;
@property(retain, nonatomic) UILabel *roundTripLabel; // @synthesize roundTripLabel=_roundTripLabel;
@property(retain, nonatomic) NSLayoutConstraint *heigitCOns; // @synthesize heigitCOns=_heigitCOns;
@property(nonatomic) __weak NSLayoutConstraint *tConstForImageArrow; // @synthesize tConstForImageArrow=_tConstForImageArrow;
@property(nonatomic) __weak NSLayoutConstraint *bConstForLabelOther; // @synthesize bConstForLabelOther=_bConstForLabelOther;
@property(nonatomic) __weak NSLayoutConstraint *hConstForTicketNumber; // @synthesize hConstForTicketNumber=_hConstForTicketNumber;
@property(nonatomic) __weak NSLayoutConstraint *wConstForTicketNumber; // @synthesize wConstForTicketNumber=_wConstForTicketNumber;
@property(nonatomic) __weak NSLayoutConstraint *tConstForLabelDepAirport; // @synthesize tConstForLabelDepAirport=_tConstForLabelDepAirport;
@property(nonatomic) __weak NSLayoutConstraint *wConstForlabelArrTime; // @synthesize wConstForlabelArrTime=_wConstForlabelArrTime;
@property(nonatomic) __weak NSLayoutConstraint *tConstForlabelInterval; // @synthesize tConstForlabelInterval=_tConstForlabelInterval;
@property(nonatomic) __weak NSLayoutConstraint *wConstForLabelDepTime; // @synthesize wConstForLabelDepTime=_wConstForLabelDepTime;
@property(nonatomic) __weak NSLayoutConstraint *tConstForLabelDepTime; // @synthesize tConstForLabelDepTime=_tConstForLabelDepTime;
@property(nonatomic) __weak NSLayoutConstraint *hConstForViewTag3; // @synthesize hConstForViewTag3=_hConstForViewTag3;
@property(retain, nonatomic) NSLayoutConstraint *wConstForViewTag3; // @synthesize wConstForViewTag3=_wConstForViewTag3;
@property(retain, nonatomic) NSLayoutConstraint *wConstForViewTag2; // @synthesize wConstForViewTag2=_wConstForViewTag2;
@property(retain, nonatomic) NSLayoutConstraint *wConstForViewTag1; // @synthesize wConstForViewTag1=_wConstForViewTag1;
@property(nonatomic) __weak NSLayoutConstraint *hConstForViewContainer; // @synthesize hConstForViewContainer=_hConstForViewContainer;
@property(retain, nonatomic) UIView *viewTag3; // @synthesize viewTag3=_viewTag3;
@property(retain, nonatomic) UIView *viewTag2; // @synthesize viewTag2=_viewTag2;
@property(retain, nonatomic) UIView *viewTag1; // @synthesize viewTag1=_viewTag1;
@property(nonatomic) __weak UILabel *labelOtherInfo2; // @synthesize labelOtherInfo2=_labelOtherInfo2;
@property(nonatomic) __weak UILabel *labelOtherInfo; // @synthesize labelOtherInfo=_labelOtherInfo;
@property(nonatomic) __weak CTFlightImageView *aircompanyIcon2; // @synthesize aircompanyIcon2=_aircompanyIcon2;
@property(nonatomic) __weak CTFlightImageView *airCompanyIcon; // @synthesize airCompanyIcon=_airCompanyIcon;
@property(nonatomic) __weak UILabel *labelDelayHint; // @synthesize labelDelayHint=_labelDelayHint;
@property(nonatomic) __weak UILabel *labelRecommendSubClass; // @synthesize labelRecommendSubClass=_labelRecommendSubClass;
@property(nonatomic) __weak UILabel *labelTicketNumber; // @synthesize labelTicketNumber=_labelTicketNumber;
@property(nonatomic) __weak UILabel *labelSymbol; // @synthesize labelSymbol=_labelSymbol;
@property(nonatomic) __weak UILabel *labelPrice; // @synthesize labelPrice=_labelPrice;
@property(nonatomic) __weak UILabel *labelStopCityName; // @synthesize labelStopCityName=_labelStopCityName;
@property(nonatomic) __weak UILabel *labelStop; // @synthesize labelStop=_labelStop;
@property(nonatomic) __weak UIImageView *imageViewArrow; // @synthesize imageViewArrow=_imageViewArrow;
@property(nonatomic) __weak UILabel *labelInterval; // @synthesize labelInterval=_labelInterval;
@property(nonatomic) __weak UILabel *labelArrAirportTerminal; // @synthesize labelArrAirportTerminal=_labelArrAirportTerminal;
@property(nonatomic) __weak UILabel *labelDepAirportTerminal; // @synthesize labelDepAirportTerminal=_labelDepAirportTerminal;
@property(nonatomic) __weak UILabel *labelArrTime; // @synthesize labelArrTime=_labelArrTime;
@property(nonatomic) __weak UILabel *labelDepTime; // @synthesize labelDepTime=_labelDepTime;
@property(nonatomic) __weak UIImageView *imageViewBG; // @synthesize imageViewBG=_imageViewBG;
@property(nonatomic) __weak UIView *viewContainer; // @synthesize viewContainer=_viewContainer;
- (void).cxx_destruct;
- (void)setFlightSelected:(_Bool)arg1;
- (void)setupListCellWithModel:(id)arg1;
- (void)setSubViewBGColor:(id)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)initView;
- (void)awakeFromNib;

@end

