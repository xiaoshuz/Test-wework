//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIButton, UIImageView, UILabel, WWKHighlightBorderButton;

@interface WWKRelaxConnectController : UIViewController
{
    UIButton *_closeButton;
    UIImageView *_tipsView;
    UILabel *_tipsLabel;
    UILabel *_detailLabel;
    WWKHighlightBorderButton *_endButton;
    UIButton *_starContactButton;
}

@property(retain, nonatomic) UIButton *starContactButton; // @synthesize starContactButton=_starContactButton;
@property(retain, nonatomic) WWKHighlightBorderButton *endButton; // @synthesize endButton=_endButton;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIImageView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
- (void).cxx_destruct;
- (void)viewWillLayoutSubviews;
- (void)didClickEndButton;
- (void)didClickCloseButton;
- (void)didClickStarContactButton;
- (void)customBlueBorderButtonAppearance:(id)arg1 cornerRadius:(double)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)relaxDetailTitle;
- (void)viewDidLoad;

@end

