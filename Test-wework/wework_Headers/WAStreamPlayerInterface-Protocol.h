//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, UIColor, UIImage;
@protocol MMVideoPlayerViewDelegate;

@protocol WAStreamPlayerInterface <NSObject>
@property(nonatomic) _Bool loop;
@property(nonatomic) _Bool enablePageGesture;
@property(nonatomic) _Bool needUpdateEvent;
@property(copy, nonatomic) NSString *userData;
@property(nonatomic) _Bool autoPlay;
@property(nonatomic) _Bool showDanmu;
@property(nonatomic) unsigned int videoId;
@property(nonatomic) _Bool customCache;
@property(nonatomic) __weak id <MMVideoPlayerViewDelegate> videoDelagate;
@property(nonatomic) long long orientation;
- (_Bool)isPlaying;
- (void)setMuted:(_Bool)arg1;
- (void)setPlayBackRate:(float)arg1;
- (long long)pauseCount;
- (void)pauseTemp:(_Bool)arg1;
- (void)pausePlayAndLoading;
- (UIImage *)getCurrentSnapshot;
- (void)setDuration:(double)arg1;
- (_Bool)isFullScreen;
- (void)setObjectFit:(long long)arg1;
- (void)setDanmuList:(NSArray *)arg1;
- (void)sendDanmu:(NSString *)arg1 color:(UIColor *)arg2;
- (unsigned int)getControlsMask;
- (void)setControls:(unsigned int)arg1;
- (void)disableScroll:(_Bool)arg1;
- (void)setVideoFrame:(struct CGRect)arg1;
- (void)enableFullScreen:(_Bool)arg1;
- (void)seek:(unsigned int)arg1;
- (void)stop;
- (void)pause;
- (void)play:(_Bool)arg1;
- (void)setVideoThumb:(NSString *)arg1;
- (void)setVideoPath:(NSString *)arg1 initialTime:(unsigned int)arg2;
- (id)initWithThumb:(NSString *)arg1 frame:(struct CGRect)arg2;
@end
