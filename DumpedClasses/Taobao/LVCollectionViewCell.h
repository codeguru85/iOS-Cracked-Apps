//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class LuaViewCore;

@interface LVCollectionViewCell : UICollectionViewCell
{
    _Bool _isInited;
    LuaViewCore *_lv_luaviewCore;
}

@property(nonatomic) __weak LuaViewCore *lv_luaviewCore; // @synthesize lv_luaviewCore=_lv_luaviewCore;
@property(nonatomic) _Bool isInited; // @synthesize isInited=_isInited;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)description;
- (void)pushTableToStack;
- (void)doInitWithLView:(id)arg1;
- (void)dealloc;

@end

