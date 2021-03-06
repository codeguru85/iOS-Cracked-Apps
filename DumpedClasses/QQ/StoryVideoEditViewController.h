//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQVideoCaptureViewController.h"

@class QQMultiImagePickerController;

@interface StoryVideoEditViewController : QQVideoCaptureViewController
{
    CDUnknownBlockType _completeBlock;
    QQMultiImagePickerController *_editViewPicker;
    id <StoryVideoEditViewDelegate> _delegate;
}

@property(nonatomic) __weak id <StoryVideoEditViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)storyVideoPreviewDidPlay:(id)arg1;
- (void)QQMultiImagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 withComplete:(CDUnknownBlockType)arg3;
- (void)editViewDidCancel:(id)arg1;
- (void)createControlPanel;
- (void)startCamereAsync;
- (void)dealloc;

@end

