//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGBasicSheet.h"

@class KGThemeButton, KGThemeImageView, KGThemeLabel, NSArray, NSMutableArray, NSMutableDictionary, NSString, UIButton, UIImageView, UIView;

@interface KGActionSheetEx : KGBasicSheet
{
    UIView *_titleBackgroundView;
    KGThemeLabel *_titleLabel;
    KGThemeLabel *_messageLabel;
    UIView *_buttonBackgroundView;
    UIView *_cancelBackgroundView;
    NSMutableArray *_buttonTitles;
    NSMutableDictionary *_buttonHandles;
    long long _selectedButtonIndex;
    UIImageView *_selectedView;
    UIButton *_button1;
    UIButton *_button2;
    UIButton *_confirmTitle;
    _Bool _selectIndexAndDismiss;
    _Bool _contentAlignCenter;
    NSString *_title;
    NSArray *_message;
    CDUnknownBlockType _dismissBlock;
    CDUnknownBlockType _selectIndexAndDismissBlock;
    double _separatorLeftInset;
    KGThemeImageView *_bgv;
    UIView *_seperateView;
    KGThemeButton *_confirmBtn;
    KGThemeButton *_cancelBtn;
}

+ (id)actionSheetWithTitle:(id)arg1 message:(id)arg2 buttonTitles:(id)arg3 cancelTitle:(id)arg4 confirmTitle:(id)arg5 selectedIndex:(long long)arg6;
@property(retain, nonatomic) KGThemeButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) KGThemeButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) UIView *seperateView; // @synthesize seperateView=_seperateView;
@property(retain, nonatomic) KGThemeImageView *bgv; // @synthesize bgv=_bgv;
@property(nonatomic) double separatorLeftInset; // @synthesize separatorLeftInset=_separatorLeftInset;
@property(nonatomic) _Bool contentAlignCenter; // @synthesize contentAlignCenter=_contentAlignCenter;
@property(nonatomic) _Bool selectIndexAndDismiss; // @synthesize selectIndexAndDismiss=_selectIndexAndDismiss;
@property(copy, nonatomic) CDUnknownBlockType selectIndexAndDismissBlock; // @synthesize selectIndexAndDismissBlock=_selectIndexAndDismissBlock;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(copy, nonatomic) NSArray *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long selectedButtonIndex; // @synthesize selectedButtonIndex=_selectedButtonIndex;
- (void).cxx_destruct;
- (void)cancel;
- (void)sheetButtonClick:(id)arg1;
- (void)confirmButtonClick:(id)arg1;
- (void)cancelButtonClick:(id)arg1;
- (void)layoutSubviews;
- (void)p_init;
- (void)p_SelectWithButtonIndex:(long long)arg1;
- (void)p_setButtonSelected:(long long)arg1;
- (long long)p_addButtonWithTitle:(id)arg1;
- (void)p_layoutButtons;
- (void)show;
- (long long)addButtonWithTitle:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2;

@end

