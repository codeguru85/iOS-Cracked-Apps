//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSString;

@interface QQGrayTipsIco : QQModel
{
    NSString *_icoName;
    NSString *_icoUrl;
    unsigned long long _location;
    struct CGSize _size;
    struct UIEdgeInsets _insets;
}

@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(nonatomic) unsigned long long location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *icoUrl; // @synthesize icoUrl=_icoUrl;
@property(retain, nonatomic) NSString *icoName; // @synthesize icoName=_icoName;
- (void).cxx_destruct;
- (id)init;

@end

