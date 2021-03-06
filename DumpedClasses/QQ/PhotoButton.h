//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSString, UIImage;

@interface PhotoButton : UIButton
{
    NSString *_photoURL;
    UIImage *_photoImg;
    _Bool _returnOriginImg;
    int _xo;
    CDUnknownBlockType _callBack;
}

@property(copy, nonatomic) CDUnknownBlockType callBack; // @synthesize callBack=_callBack;
- (void)onPictureDownloadCallback:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
@property(retain, nonatomic) UIImage *photoImg; // @dynamic photoImg;
- (void)cancel:(_Bool)arg1;
@property(retain, nonatomic) NSString *photoURL; // @dynamic photoURL;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(nonatomic) _Bool returnOriginImg; // @dynamic returnOriginImg;

@end

