//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIView, WWKKeyedEdgeInset;

@interface WWKKeyedEdgeInsets : NSObject
{
    WWKKeyedEdgeInset *_top;
    WWKKeyedEdgeInset *_left;
    WWKKeyedEdgeInset *_right;
    WWKKeyedEdgeInset *_bottom;
    UIView *_view;
}

@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(retain, nonatomic) WWKKeyedEdgeInset *bottom; // @synthesize bottom=_bottom;
@property(retain, nonatomic) WWKKeyedEdgeInset *right; // @synthesize right=_right;
@property(retain, nonatomic) WWKKeyedEdgeInset *left; // @synthesize left=_left;
@property(retain, nonatomic) WWKKeyedEdgeInset *top; // @synthesize top=_top;
- (void).cxx_destruct;
- (void)layoutViews;
- (id)initWithView:(id)arg1;

@end

