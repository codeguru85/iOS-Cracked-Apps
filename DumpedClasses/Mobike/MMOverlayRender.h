//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMOverlayRenderKVO, UIColor;

@interface MMOverlayRender : NSObject
{
    int _lineJoin;
    int _lineCap;
    id <MMOverlay> _overlay;
    UIColor *_fillColor;
    UIColor *_strokeColor;
    double _lineWidth;
    MMOverlayRenderKVO *_KVO;
}

+ (id)KVOAttributes;
@property(retain, nonatomic) MMOverlayRenderKVO *KVO; // @synthesize KVO=_KVO;
@property(nonatomic) int lineCap; // @synthesize lineCap=_lineCap;
@property(nonatomic) int lineJoin; // @synthesize lineJoin=_lineJoin;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) id <MMOverlay> overlay; // @synthesize overlay=_overlay;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithOverlay:(id)arg1;
- (void)setObserver:(id)arg1;

@end

