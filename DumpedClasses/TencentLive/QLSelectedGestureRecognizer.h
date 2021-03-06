//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPanGestureRecognizer.h"

#import "UIGestureRecognizerDelegate.h"

@class NSIndexPath, NSMutableArray, NSString;

@interface QLSelectedGestureRecognizer : UIPanGestureRecognizer <UIGestureRecognizerDelegate>
{
    _Bool _isTriggered;
    _Bool _hasTryTrigger;
    _Bool _isInverse;
    id <QLSelectedGestureRecognizerDelegate> _gestureDelegate;
    double _triggerAngle;
    NSMutableArray *_selectedIndexPaths;
    NSMutableArray *_currentSelectedIndexPaths;
    NSMutableArray *_currentDeselectedIndexPaths;
    NSMutableArray *_shouldDeseletIndexPaths;
    NSIndexPath *_startIndexPath;
    NSIndexPath *_lastIndexPath;
    NSIndexPath *_currentIndexPath;
    struct CGPoint _startPoint;
    struct CGPoint _currentPoint;
}

@property(nonatomic) _Bool isInverse; // @synthesize isInverse=_isInverse;
@property(nonatomic) _Bool hasTryTrigger; // @synthesize hasTryTrigger=_hasTryTrigger;
@property(nonatomic) _Bool isTriggered; // @synthesize isTriggered=_isTriggered;
@property(nonatomic) struct CGPoint currentPoint; // @synthesize currentPoint=_currentPoint;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(retain, nonatomic) NSIndexPath *currentIndexPath; // @synthesize currentIndexPath=_currentIndexPath;
@property(retain, nonatomic) NSIndexPath *lastIndexPath; // @synthesize lastIndexPath=_lastIndexPath;
@property(retain, nonatomic) NSIndexPath *startIndexPath; // @synthesize startIndexPath=_startIndexPath;
@property(retain, nonatomic) NSMutableArray *shouldDeseletIndexPaths; // @synthesize shouldDeseletIndexPaths=_shouldDeseletIndexPaths;
@property(retain, nonatomic) NSMutableArray *currentDeselectedIndexPaths; // @synthesize currentDeselectedIndexPaths=_currentDeselectedIndexPaths;
@property(retain, nonatomic) NSMutableArray *currentSelectedIndexPaths; // @synthesize currentSelectedIndexPaths=_currentSelectedIndexPaths;
@property(retain, nonatomic) NSMutableArray *selectedIndexPaths; // @synthesize selectedIndexPaths=_selectedIndexPaths;
@property(nonatomic) double triggerAngle; // @synthesize triggerAngle=_triggerAngle;
@property(nonatomic) __weak id <QLSelectedGestureRecognizerDelegate> gestureDelegate; // @synthesize gestureDelegate=_gestureDelegate;
- (void).cxx_destruct;
- (_Bool)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)notifyDelegateThatGestureWhetherIsTriggered:(_Bool)arg1;
- (void)notifyDelegateThatGestureDidEnd;
- (void)notifyDelegateThatGestureDidSelectItem:(id)arg1 setSelected:(_Bool)arg2;
- (_Bool)shouldDeselectWhenGestureEndAtIndexPath:(id)arg1;
- (_Bool)shouldNotSelectAtIndexPath:(id)arg1;
- (_Bool)whetherTriggerWithStartPoint:(struct CGPoint)arg1 andEndPoint:(struct CGPoint)arg2;
- (void)triggerIfNeeded;
- (void)mergeIndexPathsIfNeeded;
- (void)deselectItemsIfNeeded;
- (void)clearDatas;
- (void)updateCurrentIndexPathsWithIndexPath:(id)arg1 selected:(_Bool)arg2;
- (void)selectItem:(_Bool)arg1 atIndexPath:(id)arg2;
- (_Bool)shouldSelectedWithIndexPath:(id)arg1 selected:(_Bool)arg2;
- (void)selectedItems:(_Bool)arg1 between:(id)arg2 and:(id)arg3;
- (void)selectItemsFromLastIndexPath:(id)arg1 toCurrentIndexPath:(id)arg2 inverse:(_Bool)arg3;
- (void)selectItemsWithCurrentPoint:(struct CGPoint)arg1 andEvent:(id)arg2;
- (id)currentIndexFromTouchPoint:(struct CGPoint)arg1 andEvent:(id)arg2;
- (void)singleSelectedIfNeeded;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setItemAtIndexPath:(id)arg1 selected:(_Bool)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)resetSelectedGestureRecognizer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

