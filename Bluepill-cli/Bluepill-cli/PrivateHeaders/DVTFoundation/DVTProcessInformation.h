//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import Foundation;

@class NSString, NSURL;

@interface DVTProcessInformation : NSObject
{
    int _pid;
    NSString *_displayName;
    NSURL *_processURL;
    NSString *_preferredArchitecture;
}

@property(readonly) NSString *preferredArchitecture; // @synthesize preferredArchitecture=_preferredArchitecture;
@property(readonly) NSURL *processURL; // @synthesize processURL=_processURL;
@property(readonly) NSString *displayName; // @synthesize displayName=_displayName;
@property int pid; // @synthesize pid=_pid;
//- (void).cxx_destruct;
- (long long)displayNameCompare:(id)arg1;
- (void)setPreferredArchitecture:(NSString *)arg1;
- (void)setProcessURL:(NSURL *)arg1;
- (void)setDisplayName:(NSString *)arg1;
@property(readonly) BOOL isDebuggable;
- (id)initWithPID:(int)arg1;

@end

