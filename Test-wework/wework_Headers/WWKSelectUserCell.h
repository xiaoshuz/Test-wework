//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImageView, UILabel, WWKAvatarImageView;

@interface WWKSelectUserCell : UITableViewCell
{
    scoped_refptr_e1f85e48 user_;
    _Bool _userSelected;
    _Bool _userEnabled;
    UIButton *_selectButton;
    WWKAvatarImageView *_head;
    UILabel *_name;
    UILabel *_job;
    UIImageView *_headMask;
    UIImageView *_statusImageView;
    struct UIOffset _statusImageOffset;
}

@property(nonatomic) struct UIOffset statusImageOffset; // @synthesize statusImageOffset=_statusImageOffset;
@property(retain, nonatomic) UIImageView *statusImageView; // @synthesize statusImageView=_statusImageView;
@property(retain, nonatomic) UIImageView *headMask; // @synthesize headMask=_headMask;
@property(retain, nonatomic) UILabel *job; // @synthesize job=_job;
@property(retain, nonatomic) UILabel *name; // @synthesize name=_name;
@property(retain, nonatomic) WWKAvatarImageView *head; // @synthesize head=_head;
@property(retain, nonatomic) UIButton *selectButton; // @synthesize selectButton=_selectButton;
@property(nonatomic, getter=isUserEnabled) _Bool userEnabled; // @synthesize userEnabled=_userEnabled;
@property(nonatomic, getter=isUserSelected) _Bool userSelected; // @synthesize userSelected=_userSelected;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateOnlineStatus;
- (_Bool)isOnline;
- (void)selectButtonDidClick:(id)arg1;
- (void)layoutSubviews;
- (void)setUser:(scoped_refptr_e1f85e48)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

