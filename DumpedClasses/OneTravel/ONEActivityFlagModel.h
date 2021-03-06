//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ONEBaseModel.h"

@class NSNumber<Optional>, NSString<Optional>, ONEFastCarFlagModel<Optional>, ONEKDOperationFlagModel<Optional>;

@interface ONEActivityFlagModel : ONEBaseModel
{
    NSNumber<Optional> *_open;
    NSNumber<Optional> *_project_id;
    NSString<Optional> *_title;
    NSString<Optional> *_project_icon_url;
    NSString<Optional> *_driver_icon_url;
    ONEFastCarFlagModel<Optional> *_fast_car;
    ONEKDOperationFlagModel<Optional> *_topic_car;
}

@property(retain, nonatomic) ONEKDOperationFlagModel<Optional> *topic_car; // @synthesize topic_car=_topic_car;
@property(retain, nonatomic) ONEFastCarFlagModel<Optional> *fast_car; // @synthesize fast_car=_fast_car;
@property(retain, nonatomic) NSString<Optional> *driver_icon_url; // @synthesize driver_icon_url=_driver_icon_url;
@property(retain, nonatomic) NSString<Optional> *project_icon_url; // @synthesize project_icon_url=_project_icon_url;
@property(retain, nonatomic) NSString<Optional> *title; // @synthesize title=_title;
@property(retain, nonatomic) NSNumber<Optional> *project_id; // @synthesize project_id=_project_id;
@property(retain, nonatomic) NSNumber<Optional> *open; // @synthesize open=_open;
- (void).cxx_destruct;

@end

