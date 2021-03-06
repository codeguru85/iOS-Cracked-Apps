//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCustomeGroupTableViewCell.h"

@class CTAutoResizeLabel, CTFlightImageView, CTIntlFlightSegmentDetailViewModel, CTRootViewController, NSIndexPath, NSLayoutConstraint, UIButton, UIImageView, UILabel;

@interface CTIntFlightOrderStopCell : CTCustomeGroupTableViewCell
{
    id <CTIntFlightOrderStopCellDelegate> _orderDetailCellDelegate;
    NSIndexPath *_myIndexPath;
    CTRootViewController *_parentVC;
    CTAutoResizeLabel *_labelPreNextDay;
    CTIntlFlightSegmentDetailViewModel *_detailModel;
    CTAutoResizeLabel *_labelDTime;
    CTAutoResizeLabel *_labelATime;
    UIImageView *_imageViewJourney;
    UIImageView *_imageViewJourney2;
    CTAutoResizeLabel *_labelDAirport;
    CTAutoResizeLabel *_labelAAirport;
    CTFlightImageView *_imageViewAirline;
    UILabel *_airlineName;
    CTAutoResizeLabel *_labelAirlineFlightNo;
    UIImageView *_imageViewAirCraft;
    CTAutoResizeLabel *_labelAirCraft;
    UIButton *_buttonAirCraft;
    CTAutoResizeLabel *_labelNextDay;
    CTAutoResizeLabel *_labelStopCity;
    CTAutoResizeLabel *_labelStopTime;
    CTAutoResizeLabel *_labelRealInfo;
    UIImageView *_backgroundViewMid;
    UIImageView *_backgroundViewDown;
    CTFlightImageView *_carrierAirLineLogoImageView;
    NSLayoutConstraint *_imageVIewHightDistance;
    NSLayoutConstraint *_imageViewWidthDistance;
    UILabel *_departureTerminalLabel;
    UILabel *_arriveTerminalLabel;
    NSLayoutConstraint *_cnslabelDTimeHeight;
    NSLayoutConstraint *_cnslabelATimeHeight;
    NSLayoutConstraint *_cnslabelDAirportHeight;
    NSLayoutConstraint *_cnslabelAAirportHeight;
    NSLayoutConstraint *_cnslabelAirlineNameHeight;
    NSLayoutConstraint *_cnslabelAirlineFlightNoHeight;
    NSLayoutConstraint *_cnslabelAirCraftHeight;
    NSLayoutConstraint *_cnslabelNextDayHeight;
    NSLayoutConstraint *_cnslabelRealInfoHeight;
    NSLayoutConstraint *_cnslabellabelStopCityHeight;
    NSLayoutConstraint *_cnslabellabelStopTimeHeight;
    NSLayoutConstraint *_cnsAirCraftTop;
    NSLayoutConstraint *_deparTureTernalTopHeight;
    NSLayoutConstraint *_deparTurTernalWidth;
    NSLayoutConstraint *_departurenTernalHeight;
    NSLayoutConstraint *_arriveTernalTopHeight;
    NSLayoutConstraint *_arriveTernalHeight;
    NSLayoutConstraint *_arriveTernalWidth;
    NSLayoutConstraint *_firstJournetHeight;
    NSLayoutConstraint *_secondJournetHeight;
    NSLayoutConstraint *_bottomHeight;
}

+ (double)setupOrderDetailCell:(id)arg1 withModel:(id)arg2 flightIndex:(int)arg3;
@property(retain, nonatomic) NSLayoutConstraint *bottomHeight; // @synthesize bottomHeight=_bottomHeight;
@property(retain, nonatomic) NSLayoutConstraint *secondJournetHeight; // @synthesize secondJournetHeight=_secondJournetHeight;
@property(retain, nonatomic) NSLayoutConstraint *firstJournetHeight; // @synthesize firstJournetHeight=_firstJournetHeight;
@property(retain, nonatomic) NSLayoutConstraint *arriveTernalWidth; // @synthesize arriveTernalWidth=_arriveTernalWidth;
@property(retain, nonatomic) NSLayoutConstraint *arriveTernalHeight; // @synthesize arriveTernalHeight=_arriveTernalHeight;
@property(retain, nonatomic) NSLayoutConstraint *arriveTernalTopHeight; // @synthesize arriveTernalTopHeight=_arriveTernalTopHeight;
@property(retain, nonatomic) NSLayoutConstraint *departurenTernalHeight; // @synthesize departurenTernalHeight=_departurenTernalHeight;
@property(retain, nonatomic) NSLayoutConstraint *deparTurTernalWidth; // @synthesize deparTurTernalWidth=_deparTurTernalWidth;
@property(retain, nonatomic) NSLayoutConstraint *deparTureTernalTopHeight; // @synthesize deparTureTernalTopHeight=_deparTureTernalTopHeight;
@property(nonatomic) __weak NSLayoutConstraint *cnsAirCraftTop; // @synthesize cnsAirCraftTop=_cnsAirCraftTop;
@property(nonatomic) __weak NSLayoutConstraint *cnslabellabelStopTimeHeight; // @synthesize cnslabellabelStopTimeHeight=_cnslabellabelStopTimeHeight;
@property(nonatomic) __weak NSLayoutConstraint *cnslabellabelStopCityHeight; // @synthesize cnslabellabelStopCityHeight=_cnslabellabelStopCityHeight;
@property(nonatomic) __weak NSLayoutConstraint *cnslabelRealInfoHeight; // @synthesize cnslabelRealInfoHeight=_cnslabelRealInfoHeight;
@property(nonatomic) __weak NSLayoutConstraint *cnslabelNextDayHeight; // @synthesize cnslabelNextDayHeight=_cnslabelNextDayHeight;
@property(nonatomic) __weak NSLayoutConstraint *cnslabelAirCraftHeight; // @synthesize cnslabelAirCraftHeight=_cnslabelAirCraftHeight;
@property(nonatomic) __weak NSLayoutConstraint *cnslabelAirlineFlightNoHeight; // @synthesize cnslabelAirlineFlightNoHeight=_cnslabelAirlineFlightNoHeight;
@property(nonatomic) __weak NSLayoutConstraint *cnslabelAirlineNameHeight; // @synthesize cnslabelAirlineNameHeight=_cnslabelAirlineNameHeight;
@property(nonatomic) __weak NSLayoutConstraint *cnslabelAAirportHeight; // @synthesize cnslabelAAirportHeight=_cnslabelAAirportHeight;
@property(nonatomic) __weak NSLayoutConstraint *cnslabelDAirportHeight; // @synthesize cnslabelDAirportHeight=_cnslabelDAirportHeight;
@property(nonatomic) __weak NSLayoutConstraint *cnslabelATimeHeight; // @synthesize cnslabelATimeHeight=_cnslabelATimeHeight;
@property(nonatomic) __weak NSLayoutConstraint *cnslabelDTimeHeight; // @synthesize cnslabelDTimeHeight=_cnslabelDTimeHeight;
@property(retain, nonatomic) UILabel *arriveTerminalLabel; // @synthesize arriveTerminalLabel=_arriveTerminalLabel;
@property(retain, nonatomic) UILabel *departureTerminalLabel; // @synthesize departureTerminalLabel=_departureTerminalLabel;
@property(nonatomic) __weak NSLayoutConstraint *imageViewWidthDistance; // @synthesize imageViewWidthDistance=_imageViewWidthDistance;
@property(nonatomic) __weak NSLayoutConstraint *imageVIewHightDistance; // @synthesize imageVIewHightDistance=_imageVIewHightDistance;
@property(nonatomic) __weak CTFlightImageView *carrierAirLineLogoImageView; // @synthesize carrierAirLineLogoImageView=_carrierAirLineLogoImageView;
@property(nonatomic) __weak UIImageView *backgroundViewDown; // @synthesize backgroundViewDown=_backgroundViewDown;
@property(nonatomic) __weak UIImageView *backgroundViewMid; // @synthesize backgroundViewMid=_backgroundViewMid;
@property(retain, nonatomic) CTAutoResizeLabel *labelRealInfo; // @synthesize labelRealInfo=_labelRealInfo;
@property(retain, nonatomic) CTAutoResizeLabel *labelStopTime; // @synthesize labelStopTime=_labelStopTime;
@property(retain, nonatomic) CTAutoResizeLabel *labelStopCity; // @synthesize labelStopCity=_labelStopCity;
@property(retain, nonatomic) CTAutoResizeLabel *labelNextDay; // @synthesize labelNextDay=_labelNextDay;
@property(retain, nonatomic) UIButton *buttonAirCraft; // @synthesize buttonAirCraft=_buttonAirCraft;
@property(retain, nonatomic) CTAutoResizeLabel *labelAirCraft; // @synthesize labelAirCraft=_labelAirCraft;
@property(retain, nonatomic) UIImageView *imageViewAirCraft; // @synthesize imageViewAirCraft=_imageViewAirCraft;
@property(retain, nonatomic) CTAutoResizeLabel *labelAirlineFlightNo; // @synthesize labelAirlineFlightNo=_labelAirlineFlightNo;
@property(nonatomic) __weak UILabel *airlineName; // @synthesize airlineName=_airlineName;
@property(retain, nonatomic) CTFlightImageView *imageViewAirline; // @synthesize imageViewAirline=_imageViewAirline;
@property(retain, nonatomic) CTAutoResizeLabel *labelAAirport; // @synthesize labelAAirport=_labelAAirport;
@property(retain, nonatomic) CTAutoResizeLabel *labelDAirport; // @synthesize labelDAirport=_labelDAirport;
@property(retain, nonatomic) UIImageView *imageViewJourney2; // @synthesize imageViewJourney2=_imageViewJourney2;
@property(retain, nonatomic) UIImageView *imageViewJourney; // @synthesize imageViewJourney=_imageViewJourney;
@property(retain, nonatomic) CTAutoResizeLabel *labelATime; // @synthesize labelATime=_labelATime;
@property(retain, nonatomic) CTAutoResizeLabel *labelDTime; // @synthesize labelDTime=_labelDTime;
@property(retain, nonatomic) CTIntlFlightSegmentDetailViewModel *detailModel; // @synthesize detailModel=_detailModel;
@property(retain, nonatomic) CTAutoResizeLabel *labelPreNextDay; // @synthesize labelPreNextDay=_labelPreNextDay;
@property(nonatomic) __weak CTRootViewController *parentVC; // @synthesize parentVC=_parentVC;
@property(retain, nonatomic) NSIndexPath *myIndexPath; // @synthesize myIndexPath=_myIndexPath;
@property(nonatomic) __weak id <CTIntFlightOrderStopCellDelegate> orderDetailCellDelegate; // @synthesize orderDetailCellDelegate=_orderDetailCellDelegate;
- (void).cxx_destruct;
- (void)adjustPreNextdayPosition;
- (void)setBackgroundStyleType:(int)arg1;
- (void)setupLabelAirCraftColor:(_Bool)arg1;
- (void)showAirCraftInfo:(id)arg1;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

