//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableDictionary, NSTimer, WWMarkupLineStyle;
@protocol WWMultiMarkupViewDelegate;

@interface WWMultiMarkupView : UIView
{
    _Bool _mHasMouseDown;
    WWMarkupLineStyle *_linstyle;
    NSTimer *_timer;
    double _lastMouseDrag;
    NSMutableDictionary *_dicLineStyles;
    NSMutableDictionary *_dicResetTimers;
    _Bool _isSelfShare;
    _Bool _isInEditState;
    id <WWMultiMarkupViewDelegate> _mDelegate;
    UIView *_weakNxtResponder;
}

@property(nonatomic) _Bool isInEditState; // @synthesize isInEditState=_isInEditState;
@property(nonatomic) __weak UIView *weakNxtResponder; // @synthesize weakNxtResponder=_weakNxtResponder;
@property(nonatomic) _Bool isSelfShare; // @synthesize isSelfShare=_isSelfShare;
@property(nonatomic) __weak id <WWMultiMarkupViewDelegate> mDelegate; // @synthesize mDelegate=_mDelegate;
- (void).cxx_destruct;
- (void)onTimer:(id)arg1;
- (void)resetTimerForUUID:(int)arg1;
- (void)resetTimer;
- (void)markupLineStyleAttributeChanged;
- (void)drawRect:(struct CGRect)arg1;
- (void)p_touchUP:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)resetNewLineForUUID:(int)arg1;
- (void)resetNewLineForPeers;
- (void)resetNewLine;
- (void)setMarkupStyleObjectPeer:(id)arg1 ForUUID:(int)arg2;
- (void)setMarkupStyleObject:(id)arg1;
- (void)setElementAlpha:(double)arg1;
- (void)dealloc;
- (void)p_doInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

