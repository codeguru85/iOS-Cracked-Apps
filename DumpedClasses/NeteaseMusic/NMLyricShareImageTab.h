//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface NMLyricShareImageTab : UIView
{
    NSArray *_buttonArray;
    long long _lastIndex;
    long long _currentIndex;
    id <NMLyricShareImageTabDelegate> _delegate;
}

+ (double)height;
@property(nonatomic) id <NMLyricShareImageTabDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
- (void).cxx_destruct;
- (void)changeCurrentIndexOutlook:(long long)arg1;
- (void)buttonClicked:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
