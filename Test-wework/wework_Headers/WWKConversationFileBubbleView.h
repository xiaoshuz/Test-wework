//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKConversationMessageMaskedBubbleView.h"

#import "NotificationProxyObserverDelegate-Protocol.h"

@class UIImageView, UILabel, WWKMessageFile, WWKProgressIndicator;

@interface WWKConversationFileBubbleView : WWKConversationMessageMaskedBubbleView <NotificationProxyObserverDelegate>
{
    struct unique_ptr<NotificationProxyObserver, std::__1::default_delete<NotificationProxyObserver>> _ftn_state_observer;
    unsigned long long _currentSize;
    UIImageView *_fileIconView;
    UILabel *_fileNameLabel;
    UILabel *_fileSizeLabel;
    WWKProgressIndicator *_progressIndicator;
}

@property(retain, nonatomic) WWKProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain, nonatomic) UILabel *fileSizeLabel; // @synthesize fileSizeLabel=_fileSizeLabel;
@property(retain, nonatomic) UILabel *fileNameLabel; // @synthesize fileNameLabel=_fileNameLabel;
@property(retain, nonatomic) UIImageView *fileIconView; // @synthesize fileIconView=_fileIconView;
@property(nonatomic) unsigned long long currentSize; // @synthesize currentSize=_currentSize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)p_needShowCloudDiskMenuItem;
- (void)checkDelayProgress:(id)arg1;
- (void)onNotification:(int)arg1 source:(const struct NotificationSource *)arg2 details:(const struct NotificationDetails *)arg3;
- (void)contextMenuPause:(id)arg1;
- (void)contextMenuDownload:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)contextMenuCopyFile:(id)arg1;
- (void)contextMenuSaveFileToCloudDisk:(id)arg1;
- (id)contextMenuItems;
- (void)viewDidTap:(id)arg1;
- (struct CGSize)layoutSubviewsWithWidth:(double)arg1;
- (void)updateProgress;
- (void)updateData;
- (_Bool)hasSendingState;
- (Class)messageItemClass;
- (void)initSubviews;

// Remaining properties
@property(readonly, nonatomic) WWKMessageFile *messageItem; // @dynamic messageItem;

@end
