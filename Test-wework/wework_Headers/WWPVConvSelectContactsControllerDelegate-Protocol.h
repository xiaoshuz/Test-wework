//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WWPVConvSelectContactsController;

@protocol WWPVConvSelectContactsControllerDelegate <NSObject>
- (void)onPVConvSelectContactsController:(WWPVConvSelectContactsController *)arg1 didConfirmToSelectContacts:(vector_89e6321f)arg2;

@optional
- (NSString *)titleForNumberExceedMaxForPVConvSelectContactsController:(WWPVConvSelectContactsController *)arg1;
- (long long)numOfMaxSelectedContactsForPVConvSelectContactsController:(WWPVConvSelectContactsController *)arg1;
- (void)didClickCancelButtonInPVConvSelectContactsController:(WWPVConvSelectContactsController *)arg1;
@end
