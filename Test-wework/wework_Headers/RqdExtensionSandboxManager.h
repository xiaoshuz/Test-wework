//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface RqdExtensionSandboxManager : NSObject
{
    NSString *_applicationGroupIdentifier;
    unsigned long long _savedExceptionsCount;
}

+ (id)sharedManager;
@property(nonatomic) unsigned long long savedExceptionsCount; // @synthesize savedExceptionsCount=_savedExceptionsCount;
@property(copy, nonatomic) NSString *applicationGroupIdentifier; // @synthesize applicationGroupIdentifier=_applicationGroupIdentifier;
- (void).cxx_destruct;
- (id)exceptionFromFileURL:(id)arg1;
- (void)deleteFiles:(id)arg1;
- (_Bool)deleteAllExceptionsInAppGroup:(_Bool)arg1;
- (id)allExceptionFileURLFromAppGroup:(_Bool)arg1;
- (_Bool)writeException:(id)arg1;
- (id)filePathFromAppGroup:(_Bool)arg1;
- (id)appGroupDirectoryPath;
- (id)documentDirectoryPath;
- (id)fullTimeFileNameStringWith:(double)arg1;
- (_Bool)isAppGroupAvilable;
- (id)init;

@end

