//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol ContactServiceObserverDelegate <NSObject>

@optional
- (void)onContactListUnradCountChanged:(const int *)arg1 oldCount:(int)arg2 newCount:(int)arg3;
- (void)OnApplyUnreadCountChanged:(int)arg1;
- (void)onSyncContactFinish:(const int *)arg1 changed:(_Bool)arg2;
- (void)onSyncContactStart:(const int *)arg1;
@end

