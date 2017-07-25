//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ICFreeTransformableViewController.h"

#import "UIDocumentInteractionControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"

@class ICDismissToolsGestureRecongizer, ICDrawingLightView, ICDrawingScrollView, ICDrawingStandinGestureRecognizer, ICDrawingToolsView, ICDrawingView, ICFreeTransformGestureRecognizer, ICNoteEditorViewController, ICSelectorDelayer, NSMutableArray, NSString, UIActivityIndicatorView, UIBarButtonItem, UIButton, UIView;

@interface ICDrawingViewController : ICFreeTransformableViewController <UIGestureRecognizerDelegate, UIDocumentInteractionControllerDelegate, UIScrollViewDelegate>
{
    _Bool _editable;
    _Bool _toolsHidden;
    _Bool _pinchingFromSmallestState;
    _Bool _pinchValid;
    _Bool _didDismissViewController;
    _Bool _navigationBarHidden;
    _Bool _scrollViewScrollingToRect;
    _Bool _toolsHiddenForScrolling;
    _Bool _viewHasAppeared;
    UIBarButtonItem *_goToNoteButton;
    ICFreeTransformGestureRecognizer *_pinchGestureRecognizer;
    ICDrawingToolsView *_toolsView;
    UIBarButtonItem *_undoButton;
    UIBarButtonItem *_redoButton;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_fixedSpaceButtonRight;
    UIBarButtonItem *_fixedSpaceButtonLeft;
    UIBarButtonItem *_fixedSpaceButtonUndoRedo;
    UIBarButtonItem *_eraseAllButton;
    ICSelectorDelayer *_updateUndoRedoButtonsDelayer;
    UIBarButtonItem *_rotateButton;
    UIBarButtonItem *_sharrowButton;
    UIBarButtonItem *_loadingView;
    UIActivityIndicatorView *_activityView;
    UIBarButtonItem *_addDrawingButton;
    UIButton *_showToolsButton;
    ICSelectorDelayer *_temporaryShowHiddenUISelectorDelayer;
    ICDrawingScrollView *_scrollView;
    UIView *_gapView;
    ICDrawingView *_drawingView;
    long long _drawingViewIndex;
    NSMutableArray *_attachmentInfos;
    ICNoteEditorViewController *_editorController;
    ICDrawingStandinGestureRecognizer *_drawingStandinGestureRecognizer;
    ICDismissToolsGestureRecongizer *_hideToolGestureRecognizer;
    NSMutableArray *_attachmentsDeletedWhilstScrolling;
    struct CGAffineTransform _pinchStartAffineTransform;
}

+ (id)createTemporaryInlineViewInParent:(id)arg1 forAttachment:(id)arg2;
- (void).cxx_destruct;
- (void)_temporaryShowHiddenUI;
- (_Bool)accessibilityPerformEscape;
- (_Bool)accessibilityScroll:(long long)arg1;
@property(retain, nonatomic) UIActivityIndicatorView *activityView; // @synthesize activityView=_activityView;
- (void)addDrawingAction:(id)arg1;
@property(retain, nonatomic) UIBarButtonItem *addDrawingButton; // @synthesize addDrawingButton=_addDrawingButton;
- (void)addDrawingView;
- (void)animateToolsIn;
- (id)attachmentInfoForAttachment:(id)arg1 index:(unsigned long long *)arg2;
@property(retain, nonatomic) NSMutableArray *attachmentInfos; // @synthesize attachmentInfos=_attachmentInfos;
- (void)attachmentWillBeDeletedNotification:(id)arg1;
@property(retain, nonatomic) NSMutableArray *attachmentsDeletedWhilstScrolling; // @synthesize attachmentsDeletedWhilstScrolling=_attachmentsDeletedWhilstScrolling;
- (_Bool)canAddDrawing;
- (_Bool)canScroll;
- (void)close;
- (_Bool)contentHidden;
- (void)cryptoWillClearCachedKeys;
- (id)currentAttachmentInfo;
- (struct CGRect)currentFrame;
@property(readonly, nonatomic) long long currentIndex;
- (void)dealloc;
- (void)deleteAttachment:(id)arg1;
- (void)didBecomeActive;
@property(nonatomic) _Bool didDismissViewController; // @synthesize didDismissViewController=_didDismissViewController;
- (void)didReceiveMemoryWarning;
- (void)disableUndoRedoButtons;
- (id)dismissButtonImage;
- (void)doneAction:(id)arg1;
@property(retain, nonatomic) UIBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;
- (void)drawingBoundsUpdated;
- (struct CGPoint)drawingCenterOffsetForSize:(struct CGSize)arg1;
@property(readonly, nonatomic) unsigned long long drawingCount;
@property(retain, nonatomic) ICDrawingStandinGestureRecognizer *drawingStandinGestureRecognizer; // @synthesize drawingStandinGestureRecognizer=_drawingStandinGestureRecognizer;
@property(retain, nonatomic) ICDrawingView *drawingView; // @synthesize drawingView=_drawingView;
@property(nonatomic) long long drawingViewIndex; // @synthesize drawingViewIndex=_drawingViewIndex;
- (void)drawingViewIsReady:(id)arg1;
- (void)drawingViewWillAppear;
@property(retain, nonatomic) ICNoteEditorViewController *editorController; // @synthesize editorController=_editorController;
- (void)endDrawingCallEndBlockIfNotInserting:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (struct CGAffineTransform)endTransform:(id)arg1;
- (void)enterBackground;
- (void)eraseAllAction:(id)arg1;
@property(retain, nonatomic) UIBarButtonItem *eraseAllButton; // @synthesize eraseAllButton=_eraseAllButton;
@property(retain, nonatomic) UIBarButtonItem *fixedSpaceButtonLeft; // @synthesize fixedSpaceButtonLeft=_fixedSpaceButtonLeft;
@property(retain, nonatomic) UIBarButtonItem *fixedSpaceButtonRight; // @synthesize fixedSpaceButtonRight=_fixedSpaceButtonRight;
@property(retain, nonatomic) UIBarButtonItem *fixedSpaceButtonUndoRedo; // @synthesize fixedSpaceButtonUndoRedo=_fixedSpaceButtonUndoRedo;
- (struct CGRect)frameForFullscreenAttachment;
- (struct CGRect)frameForIndex:(long long)arg1 forSize:(struct CGSize)arg2;
@property(retain, nonatomic) UIView *gapView; // @synthesize gapView=_gapView;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
@property(retain, nonatomic) UIBarButtonItem *goToNoteButton; // @synthesize goToNoteButton=_goToNoteButton;
- (void)hideDrawingTools;
@property(retain, nonatomic) ICDismissToolsGestureRecongizer *hideToolGestureRecognizer; // @synthesize hideToolGestureRecognizer=_hideToolGestureRecognizer;
- (void)hideUI;
- (id)imageForTransition;
- (id)initWithEditorController:(id)arg1 editable:(_Bool)arg2;
- (id)insertAttachmentFollowing:(id)arg1;
- (void)insertAttachmentIfNeeded;
- (void)insertAttachmentIntoText:(id)arg1;
@property(nonatomic, getter=isEditable) _Bool editable; // @synthesize editable=_editable;
- (_Bool)isScrolling;
- (void)layoutUIForSize:(struct CGSize)arg1;
- (void)loadAllDrawingsInNoteForAttachment:(id)arg1;
- (void)loadDrawingView:(id)arg1;
- (void)loadView;
@property(retain, nonatomic) UIBarButtonItem *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) _Bool navigationBarHidden; // @synthesize navigationBarHidden=_navigationBarHidden;
- (id)newInteractiveTransition;
- (void)pinchGesture:(id)arg1;
@property(retain, nonatomic) ICFreeTransformGestureRecognizer *pinchGestureRecognizer; // @synthesize pinchGestureRecognizer=_pinchGestureRecognizer;
@property(nonatomic) struct CGAffineTransform pinchStartAffineTransform; // @synthesize pinchStartAffineTransform=_pinchStartAffineTransform;
- (struct CGAffineTransform)pinchTransform:(id)arg1;
@property(nonatomic) _Bool pinchValid; // @synthesize pinchValid=_pinchValid;
@property(nonatomic) _Bool pinchingFromSmallestState; // @synthesize pinchingFromSmallestState=_pinchingFromSmallestState;
- (long long)preferredStatusBarUpdateAnimation;
- (_Bool)prefersStatusBarHidden;
- (void)redoAction:(id)arg1;
@property(retain, nonatomic) UIBarButtonItem *redoButton; // @synthesize redoButton=_redoButton;
- (void)resignActive;
- (void)rotateAction:(id)arg1;
@property(retain, nonatomic) UIBarButtonItem *rotateButton; // @synthesize rotateButton=_rotateButton;
@property(retain, nonatomic) ICDrawingScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
@property(nonatomic) _Bool scrollViewScrollingToRect; // @synthesize scrollViewScrollingToRect=_scrollViewScrollingToRect;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)selectedColor;
- (unsigned int)selectedTool;
- (void)setAttachment:(id)arg1;
- (void)setContentHidden:(_Bool)arg1;
- (void)setDrawingToolsScrollingHidden:(_Bool)arg1;
- (void)setIsDrawing:(_Bool)arg1;
- (void)setNavigationBarBackgroundHidden:(_Bool)arg1;
- (void)setRulerSelected:(_Bool)arg1;
@property(retain, nonatomic) UIBarButtonItem *sharrowButton; // @synthesize sharrowButton=_sharrowButton;
@property(retain, nonatomic) UIButton *showToolsButton; // @synthesize showToolsButton=_showToolsButton;
@property(retain, nonatomic) ICSelectorDelayer *temporaryShowHiddenUISelectorDelayer; // @synthesize temporaryShowHiddenUISelectorDelayer=_temporaryShowHiddenUISelectorDelayer;
@property(nonatomic) _Bool toolsHidden; // @synthesize toolsHidden=_toolsHidden;
@property(nonatomic) _Bool toolsHiddenForScrolling; // @synthesize toolsHiddenForScrolling=_toolsHiddenForScrolling;
@property(retain, nonatomic) ICDrawingToolsView *toolsView; // @synthesize toolsView=_toolsView;
@property(retain, nonatomic) UIBarButtonItem *undoButton; // @synthesize undoButton=_undoButton;
@property(retain, nonatomic) ICSelectorDelayer *updateUndoRedoButtonsDelayer; // @synthesize updateUndoRedoButtonsDelayer=_updateUndoRedoButtonsDelayer;
@property(nonatomic) _Bool viewHasAppeared; // @synthesize viewHasAppeared=_viewHasAppeared;
- (void)setupCloseTransition;
- (void)setupPickerForViewSize:(struct CGSize)arg1;
- (void)setupScrollView:(id)arg1 forSize:(struct CGSize)arg2;
- (void)shareAction:(id)arg1;
- (_Bool)shouldInsertDrawing;
- (void)showDrawingTools;
- (void)showScrollTipIfNeeded;
@property(readonly, nonatomic) ICDrawingLightView *targetDrawingView;
- (void)tearDownAndClose;
- (void)temporaryHideDrawingTools;
- (void)temporaryHideNavigationBar;
- (void)temporaryShowHiddenUIDelayed:(_Bool)arg1;
- (unsigned int)toolStateForSize:(struct CGSize)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGPoint)translationOffsetForTransform:(struct CGAffineTransform)arg1;
- (void)undoAction:(id)arg1;
- (id)undoManager;
- (void)undoStackDidChange:(id)arg1;
- (void)unhideDrawingToolsAfterScrolling;
- (void)updateLeftBarButtonItems;
- (void)updateNewSketchOrientation;
- (void)updatePanEdgesForTransform:(struct CGAffineTransform)arg1;
- (void)updateRightBarButtonItems;
- (void)updateScrollViewsForSize:(struct CGSize)arg1;
- (void)updateScrollViewsForSize:(struct CGSize)arg1 forIndex:(long long)arg2;
- (void)updateUndoRedoButtons;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
