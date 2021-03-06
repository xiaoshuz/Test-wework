//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WANavLoadingViewController.h"

@class MMUILabel, UIActivityIndicatorView, UILabel, UIView;

@interface WWNavLoadingViewController : WANavLoadingViewController
{
    UIView *m_fakeNavBar;
    MMUILabel *m_fakeTitleLabel;
    UIActivityIndicatorView *_activityView;
    UILabel *_textLabel;
}

@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIActivityIndicatorView *activityView; // @synthesize activityView=_activityView;
- (void).cxx_destruct;
- (void)initLoadingView;
- (void)initContactTitle;
- (void)initLogoView;
- (void)startEnterAppAnimation;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initView;

@end

