//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface WWKApiAppManager : NSObject
{
    NSMutableArray *_knownApplications;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableArray *knownApplications; // @synthesize knownApplications=_knownApplications;
- (void).cxx_destruct;
- (void)addKnownApp:(id)arg1;
- (_Bool)queryAppByAppId:(id)arg1 withAgentId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)queryAppByBundleId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)queryAppByAppId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)precacheKnownApplications;
- (void)dealloc;
- (id)init;

@end

