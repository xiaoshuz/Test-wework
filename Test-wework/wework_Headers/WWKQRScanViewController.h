//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "WWKAttendanceWiFiInfoTableViewControllerDelegate-Protocol.h"
#import "WWKLoginConnectViewControllerDelegate-Protocol.h"
#import "WWOCRProcBaseDelegate-Protocol.h"

@class AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoDataOutput, CADisplayLink, CALayer, CAShapeLayer, NSString, UIButton, UIImageView, UILabel, WWCMROCRProcessor;
@protocol WWKQRScanViewControllerDelegate;

@interface WWKQRScanViewController : UIViewController <WWOCRProcBaseDelegate, AVCaptureVideoDataOutputSampleBufferDelegate, WWKLoginConnectViewControllerDelegate, UIImagePickerControllerDelegate, WWKAttendanceWiFiInfoTableViewControllerDelegate>
{
    AVCaptureSession *session;
    AVCaptureDeviceInput *input;
    AVCaptureVideoDataOutput *output;
    CADisplayLink *displayLink;
    CAShapeLayer *maskLayer;
    CALayer *scopeLayer;
    UILabel *hintLabel;
    UILabel *resultLabel;
    UIImageView *scanlineView;
    UIImageView *tipImageView;
    UILabel *tipLabel;
    UILabel *tipDetailLabel;
    UIButton *bottomButton;
    struct CGSize sessionPresetSize;
    double scanlineTime;
    _Bool _tryingQBar;
    unique_ptr_16662cd1 scanImage;
    unsigned long long scanImageBufferSize;
    struct CGRect scanRect;
    struct QBar *qbarLib;
    unsigned int _scanSkip;
    _Bool slientPopWhenDisappear;
    _Bool originalTranslucent;
    _Bool _QRscaned;
    _Bool noNeedResetNavigationBar;
    id <WWKQRScanViewControllerDelegate> _delegate;
    unsigned long long _mode;
    unsigned long long _scanType;
    CDUnknownBlockType _handler;
    WWCMROCRProcessor *_ocrProcessor;
}

+ (void)load;
@property(retain, nonatomic) WWCMROCRProcessor *ocrProcessor; // @synthesize ocrProcessor=_ocrProcessor;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) unsigned long long scanType; // @synthesize scanType=_scanType;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <WWKQRScanViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGAffineTransform)rotaOrientation;
- (long long)interfaceOrientationToVideoOrientation:(long long)arg1;
- (void)checkAndGotoLiveDetect:(id)arg1;
- (id)checkLiveDetectParamVaild:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)showMyQrInfo;
- (void)onPvMergeWillOpen:(id)arg1;
- (void)loginConnectViewController:(id)arg1 willDismissWithResult:(unsigned long long)arg2;
- (void)attendanceWifiInfoDidCancel;
- (void)showLoginConnectView;
- (void)doLoginConnect:(id)arg1;
- (void)clearLabelContent;
- (id)getNSStringFromUTF8Bytes:(const char *)arg1 LENGTH:(int)arg2;
- (_Bool)preHandleHardCodeQRCode:(id)arg1;
- (void)resumeSession;
- (_Bool)processScanResult:(id)arg1 type:(unsigned long long)arg2;
- (void)interceptScanResultWithQQAlert;
- (void)interceptScanResultWithWeixinScanAlertTitle:(id)arg1;
- (_Bool)interceptScanResult:(id)arg1 type:(unsigned long long)arg2;
- (unsigned long long)p_getFirstAvailableType:(id)arg1;
- (void)p_sampleBufferForVCard:(struct opaqueCMSampleBuffer *)arg1;
- (void)p_sampleBufferForQRCode:(struct opaqueCMSampleBuffer *)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)viewWillLayoutSubviews;
- (void)setRectOfInterest;
- (void)setRectOfInterestBAK;
- (void)repositionScanline;
- (void)repositionMaskLayer;
- (void)resetNavigationBar;
- (void)rightItemDidClick:(id)arg1;
- (void)closeDidClick:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initQbar;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;
- (void)processor:(id)arg1 wantTurnTorchLightOn:(_Bool)arg2 withCurrentBrightnessValue:(double)arg3;
- (void)processor:(id)arg1 analysisDebugWithImg1:(id)arg2 img2:(id)arg3 img3:(id)arg4 img4:(id)arg5;
- (void)processor:(id)arg1 scanUICoverProgressWithCorners:(id)arg2 imageSize:(struct CGSize)arg3 shouldUpdateCover:(_Bool)arg4 shouldClearCover:(_Bool)arg5;
- (void)processor:(id)arg1 scanPhase:(unsigned long long)arg2;
- (void)vcard_ocrScanPause:(_Bool)arg1;
- (void)vcard_processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)vcard_updateUIWithCameraRenderView:(id)arg1;
- (void)vcard_initUI;
- (void)vcard_initLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

