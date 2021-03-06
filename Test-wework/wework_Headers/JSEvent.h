//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol JSEventDelegate;

@interface JSEvent : NSObject
{
    id <JSEventDelegate> _delegate;
    NSString *_funcName;
    NSString *_callbackID;
    NSString *_className;
    NSMutableDictionary *_params;
    NSMutableDictionary *_cacheDatas;
}

@property(retain, nonatomic) NSMutableDictionary *cacheDatas; // @synthesize cacheDatas=_cacheDatas;
@property(readonly, nonatomic) NSMutableDictionary *params; // @synthesize params=_params;
@property(copy, nonatomic) NSString *className; // @synthesize className=_className;
@property(retain, nonatomic) NSString *callbackID; // @synthesize callbackID=_callbackID;
@property(retain, nonatomic) NSString *funcName; // @synthesize funcName=_funcName;
@property(nonatomic) __weak id <JSEventDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)webviewController;
- (id)endWithError:(id)arg1 andDescription:(id)arg2;
- (id)endWithError:(id)arg1;
- (id)endWithResutl:(id)arg1;
- (id)endWithError:(id)arg1 andErrMsg:(id)arg2;
- (id)endWithErrorResutl:(id)arg1;
- (id)endWithCancelResutl:(id)arg1;
- (id)endWithSuccessResutl:(id)arg1;
- (id)initWithParameters:(id)arg1;

@end

