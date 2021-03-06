//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QMUICommonViewController.h"

@class QMUIImagePreviewView, UIColor, UIImageView, UIWindow;

@interface QMUIImagePreviewViewController : QMUICommonViewController
{
    _Bool _shouldStartWithFading;
    QMUIImagePreviewView *_imagePreviewView;
    UIColor *_backgroundColor;
    UIWindow *_previewWindow;
    UIImageView *_transitionImageView;
    UIColor *_backgroundColorTemporarily;
    struct CGRect _previewFromRect;
}

+ (id)appearance;
+ (void)initialize;
@property(retain, nonatomic) UIColor *backgroundColorTemporarily; // @synthesize backgroundColorTemporarily=_backgroundColorTemporarily;
@property(retain, nonatomic) UIImageView *transitionImageView; // @synthesize transitionImageView=_transitionImageView;
@property(nonatomic) struct CGRect previewFromRect; // @synthesize previewFromRect=_previewFromRect;
@property(nonatomic) _Bool shouldStartWithFading; // @synthesize shouldStartWithFading=_shouldStartWithFading;
@property(retain, nonatomic) UIWindow *previewWindow; // @synthesize previewWindow=_previewWindow;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)initSubviews;
- (void)viewDidLoad;
@property(readonly, nonatomic) QMUIImagePreviewView *imagePreviewView; // @synthesize imagePreviewView=_imagePreviewView;
- (void)didInitialized;
- (void)endPreviewWithFadingAnimation:(_Bool)arg1 orToRect:(struct CGRect)arg2;
- (void)startPreviewWithFadingAnimation:(_Bool)arg1 orFromRect:(struct CGRect)arg2;
- (void)removePreviewWindow;
- (void)initPreviewWindowIfNeeded;
- (void)endPreviewFading;
- (void)startPreviewFading;
- (void)endPreviewToRectInScreen:(struct CGRect)arg1;
- (void)startPreviewFromRectInScreen:(struct CGRect)arg1;

@end

