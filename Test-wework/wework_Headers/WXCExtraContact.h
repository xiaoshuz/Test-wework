//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXCContactAbstract.h"

@class QQABRecordPhone;

@interface WXCExtraContact : WXCContactAbstract
{
    _Bool _showTel;
    _Bool _showHeadImg;
    _Bool _hidePhoneLocationInfo;
    _Bool _sepLineStartFromTitle;
    _Bool _isRecent;
    QQABRecordPhone *_voipPhone;
}

@property(nonatomic) _Bool isRecent; // @synthesize isRecent=_isRecent;
@property(nonatomic) _Bool sepLineStartFromTitle; // @synthesize sepLineStartFromTitle=_sepLineStartFromTitle;
@property(nonatomic) _Bool hidePhoneLocationInfo; // @synthesize hidePhoneLocationInfo=_hidePhoneLocationInfo;
@property(nonatomic) _Bool showHeadImg; // @synthesize showHeadImg=_showHeadImg;
@property(nonatomic) _Bool showTel; // @synthesize showTel=_showTel;
@property(retain, nonatomic) QQABRecordPhone *voipPhone; // @synthesize voipPhone=_voipPhone;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithExtraContactAbstract:(id)arg1;
- (id)initWithWXCContactAbstract:(id)arg1 withPhone:(id)arg2;

@end

