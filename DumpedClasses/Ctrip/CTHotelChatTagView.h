//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray;

@interface CTHotelChatTagView : UIView
{
    NSArray *_tagList;
    NSMutableArray *_btnList;
}

@property(retain, nonatomic) NSMutableArray *btnList; // @synthesize btnList=_btnList;
@property(retain, nonatomic) NSArray *tagList; // @synthesize tagList=_tagList;
- (void).cxx_destruct;
- (id)getSelectedValue;
- (id)getSelectedTag;
- (void)tagClicked:(id)arg1;

@end

