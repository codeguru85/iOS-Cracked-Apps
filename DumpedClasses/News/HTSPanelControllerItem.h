//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@interface HTSPanelControllerItem : NSObject
{
    _Bool _selected;
    _Bool _banDig;
    unsigned long long _itemType;
    NSString *_iconKey;
    NSString *_title;
    CDUnknownBlockType _clickAction;
    UIImage *_iconImage;
    NSString *_count;
}

@property(nonatomic) _Bool banDig; // @synthesize banDig=_banDig;
@property(retain, nonatomic) NSString *count; // @synthesize count=_count;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(copy, nonatomic) CDUnknownBlockType clickAction; // @synthesize clickAction=_clickAction;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *iconKey; // @synthesize iconKey=_iconKey;
@property(nonatomic) unsigned long long itemType; // @synthesize itemType=_itemType;
- (void).cxx_destruct;
- (id)initWithAvatar:(id)arg1 title:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)initWithAvatar:(id)arg1 title:(id)arg2;
- (id)initWithIcon:(id)arg1 title:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)initSelectedTypeIcon:(id)arg1 title:(id)arg2;
- (id)initWithIcon:(id)arg1 title:(id)arg2;

@end

