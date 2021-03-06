//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIButton, UIImageView, UILabel;

@interface WWKMobileViewController : UIViewController
{
    id _context;
    UILabel *_contentLabel;
    UILabel *_tipsLabel;
    UIButton *_upDatePhoneBtn;
    UIImageView *_iconView;
    struct PhoneItem _phoneItem;
}

@property(nonatomic) __weak UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) struct PhoneItem phoneItem; // @synthesize phoneItem=_phoneItem;
@property(nonatomic) __weak UIButton *upDatePhoneBtn; // @synthesize upDatePhoneBtn=_upDatePhoneBtn;
@property(nonatomic) __weak UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(nonatomic) __weak UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(nonatomic) __weak id context; // @synthesize context=_context;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)upDatePhone:(id)arg1;
- (void)setUpSubViews;
- (void)viewDidLoad;
- (id)initWithPhoneItem:(struct PhoneItem)arg1;

@end

