/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iTunesStoreUI/SUTableDataSource.h>

@class NSArray, SUTextViewCell;

@interface SUConcernListDataSource : SUTableDataSource
{
    NSArray *_concerns;
    int _selectedConcernIndex;
    SUTextViewCell *_textViewCell;
}

@property(nonatomic) int selectedConcernIndex; // @synthesize selectedConcernIndex=_selectedConcernIndex;
@property(retain, nonatomic) NSArray *concerns; // @synthesize concerns=_concerns;
- (id)_titleCellForIndexPath:(id)arg1;
- (int)tableViewStyle;
- (int)numberOfRowsInSection:(int)arg1;
- (int)numberOfSections;
- (float)cellHeightForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
@property(readonly, nonatomic) SUTextViewCell *textViewCell; // @synthesize textViewCell=_textViewCell;
- (void)dealloc;
- (id)init;

@end
