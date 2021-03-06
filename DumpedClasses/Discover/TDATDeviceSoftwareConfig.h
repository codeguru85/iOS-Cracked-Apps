//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TDATBaseModel.h"

@class NSArray, NSString;

@interface TDATDeviceSoftwareConfig : TDATBaseModel
{
    _Bool _jailBroken;
    _Bool _is24HourTime;
    _Bool _adidEnabled;
    _Bool _locationEnabled;
    _Bool _cameraEnable;
    _Bool _threeDTouchEnable;
    float _timezoneV;
    NSString *_os;
    NSString *_osVersionName;
    NSString *_osVersionCode;
    NSString *_timezone;
    NSString *_locale;
    NSString *_language;
    NSString *_deviceName;
    NSArray *_keyboards;
}

@property(nonatomic) _Bool threeDTouchEnable; // @synthesize threeDTouchEnable=_threeDTouchEnable;
@property(nonatomic) _Bool cameraEnable; // @synthesize cameraEnable=_cameraEnable;
@property(retain, nonatomic) NSArray *keyboards; // @synthesize keyboards=_keyboards;
@property(nonatomic) _Bool locationEnabled; // @synthesize locationEnabled=_locationEnabled;
@property(nonatomic) _Bool adidEnabled; // @synthesize adidEnabled=_adidEnabled;
@property(nonatomic) _Bool is24HourTime; // @synthesize is24HourTime=_is24HourTime;
@property(retain, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(nonatomic) float timezoneV; // @synthesize timezoneV=_timezoneV;
@property(retain, nonatomic) NSString *timezone; // @synthesize timezone=_timezone;
@property(nonatomic) _Bool jailBroken; // @synthesize jailBroken=_jailBroken;
@property(retain, nonatomic) NSString *osVersionCode; // @synthesize osVersionCode=_osVersionCode;
@property(retain, nonatomic) NSString *osVersionName; // @synthesize osVersionName=_osVersionName;
@property(retain, nonatomic) NSString *os; // @synthesize os=_os;
- (void).cxx_destruct;
- (id)archiveToDictionary;

@end

