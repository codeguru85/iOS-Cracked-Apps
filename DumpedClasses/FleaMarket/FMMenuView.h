//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@class FMServiceMenuDO, UIView;

@interface FMMenuView : UILabel
{
    FMServiceMenuDO *menuDO;
    UIView *subMenu;
    UIView *keyWindow;
    _Bool isActioned;
    FMMenuView *_superMenu;
}

@property(retain, nonatomic) FMMenuView *superMenu; // @synthesize superMenu=_superMenu;
- (void).cxx_destruct;
- (void)showSubMenus;
- (void)hideSubMenus;
- (void)menuTapped;
- (double)setMenu:(id)arg1;
- (id)initWithMenu:(id)arg1;
- (id)init;

@end

