//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface CLToken : NSObject
{
    _Bool _valid;
    NSString *_displayText;
    NSObject *_context;
}

@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
@property(retain, nonatomic) NSObject *context; // @synthesize context=_context;
@property(copy, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDisplayText:(id)arg1 context:(id)arg2;

@end

