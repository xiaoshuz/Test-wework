//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface _wwBioassayStepElementView : UIView
{
    UIImageView *_stepImgView;
    UILabel *_infoLabel;
}

@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UIImageView *stepImgView; // @synthesize stepImgView=_stepImgView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)p_init;
- (struct CGSize)p_doLayout;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateBioIconState:(long long)arg1;
- (void)updateBioText:(id)arg1;
- (struct CGRect)stepImageFrame;
- (id)initWithFrame:(struct CGRect)arg1;

@end
