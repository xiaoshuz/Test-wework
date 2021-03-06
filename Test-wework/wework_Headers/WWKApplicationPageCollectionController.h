//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "NotificationProxyObserverDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "WWKAppointmentListControllerDelegate-Protocol.h"
#import "WWKWorkLogViewControllerDelegate-Protocol.h"
#import "WWKWorkLogWebViewControllerDelegate-Protocol.h"

@class NSMutableArray, NSString, UICollectionView, UIView, WWKApplicationEmptyPageView, WWKApplicationPageCollectionDataSource;

@interface WWKApplicationPageCollectionController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, NotificationProxyObserverDelegate, WWKAppointmentListControllerDelegate, WWKWorkLogViewControllerDelegate, WWKWorkLogWebViewControllerDelegate>
{
    UICollectionView *_collectionView;
    WWKApplicationEmptyPageView *_emptyPageView;
    UIView *_topBackgroundView;
    UIView *_bottomBackgroundView;
    struct unique_ptr<NotificationProxyObserver, std::__1::default_delete<NotificationProxyObserver>> push_notification_observer;
    WWKApplicationPageCollectionDataSource *_dataSource;
    _Bool _isEdit;
    _Bool _showFolderApp;
    CDUnknownBlockType _showOrHideAppBlock;
    NSMutableArray *_applist;
}

@property(retain, nonatomic) NSMutableArray *applist; // @synthesize applist=_applist;
@property(nonatomic) _Bool showFolderApp; // @synthesize showFolderApp=_showFolderApp;
@property(nonatomic) _Bool isEdit; // @synthesize isEdit=_isEdit;
@property(copy, nonatomic) CDUnknownBlockType showOrHideAppBlock; // @synthesize showOrHideAppBlock=_showOrHideAppBlock;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)vieController:(id)arg1 didPublishWorklog:(const struct JournalEntry *)arg2;
- (void)onWorkLogWebViewController:(id)arg1 didPublishWorkLogTemplate:(const struct JournalEntry *)arg2;
- (void)WorkLogViewController:(id)arg1 didPublishPost:(const struct JournalEntry *)arg2;
- (void)popViewController;
- (void)onApplicationItemDidAddInEditMode:(id)arg1;
- (void)onApplicationItemDidRemoveInEditMode:(id)arg1;
- (void)onAppointMessageTipsClear;
- (void)navigation:(id)arg1 pushToViewController:(id)arg2;
- (void)exposeRedPointReport;
- (void)checkParentCellRedPoint;
- (id)redPointKeysWithItem:(id)arg1;
- (_Bool)shouldShowEditMode;
- (SEL)p_getActionWithIndexPath:(id)arg1;
- (void)p_exitEditMode:(id)arg1;
- (void)p_enterEditMode:(id)arg1;
- (void)p_enterAppMarket:(id)arg1;
- (void)p_updateNavigationItems;
- (void)p_updateUI;
- (void)p_saveHiddenAppID;
- (void)p_setActionToItemList:(id)arg1;
- (void)onNotification:(int)arg1 source:(const struct NotificationSource *)arg2 details:(const struct NotificationDetails *)arg3;
- (void)onItemDidLongPressed:(id)arg1;
- (void)onAppInfoChange:(id)arg1;
- (void)orientChange:(id)arg1;
- (void)onDynamicFontSizeDidChange;
- (void)onDidPushManageCorpController:(id)arg1;
- (void)onDidPushMoreAppController:(id)arg1;
- (void)onDidPushVirtualMoreAppController:(id)arg1;
- (void)onDidPushSystemController:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)viewWillLayoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)p_initApplist;
- (id)initIsShowFolderApp:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

