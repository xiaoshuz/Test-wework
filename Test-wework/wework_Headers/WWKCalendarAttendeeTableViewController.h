//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@interface WWKCalendarAttendeeTableViewController : UITableViewController
{
    vector_7875da74 attendees_;
    struct Calendar_Organizer organizer_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)numberOfRowInSection:(long long)arg1;
- (id)initWithAttendee:(const vector_7875da74 *)arg1 Organizer:(const struct Calendar_Organizer *)arg2;

@end

