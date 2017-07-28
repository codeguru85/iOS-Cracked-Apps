//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Mobike_ViewController.h"

#import "UIActionSheetDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITextViewDelegate.h"

@class NSArray, NSDictionary, NSString, UIButton, UIImage, UILabel, UIScrollView, UITextView;

@interface CustomerLockAbnormalViewController : Mobike_ViewController <UIScrollViewDelegate, UITextViewDelegate, UIActionSheetDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    NSArray *dataArray;
    UIImage *takePhotoImage;
    NSDictionary *_ridParam;
    UIButton *_makePhoto;
    UIScrollView *_scrollView;
    UILabel *_titleLable;
    UILabel *_lineLbl;
    UILabel *_bikeCodeLbl;
    UIButton *_submitBtn;
    UITextView *_textView;
    UILabel *_label1;
    UILabel *_label2;
    UILabel *_label3;
    UILabel *_label4;
    UILabel *_placeHolder;
    UILabel *_noteLabel;
}

@property(retain, nonatomic) UILabel *noteLabel; // @synthesize noteLabel=_noteLabel;
@property(nonatomic) __weak UILabel *placeHolder; // @synthesize placeHolder=_placeHolder;
@property(nonatomic) __weak UILabel *label4; // @synthesize label4=_label4;
@property(nonatomic) __weak UILabel *label3; // @synthesize label3=_label3;
@property(nonatomic) __weak UILabel *label2; // @synthesize label2=_label2;
@property(nonatomic) __weak UILabel *label1; // @synthesize label1=_label1;
@property(nonatomic) __weak UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak UIButton *submitBtn; // @synthesize submitBtn=_submitBtn;
@property(nonatomic) __weak UILabel *bikeCodeLbl; // @synthesize bikeCodeLbl=_bikeCodeLbl;
@property(nonatomic) __weak UILabel *lineLbl; // @synthesize lineLbl=_lineLbl;
@property(nonatomic) __weak UILabel *titleLable; // @synthesize titleLable=_titleLable;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIButton *makePhoto; // @synthesize makePhoto=_makePhoto;
@property(retain, nonatomic) NSDictionary *ridParam; // @synthesize ridParam=_ridParam;
- (void).cxx_destruct;
- (void)submitBtnAction:(id)arg1;
- (id)getImagePath;
- (void)saveImage:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)openImagePickerControllerWith:(long long)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)photoBtnAction:(id)arg1;
- (void)reportPayProblemFailed:(id)arg1;
- (void)reportPayProblemSucc:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)reLayoutSubmitBtn;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setupView;
- (void)setupController;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
