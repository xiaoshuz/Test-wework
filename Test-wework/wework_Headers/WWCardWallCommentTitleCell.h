//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWCardWallCell.h"

@class UIButton, UILabel, UIView;

@interface WWCardWallCommentTitleCell : WWCardWallCell
{
    UIView *_headView;
    UILabel *_commentTitleLabel;
    UIButton *_addCommentButton;
}

@property(retain, nonatomic) UIButton *addCommentButton; // @synthesize addCommentButton=_addCommentButton;
@property(retain, nonatomic) UILabel *commentTitleLabel; // @synthesize commentTitleLabel=_commentTitleLabel;
@property(retain, nonatomic) UIView *headView; // @synthesize headView=_headView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)initSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
