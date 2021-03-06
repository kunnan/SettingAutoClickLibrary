//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ICBrowseAttachmentsBaseCell.h"

@class ICAttachmentBrickView, UIView;

@interface ICBrowseAttachmentsBrickCell : ICBrowseAttachmentsBaseCell
{
    ICAttachmentBrickView *_brick;
    UIView *_separatorView;
}

+ (Class)brickClass;
- (void).cxx_destruct;
@property(retain, nonatomic) ICAttachmentBrickView *brick; // @synthesize brick=_brick;
- (void)contentSizeCategoryDidChange;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isShowUnderline;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
- (void)setAttachment:(id)arg1;
@property(nonatomic) _Bool showUnderline; // @dynamic showUnderline;

@end

