//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "WWKAssetGroupsControllerDelegate-Protocol.h"
#import "WWKAttendanceChoosePhotoCellViewDelegate-Protocol.h"
#import "WWKAttendanceReportReasonCellViewDelegate-Protocol.h"
#import "WWKMultiImageBrowseViewControllerDelegate-Protocol.h"

@class MBProgressHUD, NSArray, NSMutableArray, NSString, UIButton, WWKAttendanceChoosePhotoCellView, WWKAttendanceReportReasonCellView;

@interface WWKAttendanceReportReasonController : UITableViewController <WWKAttendanceChoosePhotoCellViewDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, WWKAssetGroupsControllerDelegate, WWKMultiImageBrowseViewControllerDelegate, WWKAttendanceReportReasonCellViewDelegate>
{
    UIButton *reportButton;
    scoped_refptr_e21d2ae3 _attendance;
    _Bool _isReportRemarkChange;
    CDUnknownBlockType _confirmHandler;
    CDUnknownBlockType _dismissHandler;
    NSString *_titleString;
    NSArray *_photos;
    NSString *_note;
    WWKAttendanceReportReasonCellView *_reportTextCellView;
    WWKAttendanceChoosePhotoCellView *_addPhotoCellView;
    MBProgressHUD *_hudReportLoading;
    NSMutableArray *_mutablePhotos;
}

@property(retain, nonatomic) NSMutableArray *mutablePhotos; // @synthesize mutablePhotos=_mutablePhotos;
@property(retain, nonatomic) MBProgressHUD *hudReportLoading; // @synthesize hudReportLoading=_hudReportLoading;
@property(nonatomic) _Bool isReportRemarkChange; // @synthesize isReportRemarkChange=_isReportRemarkChange;
@property(retain, nonatomic) WWKAttendanceChoosePhotoCellView *addPhotoCellView; // @synthesize addPhotoCellView=_addPhotoCellView;
@property(retain, nonatomic) WWKAttendanceReportReasonCellView *reportTextCellView; // @synthesize reportTextCellView=_reportTextCellView;
@property(copy, nonatomic) NSString *note; // @synthesize note=_note;
@property(copy, nonatomic) NSArray *photos; // @synthesize photos=_photos;
@property(copy, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
@property(copy, nonatomic) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
@property(copy, nonatomic) CDUnknownBlockType confirmHandler; // @synthesize confirmHandler=_confirmHandler;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onPvMergeWillOpen:(id)arg1;
- (void)p_updateConfirmEnable;
- (void)atendanceReportReasonCellTextViewDidChange;
- (_Bool)photoItemShouldBeDeleted:(id)arg1;
- (void)photoItemDidDelete:(id)arg1;
- (void)multiImageBrowseViewControllerWillBack;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)sendImg:(id)arg1;
- (void)didFinishPickPhotos:(id)arg1 isSendOriginalSize:(_Bool)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)wwkAttendanceChoosePhotoCellViewDidClickImageButton:(unsigned long long)arg1;
- (void)wwkAttendanceChoosePhotoCellViewDidClickAddPic;
- (void)p_showCamera;
- (void)p_showAlertWithSuccess:(_Bool)arg1 tips:(id)arg2;
- (void)actionReport;
- (void)p_updateAttendance;
- (id)p_tableViewFooter;
- (void)p_onCancel;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithAttendance:(scoped_refptr_e21d2ae3)arg1 confirmHandler:(CDUnknownBlockType)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

