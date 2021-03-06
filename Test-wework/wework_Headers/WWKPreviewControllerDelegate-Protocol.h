//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, UIImage, WWKPhoto, WWKPreviewController;

@protocol WWKPreviewControllerDelegate <NSObject>
- (void)photoBrowser:(WWKPreviewController *)arg1 sendImg:(UIImage *)arg2;
- (void)photoBrowser:(WWKPreviewController *)arg1 didFinishPickingPhotosWithInfo:(NSDictionary *)arg2 isNeedOrginalSize:(_Bool)arg3;
- (void)photoBrowser:(WWKPreviewController *)arg1 didCheckOrginalSize:(_Bool)arg2;
- (_Bool)photoBrowser:(WWKPreviewController *)arg1 shouldCheckPhotoAtIndex:(unsigned long long)arg2;
- (void)photoBrowser:(WWKPreviewController *)arg1 didPhotoUnCheckedAtIndex:(unsigned long long)arg2;
- (void)photoBrowser:(WWKPreviewController *)arg1 didPhotoCheckedAtIndex:(unsigned long long)arg2;
- (_Bool)photoBrowser:(WWKPreviewController *)arg1 photoIsCheckedAtIndex:(unsigned long long)arg2;
- (void)photoBrowserDidCanceled:(WWKPreviewController *)arg1;
- (WWKPhoto *)photoBrowser:(WWKPreviewController *)arg1 photoAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfSelectedPhotosInPhotoBrowser:(WWKPreviewController *)arg1;
- (unsigned long long)numberOfPhotosInPhotoBrowser:(WWKPreviewController *)arg1;
@end

