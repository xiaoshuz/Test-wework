//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSMutableDictionary, UILabel;

@interface WWKMoreStyleButton : UIControl
{
    NSMutableDictionary *_colorForState;
    double _maxWidth;
    UILabel *_titleLabel;
    UILabel *_moreLabel;
}

@property(retain, nonatomic) UILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setButtonTitleColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setButtonTitleFont:(id)arg1;
- (void)setButtonTitle:(id)arg1 withMoreText:(id)arg2;
- (void)setMaxWidth:(double)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)initViews;
- (void)updateUI;
- (void)sizeToFit:(double)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

