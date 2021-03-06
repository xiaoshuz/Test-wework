//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVAudioRecorder.h>

@class NSFileHandle, NSTimer, NSURL;

@interface WWKSilkAudioRecorder : AVAudioRecorder
{
    NSURL *_silkURL;
    NSFileHandle *_wavFile;
    NSFileHandle *_silkFile;
    NSTimer *_streamTimer;
    struct AudioCoder *_encoder;
}

@property(nonatomic) struct AudioCoder *encoder; // @synthesize encoder=_encoder;
@property(retain, nonatomic) NSTimer *streamTimer; // @synthesize streamTimer=_streamTimer;
@property(retain, nonatomic) NSFileHandle *silkFile; // @synthesize silkFile=_silkFile;
@property(retain, nonatomic) NSFileHandle *wavFile; // @synthesize wavFile=_wavFile;
@property(copy, nonatomic) NSURL *silkURL; // @synthesize silkURL=_silkURL;
- (void).cxx_destruct;
- (void)streamEncoding;
- (void)endStreamEncoding;
- (void)beginStreamEncoding;
- (_Bool)deleteRecording;
- (void)stop;
- (void)pause;
- (_Bool)recordAtTime:(double)arg1 forDuration:(double)arg2;
- (_Bool)recordForDuration:(double)arg1;
- (_Bool)recordAtTime:(double)arg1;
- (_Bool)record;
- (void)dealloc;

@end

