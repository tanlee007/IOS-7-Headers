/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class UIKeyboardCandidateBarSegmentControl;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidatePageControl : UIView
{
    UIKeyboardCandidateBarSegmentControl *_pageControl;
    BOOL _usingVerticalArrows;
}

- (void)layoutSubviews;
- (void)updatePageControlWithStatus:(BOOL)arg1 rightControlButtonEnabled:(BOOL)arg2;
- (void)_changePage:(id)arg1;
- (void)setUseVerticalArrows:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
