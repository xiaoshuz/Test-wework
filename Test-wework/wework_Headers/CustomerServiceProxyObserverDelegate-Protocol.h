//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol CustomerServiceProxyObserverDelegate <NSObject>

@optional
- (void)onSyncStateChanged:(int)arg1 withOldState:(int)arg2;
- (void)onDeleteCustomerInfoList:(const vector_6dd06919 *)arg1;
- (void)onAddCustomerInfoList:(const vector_6dd06919 *)arg1;
@end

