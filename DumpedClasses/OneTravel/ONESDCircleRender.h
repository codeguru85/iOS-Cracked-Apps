//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DiCircleView.h"

#import "ONESBaseOverlayPathProtocol.h"

@class NSString, ONESBaseOverlayPathRender;

@interface ONESDCircleRender : DiCircleView <ONESBaseOverlayPathProtocol>
{
    ONESBaseOverlayPathRender *_baseOverlayRender;
}

@property(readonly, nonatomic) ONESBaseOverlayPathRender *baseOverlayRender; // @synthesize baseOverlayRender=_baseOverlayRender;
- (void).cxx_destruct;
- (void)updateRender:(id)arg1;
- (id)initWithBaseCircleRender:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

