/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol MSDeleter <NSObject>
@property(nonatomic) id <MSDeleterDelegate> delegate;
- (void)performOutstandingActivities;
- (void)stop;
- (void)abort;
- (void)deleteAssetCollections:(id)arg1;
@end
