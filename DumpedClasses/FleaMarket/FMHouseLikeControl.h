//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class UIImageView;

@interface FMHouseLikeControl : UIControl
{
    UIImageView *_selectedImageView;
    UIImageView *_unSelectedImageView;
    CDUnknownBlockType _selectBlock;
}

@property(copy, nonatomic) CDUnknownBlockType selectBlock; // @synthesize selectBlock=_selectBlock;
@property(retain, nonatomic) UIImageView *unSelectedImageView; // @synthesize unSelectedImageView=_unSelectedImageView;
@property(retain, nonatomic) UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1;
- (void)setupConstraints;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)selectStateDidChange;
- (id)initWithFrame:(struct CGRect)arg1;

@end

