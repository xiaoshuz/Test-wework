//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UITableViewDelegate-Protocol.h"

@class QMUITableView, UIView;

@protocol QMUITableViewDelegate <UITableViewDelegate>

@optional
- (_Bool)tableView:(QMUITableView *)arg1 touchesShouldCancelInContentView:(UIView *)arg2;
- (_Bool)shouldShowSearchBarInTableView:(QMUITableView *)arg1;
@end

