//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIButton, UILabel, UISwitch, UIView, WWKManageNotifyPopController;

@interface WWKManageNotifyPopViewController : UIViewController
{
    _Bool _oriAutoNotifyValue;
    _Bool _showNotify;
    UIView *_popBgView;
    UILabel *_titleLabel;
    UILabel *_detailTitleLabel;
    UIButton *_inviteButton;
    UIButton *_closeButton;
    UIView *_separator;
    UIView *_notifyView;
    UILabel *_notifyTitleLabel;
    UILabel *_notifyDetailTitleLabel;
    UISwitch *_notifySwitch;
    WWKManageNotifyPopController *_popController;
    scoped_refptr_85c18dd7 _department;
}

@property(nonatomic) scoped_refptr_85c18dd7 department; // @synthesize department=_department;
@property(retain, nonatomic) WWKManageNotifyPopController *popController; // @synthesize popController=_popController;
@property(nonatomic) _Bool showNotify; // @synthesize showNotify=_showNotify;
@property(retain, nonatomic) UISwitch *notifySwitch; // @synthesize notifySwitch=_notifySwitch;
@property(retain, nonatomic) UILabel *notifyDetailTitleLabel; // @synthesize notifyDetailTitleLabel=_notifyDetailTitleLabel;
@property(retain, nonatomic) UILabel *notifyTitleLabel; // @synthesize notifyTitleLabel=_notifyTitleLabel;
@property(retain, nonatomic) UIView *notifyView; // @synthesize notifyView=_notifyView;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *inviteButton; // @synthesize inviteButton=_inviteButton;
@property(retain, nonatomic) UILabel *detailTitleLabel; // @synthesize detailTitleLabel=_detailTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *popBgView; // @synthesize popBgView=_popBgView;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)viewWillLayoutSubviews;
- (struct CGSize)preferredContentSize;
- (void)updateNotifyStateIfNeeded;
- (void)onClickBackgroundView;
- (void)onClickInviteButton;
- (void)onClickCloseButton;
- (void)viewDidLoad;

@end
