//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UINavigationController, WWKWorkLogWebViewController;

@protocol WWKWorkLogWebViewControllerDelegate <NSObject>

@optional
- (UINavigationController *)getNavigationController;
- (void)onWebviewJSLoadFinished:(double)arg1 withTemplateName:(NSString *)arg2 withErrorCode:(int)arg3;
- (void)onWorkLogWebViewController:(WWKWorkLogWebViewController *)arg1 didPublishWorkLogTemplate:(const struct JournalEntry *)arg2;
@end
