/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Message/_MFDAMSBasicConsumer.h>

#import "MFDASyncActionsConsumer.h"

@interface _MFDAMSUpdateConsumer : _MFDAMSBasicConsumer <MFDASyncActionsConsumer>
{
}

- (void)handleResponse:(id)arg1 error:(id)arg2;
- (void)commitSyncActions;
- (void)receiveSyncActions:(id)arg1;
- (BOOL)handleItems:(id)arg1;
- (void)drainMailbox;

@end
