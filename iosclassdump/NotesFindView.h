//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NotesFindInputView;

@interface NotesFindView : UIView
{
    NotesFindInputView *_inputAccessoryView;
}

- (void).cxx_destruct;
- (_Bool)canBecomeFirstResponder;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)inputAccessoryView;
- (id)searchBar;
- (void)setDoneButtonTarget:(id)arg1 action:(SEL)arg2;
- (void)setLabelText:(id)arg1;
- (void)setSegmentedControlEnabled:(_Bool)arg1;
- (void)setSegmentedControlTarget:(id)arg1 action:(SEL)arg2;

@end
