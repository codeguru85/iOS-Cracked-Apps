//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface HPPublishPopItem : TBJSONModel
{
    NSString *_icon;
    NSString *_text;
    long long _multipart;
    long long _min;
    long long _max;
}

@property(nonatomic) long long max; // @synthesize max=_max;
@property(nonatomic) long long min; // @synthesize min=_min;
@property(nonatomic) long long multipart; // @synthesize multipart=_multipart;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;

@end

