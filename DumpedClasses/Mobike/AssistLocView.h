//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface AssistLocView : UIView
{
    id <AssistLocDelegate> _delegate;
    UIButton *_assistBtn;
}

@property(retain, nonatomic) UIButton *assistBtn; // @synthesize assistBtn=_assistBtn;
@property(nonatomic) id <AssistLocDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)assistBtnAction:(id)arg1;
- (void)resetAssist;
- (void)showAssist;
- (void)hideAssist;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
