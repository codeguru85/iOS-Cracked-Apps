//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor, UIFont;

@interface DCUITabItemViewModel : NSObject
{
    _Bool _isSelected;
    _Bool _isShowRedDot;
    double _indicatorMargin;
    double _tabItemHeight;
    UIColor *_textColor;
    UIColor *_selectedTextColor;
    UIFont *_textFont;
    UIFont *_selectedTextFont;
}

+ (id)defaultModel;
@property(retain, nonatomic) UIFont *selectedTextFont; // @synthesize selectedTextFont=_selectedTextFont;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(retain, nonatomic) UIColor *selectedTextColor; // @synthesize selectedTextColor=_selectedTextColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) double tabItemHeight; // @synthesize tabItemHeight=_tabItemHeight;
@property(nonatomic) double indicatorMargin; // @synthesize indicatorMargin=_indicatorMargin;
@property(nonatomic) _Bool isShowRedDot; // @synthesize isShowRedDot=_isShowRedDot;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
- (void).cxx_destruct;

@end

