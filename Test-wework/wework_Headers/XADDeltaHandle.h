//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XADByteStreamHandle.h"

@interface XADDeltaHandle : XADByteStreamHandle
{
    unsigned char deltabuffer[256];
    int distance;
}

- (unsigned char)produceByteAtOffset:(long long)arg1;
- (void)resetByteStream;
- (id)initWithHandle:(id)arg1 length:(long long)arg2 propertyData:(id)arg3;
- (id)initWithHandle:(id)arg1 propertyData:(id)arg2;
- (id)initWithHandle:(id)arg1 length:(long long)arg2 deltaDistance:(int)arg3;
- (id)initWithHandle:(id)arg1 deltaDistance:(int)arg2;
- (id)initWithHandle:(id)arg1 length:(long long)arg2;
- (id)initWithHandle:(id)arg1;

@end

