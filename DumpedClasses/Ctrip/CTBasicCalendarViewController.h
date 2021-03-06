//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "CTCalendarContentViewDelegate.h"
#import "CTFestivalFilterViewDelegate.h"

@class CTBasicCalendarView, CTFestivalFilterView, NSDate, NSDictionary, NSMutableArray, NSString;

@interface CTBasicCalendarViewController : CTRootViewController <CTCalendarContentViewDelegate, CTFestivalFilterViewDelegate>
{
    _Bool _showFilterView;
    _Bool _isFirstInit;
    CTBasicCalendarView *_calendarView;
    id <CTBasicCalendarViewControllerDelegate> _delegate;
    CTFestivalFilterView *_filterView;
    NSDate *_startDate;
    NSDate *_endDate;
    NSDate *_currentDate;
    NSDate *_selectedDate;
    NSDictionary *_firstSubTitlesForDates;
    NSDictionary *_secondSubTitlesForDates;
    NSDictionary *_firstSubTitlesColorForDates;
    NSDictionary *_secondSubTitlesColorForDates;
    NSDictionary *_configuration;
    NSString *_mainTitleString;
    NSString *_subTitleString;
    NSString *_tipsMessageString;
    NSMutableArray *_festivals;
}

@property(nonatomic) _Bool isFirstInit; // @synthesize isFirstInit=_isFirstInit;
@property(retain, nonatomic) NSMutableArray *festivals; // @synthesize festivals=_festivals;
@property(copy, nonatomic) NSString *tipsMessageString; // @synthesize tipsMessageString=_tipsMessageString;
@property(retain, nonatomic) NSString *subTitleString; // @synthesize subTitleString=_subTitleString;
@property(retain, nonatomic) NSString *mainTitleString; // @synthesize mainTitleString=_mainTitleString;
@property(retain, nonatomic) NSDictionary *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) NSDictionary *secondSubTitlesColorForDates; // @synthesize secondSubTitlesColorForDates=_secondSubTitlesColorForDates;
@property(retain, nonatomic) NSDictionary *firstSubTitlesColorForDates; // @synthesize firstSubTitlesColorForDates=_firstSubTitlesColorForDates;
@property(retain, nonatomic) NSDictionary *secondSubTitlesForDates; // @synthesize secondSubTitlesForDates=_secondSubTitlesForDates;
@property(retain, nonatomic) NSDictionary *firstSubTitlesForDates; // @synthesize firstSubTitlesForDates=_firstSubTitlesForDates;
@property(retain, nonatomic) NSDate *selectedDate; // @synthesize selectedDate=_selectedDate;
@property(retain, nonatomic) NSDate *currentDate; // @synthesize currentDate=_currentDate;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) _Bool showFilterView; // @synthesize showFilterView=_showFilterView;
@property(retain, nonatomic) CTFestivalFilterView *filterView; // @synthesize filterView=_filterView;
@property(nonatomic) __weak id <CTBasicCalendarViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CTBasicCalendarView *calendarView; // @synthesize calendarView=_calendarView;
- (void).cxx_destruct;
- (void)festivalFilterView:(id)arg1 didSelectFestival:(id)arg2;
- (void)calendarView:(id)arg1 didSelectedDay:(id)arg2 withDateView:(id)arg3;
- (void)calendarView:(id)arg1 didSelectedDay:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)scrollToDate:(id)arg1 animated:(_Bool)arg2;
- (void)scrollToDate:(id)arg1;
- (void)reloadWithStartDate:(id)arg1 endDate:(id)arg2 currentDate:(id)arg3 selectedDate:(id)arg4 firstSubTitlesForDates:(id)arg5 secondSubTitlesForDates:(id)arg6 firstSubTitlesColorForDates:(id)arg7 secondSubTitlesColorForDates:(id)arg8 configuration:(id)arg9;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 currentDate:(id)arg3 selectedDate:(id)arg4 firstSubTitlesForDates:(id)arg5 secondSubTitlesForDates:(id)arg6 firstSubTitlesColorForDates:(id)arg7 secondSubTitlesColorForDates:(id)arg8 configuration:(id)arg9 delegate:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

