//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImageView, UILabel;

@interface WWKReadAnnouncementHeaderView : UIView
{
    NSString *_title;
    NSString *_sender;
    unsigned long long _time;
    long long _attachCount;
    UILabel *_titleLabel;
    UIButton *_senderButton;
    UILabel *_timeLabel;
    UIImageView *_attachImageView;
    UILabel *_attachCountLabel;
    UIView *_seperator;
}

@property(retain, nonatomic) UIView *seperator; // @synthesize seperator=_seperator;
@property(retain, nonatomic) UILabel *attachCountLabel; // @synthesize attachCountLabel=_attachCountLabel;
@property(retain, nonatomic) UIImageView *attachImageView; // @synthesize attachImageView=_attachImageView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIButton *senderButton; // @synthesize senderButton=_senderButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) long long attachCount; // @synthesize attachCount=_attachCount;
@property(nonatomic) unsigned long long time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *sender; // @synthesize sender=_sender;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)p_updateTime;
- (void)p_updateSender;
- (void)p_updateTitle;
- (void)p_updateUI;
- (struct CGSize)p_layoutSubViewsWithLimitWidth:(double)arg1;
- (double)getHeightWithLimitWidth:(double)arg1;
- (void)layoutSubviews;
- (void)initSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
