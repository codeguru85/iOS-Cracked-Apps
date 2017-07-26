//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBViewController.h"

#import "DatePickerToolViewDelegate.h"
#import "ReminderToolViewDelegate.h"
#import "UIAlertViewDelegate.h"

@class DatePickerToolView, NSDate, NSDateFormatter, NSDictionary, NSManagedObjectContext, NSNumber, NSString, ReminderToolView, TBCalendarPlan, UIButton, UIScrollView, UIView;

@interface MyPlanViewController : TBViewController <ReminderToolViewDelegate, DatePickerToolViewDelegate, UIAlertViewDelegate>
{
    _Bool _canChangeDate;
    _Bool _needKeep;
    NSManagedObjectContext *_managedObjectContext;
    NSNumber *editable;
    NSDate *end_time;
    NSString *event_id;
    NSNumber *isallday;
    NSNumber *isrepeat;
    NSString *link;
    NSString *oprater;
    NSString *repeat;
    NSString *source_id;
    NSDate *start_time;
    NSString *thedate;
    NSString *title;
    NSString *u_id;
    NSString *user_id;
    NSNumber *remind;
    NSDate *alarm_time;
    NSString *desc;
    TBCalendarPlan *plan;
    NSString *_userId;
    UIScrollView *_scrollerContainer;
    UIButton *_planTitle;
    UIButton *_planRemindBtn;
    UIButton *_planDateFromBtn;
    UIView *_toolView;
    DatePickerToolView *_datePickerView;
    ReminderToolView *_remindView;
    UIButton *_curSelectedDateBtn;
    NSString *_completeAction;
    NSDictionary *_planDic;
    NSString *_titleStr;
    UIView *_maskView;
    NSDateFormatter *_dateFormatter;
}

@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) _Bool needKeep; // @synthesize needKeep=_needKeep;
@property(retain, nonatomic) NSString *titleStr; // @synthesize titleStr=_titleStr;
@property(retain, nonatomic) NSDictionary *planDic; // @synthesize planDic=_planDic;
@property(retain, nonatomic) NSString *completeAction; // @synthesize completeAction=_completeAction;
@property(retain, nonatomic) UIButton *curSelectedDateBtn; // @synthesize curSelectedDateBtn=_curSelectedDateBtn;
@property(retain, nonatomic) ReminderToolView *remindView; // @synthesize remindView=_remindView;
@property(retain, nonatomic) DatePickerToolView *datePickerView; // @synthesize datePickerView=_datePickerView;
@property(retain, nonatomic) UIView *toolView; // @synthesize toolView=_toolView;
@property(retain, nonatomic) UIButton *planDateFromBtn; // @synthesize planDateFromBtn=_planDateFromBtn;
@property(retain, nonatomic) UIButton *planRemindBtn; // @synthesize planRemindBtn=_planRemindBtn;
@property(retain, nonatomic) UIButton *planTitle; // @synthesize planTitle=_planTitle;
@property(retain, nonatomic) UIScrollView *scrollerContainer; // @synthesize scrollerContainer=_scrollerContainer;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(nonatomic) _Bool canChangeDate; // @synthesize canChangeDate=_canChangeDate;
@property(nonatomic) __weak TBCalendarPlan *plan; // @synthesize plan;
@property(retain, nonatomic) NSString *desc; // @synthesize desc;
@property(retain, nonatomic) NSDate *alarm_time; // @synthesize alarm_time;
@property(retain, nonatomic) NSNumber *remind; // @synthesize remind;
@property(retain, nonatomic) NSString *user_id; // @synthesize user_id;
@property(retain, nonatomic) NSString *u_id; // @synthesize u_id;
- (void)setTitle:(id)arg1;
- (id)title;
@property(retain, nonatomic) NSString *thedate; // @synthesize thedate;
@property(retain, nonatomic) NSDate *start_time; // @synthesize start_time;
@property(retain, nonatomic) NSString *source_id; // @synthesize source_id;
@property(retain, nonatomic) NSString *repeat; // @synthesize repeat;
@property(retain, nonatomic) NSString *oprater; // @synthesize oprater;
@property(retain, nonatomic) NSString *link; // @synthesize link;
@property(retain, nonatomic) NSNumber *isrepeat; // @synthesize isrepeat;
@property(retain, nonatomic) NSNumber *isallday; // @synthesize isallday;
@property(retain, nonatomic) NSString *event_id; // @synthesize event_id;
@property(retain, nonatomic) NSDate *end_time; // @synthesize end_time;
@property(retain, nonatomic) NSNumber *editable; // @synthesize editable;
- (void).cxx_destruct;
- (void)viewDidUnload;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (id)getCalendarService;
- (id)saveContext;
- (id)switchToReminderString:(id)arg1;
- (void)adjustContainerPadding:(long long)arg1;
- (void)showToolView;
- (void)hideToolView;
- (void)maskViewTapped:(id)arg1;
- (void)saveSelectedDatePicker:(id)arg1 isAllDay:(_Bool)arg2;
- (void)saveSelectedRepeater:(id)arg1;
- (void)saveSelectedReminder:(id)arg1;
- (void)openDateToolView:(id)arg1;
- (void)openRemindToolView:(id)arg1;
- (void)animateTextField:(id)arg1 up:(_Bool)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)refreshPlan;
- (void)updateUserPlan;
- (void)savePlan:(id)arg1;
- (void)addUserPlan;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)completeClick;
- (void)backToLastView;
- (void)showPlanInfo;
- (void)drawNavigation;
- (void)searchSQL;
- (void)setUpStyle;
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
- (void)setStartTime:(id)arg1;
- (id)alertTime;
- (id)endTime;
- (id)startTime;
- (id)remindTime;
- (void)displayStartTime:(id)arg1;
- (id)md5:(id)arg1;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)adpterView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;
- (void)viewDidDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
