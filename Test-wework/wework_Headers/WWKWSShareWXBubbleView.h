//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;
@protocol WWKWSShareWXBubbleViewDelegate;

@interface WWKWSShareWXBubbleView : UIView
{
    UIButton *containerImageBubble_;
    id <WWKWSShareWXBubbleViewDelegate> _delegate;
}

@property(nonatomic) __weak id <WWKWSShareWXBubbleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)OnshareClick;
- (void)p_onTap;
- (void)didMoveToSuperview;
- (id)init;

@end

