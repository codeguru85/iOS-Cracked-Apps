//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TRBaseModel.h"

@class NSString;

@interface SPayBillDataItem : TRBaseModel
{
    _Bool _supportCheck;
    _Bool _isChecked;
    NSString *_title;
    NSString *_value;
}

@property(nonatomic) _Bool isChecked; // @synthesize isChecked=_isChecked;
@property(nonatomic) _Bool supportCheck; // @synthesize supportCheck=_supportCheck;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

