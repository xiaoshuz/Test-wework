//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "ContactServiceObserverDelegate-Protocol.h"

@class NSMutableArray, NSString, UIActivityIndicatorView, UISearchDisplayController, UIView, WWFavoriteEmptyView, WWKRecommendSearchController, WWKSearchBar;

@interface WWKContactListController : UITableViewController <ContactServiceObserverDelegate>
{
    unsigned long long _contactGroupListType;
    int _contactType;
    NSMutableArray *_contactGroupList;
    NSMutableArray *_contactList;
    NSMutableArray *_indexTitles;
    struct unique_ptr<ContactServiceProxyObserver, std::__1::default_delete<ContactServiceProxyObserver>> _observer;
    NSString *_searchKeyword;
    UIActivityIndicatorView *_activityView;
    _Bool _waitSyncingResult;
    _Bool _displayUnreadCountUser;
    _Bool _isReloadingData;
    _Bool _shouldReloadDataAfterSearching;
    WWKSearchBar *_searchBar;
    UISearchDisplayController *_searchDisplayController;
    WWKRecommendSearchController *_searchController;
    WWFavoriteEmptyView *_emptyView;
    UIView *_headerCoverView;
}

@property(retain, nonatomic) UIView *headerCoverView; // @synthesize headerCoverView=_headerCoverView;
@property(retain, nonatomic) WWFavoriteEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) WWKRecommendSearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) UISearchDisplayController *searchDisplayController; // @synthesize searchDisplayController=_searchDisplayController;
@property(retain, nonatomic) WWKSearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onSyncContactFinish:(const int *)arg1 changed:(_Bool)arg2;
- (id)contactWithIndexPath:(id)arg1;
- (_Bool)isTableViewLastRow:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)wwk_tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (unsigned long long)contactSourceWithContactListType:(unsigned long long)arg1;
- (void)initDataSource;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)checkShowEmptyUI;
- (void)addContactDidClick:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithContactListType:(unsigned long long)arg1 displayUnreadUser:(_Bool)arg2;
- (id)initWithContactListType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

