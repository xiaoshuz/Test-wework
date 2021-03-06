//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "QMUITextViewDelegate-Protocol.h"

@class NSString, QMUIButton, QMUILabel, QMUITextView, QMUIToastBackgroundView, UILabel, UIScrollView, UIView, WWYunPanFileFooterConfig;
@protocol WWKYunPanInputToolBarDelegate;

@interface WWKYunPanInputToolBar : UIControl <QMUITextViewDelegate>
{
    _Bool _shouldManageKeyboardAndPanelEventAutomatically;
    _Bool _isKeyboardShowing;
    id <WWKYunPanInputToolBarDelegate> _delegate;
    QMUITextView *_textView;
    double _defaultHeight;
    double _maximumInputAreaHeight;
    double _minimumTextViewHeightInputting;
    double _bottomBarHeight;
    NSString *_placeHolderName;
    double _keyboardHeight;
    double _emotionPanelHeight;
    WWYunPanFileFooterConfig *_mConfig;
    CDUnknownBlockType _mSpaceHandler;
    CDUnknownBlockType _mFeedHandler;
    UIView *_mSeperateLineTop;
    QMUILabel *_mDescrInfoLabel;
    UIScrollView *_mDescContainerView;
    UIView *_mSeperateLine;
    UIView *_mBottomContainer;
    QMUIButton *_mOwnerBtn;
    QMUIButton *_mCommentBtn;
    UILabel *_mFeedCntLabel;
    QMUIToastBackgroundView *_mBackBlurView;
    UIControl *_mControl;
    UIView *_mWhiteView;
    struct UIEdgeInsets _padding;
    struct UIEdgeInsets _textViewMargins;
}

@property(retain, nonatomic) UIView *mWhiteView; // @synthesize mWhiteView=_mWhiteView;
@property(retain, nonatomic) UIControl *mControl; // @synthesize mControl=_mControl;
@property(retain, nonatomic) QMUIToastBackgroundView *mBackBlurView; // @synthesize mBackBlurView=_mBackBlurView;
@property(retain, nonatomic) UILabel *mFeedCntLabel; // @synthesize mFeedCntLabel=_mFeedCntLabel;
@property(retain, nonatomic) QMUIButton *mCommentBtn; // @synthesize mCommentBtn=_mCommentBtn;
@property(retain, nonatomic) QMUIButton *mOwnerBtn; // @synthesize mOwnerBtn=_mOwnerBtn;
@property(retain, nonatomic) UIView *mBottomContainer; // @synthesize mBottomContainer=_mBottomContainer;
@property(retain, nonatomic) UIView *mSeperateLine; // @synthesize mSeperateLine=_mSeperateLine;
@property(retain, nonatomic) UIScrollView *mDescContainerView; // @synthesize mDescContainerView=_mDescContainerView;
@property(retain, nonatomic) QMUILabel *mDescrInfoLabel; // @synthesize mDescrInfoLabel=_mDescrInfoLabel;
@property(retain, nonatomic) UIView *mSeperateLineTop; // @synthesize mSeperateLineTop=_mSeperateLineTop;
@property(copy, nonatomic) CDUnknownBlockType mFeedHandler; // @synthesize mFeedHandler=_mFeedHandler;
@property(copy, nonatomic) CDUnknownBlockType mSpaceHandler; // @synthesize mSpaceHandler=_mSpaceHandler;
@property(retain, nonatomic) WWYunPanFileFooterConfig *mConfig; // @synthesize mConfig=_mConfig;
@property(nonatomic) double emotionPanelHeight; // @synthesize emotionPanelHeight=_emotionPanelHeight;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(nonatomic) _Bool isKeyboardShowing; // @synthesize isKeyboardShowing=_isKeyboardShowing;
@property(copy, nonatomic) NSString *placeHolderName; // @synthesize placeHolderName=_placeHolderName;
@property(nonatomic) double bottomBarHeight; // @synthesize bottomBarHeight=_bottomBarHeight;
@property(nonatomic) double minimumTextViewHeightInputting; // @synthesize minimumTextViewHeightInputting=_minimumTextViewHeightInputting;
@property(nonatomic) struct UIEdgeInsets textViewMargins; // @synthesize textViewMargins=_textViewMargins;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) double maximumInputAreaHeight; // @synthesize maximumInputAreaHeight=_maximumInputAreaHeight;
@property(nonatomic) double defaultHeight; // @synthesize defaultHeight=_defaultHeight;
@property(readonly, nonatomic) QMUITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) _Bool shouldManageKeyboardAndPanelEventAutomatically; // @synthesize shouldManageKeyboardAndPanelEventAutomatically=_shouldManageKeyboardAndPanelEventAutomatically;
@property(nonatomic) __weak id <WWKYunPanInputToolBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onTap:(id)arg1;
- (void)removeTapGesture;
- (void)addTapGesture;
- (void)onFinishEditing:(id)arg1;
- (void)showTextView:(_Bool)arg1;
- (void)onCommentBtnClicked:(id)arg1;
- (void)onEditFileDescrClicked:(id)arg1;
- (id)filterAndDropMoreNewLine:(id)arg1;
- (void)layoutFooterSubviews;
- (struct CGSize)sizeThatFooterFits:(struct CGSize)arg1;
- (void)renderView;
- (void)setUpUiElements;
- (void)updateFooterConfig:(id)arg1;
- (void)updateFileDescrName:(id)arg1;
- (void)updateFooterStyle:(long long)arg1;
- (id)initWithFooterConfig:(id)arg1 fileSpaceClickHandler:(CDUnknownBlockType)arg2 feedHandler:(CDUnknownBlockType)arg3;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)textViewShouldReturn:(id)arg1;
- (void)textView:(id)arg1 newHeightAfterTextChanged:(double)arg2;
- (void)handleKeyboardWillHide:(id)arg1;
- (void)handleKeyboardWillShow:(id)arg1;
- (id)updateTextViewPlaceholder;
- (void)resignFirstResponderAnimated:(_Bool)arg1;
- (_Bool)canSendText;
- (_Bool)isInputting;
- (_Bool)isSubviewShowing:(id)arg1;
- (void)notifyOriginYDidChange;
- (double)heightForInputAreaIfInSelfHeight:(double)arg1;
- (double)keyboardOrPanelHeight;
- (void)adjustLayoutInSuperviewAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)adjustLayoutInSuperview;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

