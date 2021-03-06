//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CTHotelStyleLabel, CTWebImageView, HotelRoomInfoViewModel;

@interface CTHotelHouseLeftView : UIView
{
    _Bool _isInn;
    _Bool _isRoomBig;
    HotelRoomInfoViewModel *_roomInfoModel;
    CTWebImageView *_houseImage;
    CTHotelStyleLabel *_roomProxyTitle;
}

+ (double)getHeightWithModel:(id)arg1 isInn:(_Bool)arg2 isRoomBig:(_Bool)arg3;
+ (id)underImageTag:(id)arg1;
@property(retain, nonatomic) CTHotelStyleLabel *roomProxyTitle; // @synthesize roomProxyTitle=_roomProxyTitle;
@property(retain, nonatomic) CTWebImageView *houseImage; // @synthesize houseImage=_houseImage;
@property(nonatomic) _Bool isRoomBig; // @synthesize isRoomBig=_isRoomBig;
@property(nonatomic) _Bool isInn; // @synthesize isInn=_isInn;
@property(retain, nonatomic) HotelRoomInfoViewModel *roomInfoModel; // @synthesize roomInfoModel=_roomInfoModel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

