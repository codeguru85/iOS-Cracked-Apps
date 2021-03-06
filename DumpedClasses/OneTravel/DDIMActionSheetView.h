//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSString;

@interface DDIMActionSheetView : UIView
{
    UIView *_backView;
    UIView *_actionSheetView;
    double _actionSheetHeight;
    _Bool _isShow;
    _Bool _autoDismissWhenClickButton;
    NSString *_title;
    NSString *_cancelButtonTitle;
    NSString *_destructiveButtonTitle;
    NSArray *_otherButtonTitles;
    NSArray *_otherButtonColors;
    CDUnknownBlockType _selectRowBlock;
}

+ (id)showActionSheetWithTitle:(id)arg1 cancelButtonTitle:(id)arg2 destructiveButtonTitle:(id)arg3 otherButtonTitles:(id)arg4 otherButtonColors:(id)arg5 handler:(CDUnknownBlockType)arg6;
@property(copy, nonatomic) CDUnknownBlockType selectRowBlock; // @synthesize selectRowBlock=_selectRowBlock;
@property(copy, nonatomic) NSArray *otherButtonColors; // @synthesize otherButtonColors=_otherButtonColors;
@property(copy, nonatomic) NSArray *otherButtonTitles; // @synthesize otherButtonTitles=_otherButtonTitles;
@property(copy, nonatomic) NSString *destructiveButtonTitle; // @synthesize destructiveButtonTitle=_destructiveButtonTitle;
@property(copy, nonatomic) NSString *cancelButtonTitle; // @synthesize cancelButtonTitle=_cancelButtonTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool autoDismissWhenClickButton; // @synthesize autoDismissWhenClickButton=_autoDismissWhenClickButton;
- (void).cxx_destruct;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)showInView:(id)arg1 animated:(_Bool)arg2;
- (void)didSelectAction:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithTitle:(id)arg1 cancelButtonTitle:(id)arg2 destructiveButtonTitle:(id)arg3 otherButtonTitles:(id)arg4 otherButtonColors:(id)arg5 handler:(CDUnknownBlockType)arg6;
- (id)init;
- (void)dealloc;

@end

