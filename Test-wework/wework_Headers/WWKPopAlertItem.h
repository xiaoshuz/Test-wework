//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface WWKPopAlertItem : NSObject
{
    NSString *_title;
    NSString *_highlightText;
    NSString *_imageName;
    CDUnknownBlockType _didClickItemHandler;
}

@property(copy, nonatomic) CDUnknownBlockType didClickItemHandler; // @synthesize didClickItemHandler=_didClickItemHandler;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(copy, nonatomic) NSString *highlightText; // @synthesize highlightText=_highlightText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

