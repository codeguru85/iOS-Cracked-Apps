//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, NSMutableSet, NSRecursiveLock;

@interface MAOverlayContainerView : UIView
{
    NSMutableArray *_overlays;
    NSMutableArray *_drawables;
    NSMutableSet *_invalidOverlays;
    NSRecursiveLock *_overlayLock;
    _Bool _useSnapshotRenderer;
    id <MAOverlayContainerViewDelegate> _delegate;
}

+ (Class)layerClass;
@property(nonatomic) __weak id <MAOverlayContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool useSnapshotRenderer; // @synthesize useSnapshotRenderer=_useSnapshotRenderer;
- (void).cxx_destruct;
- (struct CGRect)getNeedsDisplayRectForMapRect:(struct MAMapRect)arg1 atZoomScale:(double)arg2;
- (void)setNeedsDisplayInMapRect:(struct MAMapRect)arg1 zoomScale:(double)arg2;
- (void)setNeedsDisplayInMapRect:(struct MAMapRect)arg1;
- (void)insertOverlay:(id)arg1 belowOverlay:(id)arg2;
- (void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)exchangeOverlayAtIndex:(unsigned long long)arg1 withOverlayAtIndex:(unsigned long long)arg2;
- (void)insertOverlay:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeOverlays:(id)arg1;
- (void)removeOverlay:(id)arg1;
- (void)addOverlays:(id)arg1;
- (void)addOverlay:(id)arg1;
- (id)drawableForOverlay:(id)arg1;
@property(readonly, nonatomic) NSArray *overlayArray;
- (void)checkInvalidOverlays;
- (void)removeDrawable:(id)arg1 forOverlay:(id)arg2;
- (void)insertDrawable:(id)arg1 forOverlay:(id)arg2 atIndex:(long long)arg3;
- (void)replaceDrawable:(id)arg1 forOverlay:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)renderOverlay:(id)arg1 inContext:(struct CGContext *)arg2 atZoomScale:(double)arg3;
- (void)deallocOperation;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)tiledLayer;

@end

