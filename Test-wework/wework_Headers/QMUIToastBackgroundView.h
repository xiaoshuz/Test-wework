//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface QMUIToastBackgroundView : UIView
{
    _Bool _shouldBlurBackgroundView;
    UIColor *_styleColor;
    double _cornerRadius;
    UIView *_effectView;
}

+ (void)setDefaultAppearance;
+ (void)initialize;
@property(retain, nonatomic) UIView *effectView; // @synthesize effectView=_effectView;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UIColor *styleColor; // @synthesize styleColor=_styleColor;
@property(nonatomic) _Bool shouldBlurBackgroundView; // @synthesize shouldBlurBackgroundView=_shouldBlurBackgroundView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
