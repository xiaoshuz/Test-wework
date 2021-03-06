//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView;
@protocol WWKAppointOperViewDelegate;

@interface WWKAppointOperView : UIView
{
    scoped_refptr_dc93df68 _eatFoodTimeline;
    int _type;
    id <WWKAppointOperViewDelegate> _delegate;
    UIImageView *_bkgImageView;
    UIView *_clipView;
    UIButton *_operButton;
}

@property(retain, nonatomic) UIButton *operButton; // @synthesize operButton=_operButton;
@property(retain, nonatomic) UIView *clipView; // @synthesize clipView=_clipView;
@property(retain, nonatomic) UIImageView *bkgImageView; // @synthesize bkgImageView=_bkgImageView;
@property(nonatomic) __weak id <WWKAppointOperViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int type; // @synthesize type=_type;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onOperate:(id)arg1;
- (void)hide;
- (void)showWithItem:(scoped_refptr_dc93df68)arg1 tipPoint:(struct CGPoint)arg2;
- (void)p_initSubViews;
- (id)init;

@end

