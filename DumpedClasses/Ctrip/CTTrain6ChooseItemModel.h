//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CTTrain6ChooseItemModel : NSObject
{
    _Bool _enable;
    _Bool _isSelected;
    NSString *_detail;
    NSString *_value;
    NSString *_text;
    NSString *_showDescription;
}

+ (id)modelCustomPropertyMapper;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(copy, nonatomic) NSString *showDescription; // @synthesize showDescription=_showDescription;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
- (void).cxx_destruct;

@end

