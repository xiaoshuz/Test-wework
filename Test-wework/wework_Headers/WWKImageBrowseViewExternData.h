//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class WWFavoriteId, WWKMessage;

@interface WWKImageBrowseViewExternData : NSObject
{
    _Bool _isFavorite;
    WWFavoriteId *_favId;
    WWKMessage *_message;
    WWKMessage *_persistentMessage;
    long long _index;
}

@property(nonatomic) _Bool isFavorite; // @synthesize isFavorite=_isFavorite;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) WWKMessage *persistentMessage; // @synthesize persistentMessage=_persistentMessage;
@property(retain, nonatomic) WWKMessage *message; // @synthesize message=_message;
@property(retain, nonatomic) WWFavoriteId *favId; // @synthesize favId=_favId;
- (void).cxx_destruct;

@end
