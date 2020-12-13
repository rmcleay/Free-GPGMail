//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MessageViewer.h"

//#import "NSDraggingSource-Protocol.h"
//#import "NSToolbarDelegate-Protocol.h"
//#import "NSWindowRestoration-Protocol.h"
#import "SelectionOwner-Protocol.h"

@class LoadingOverlay, MCMessage, NSArray, NSOperation, NSSet, NSString;
@protocol MCMessageDataSource;

@interface SingleMessageViewer : MessageViewer <NSDraggingSource, NSToolbarDelegate, NSWindowRestoration, SelectionOwner>
{
    BOOL _nibLoaded;
    BOOL _nextDeleteShouldMoveToTrash;
    BOOL _useExistingMailboxPrediction;
    NSArray *_selectedMailboxes;
    NSOperation *_proxyIconOperation;
    NSOperation *_subjectLoadOperation;
    MCMessage *_initialMessage;
    NSSet *_hiddenCopies;
    NSArray *_messagesToDelete;
    LoadingOverlay *_loadingOverlay;
}

//+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)_mailApplicationDidFinishLaunching:(id)arg1;
+ (id)_createWithSavedAttributes:(id)arg1;
+ (id)_messagesFromDictionary:(id)arg1;
+ (id)_createWithMessage:(id)arg1 hiddenCopies:(id)arg2 showRelatedMessages:(BOOL)arg3 expandedSelectedMailboxes:(id)arg4 andAttributes:(id)arg5;
+ (id)newDefaultMessageViewer;
+ (id)toolbarIdentifier;
+ (id)viewerForMessage:(id)arg1 hiddenCopies:(id)arg2 showRelatedMessages:(BOOL)arg3 expandedSelectedMailboxes:(id)arg4;
+ (id)viewerForPendingMessage;
+ (id)existingSingleMessageViewerForMessage:(id)arg1;
@property(nonatomic) BOOL useExistingMailboxPrediction; // @synthesize useExistingMailboxPrediction=_useExistingMailboxPrediction;
@property(retain, nonatomic) LoadingOverlay *loadingOverlay; // @synthesize loadingOverlay=_loadingOverlay;
@property(retain, nonatomic) NSArray *messagesToDelete; // @synthesize messagesToDelete=_messagesToDelete;
@property(nonatomic) BOOL nextDeleteShouldMoveToTrash; // @synthesize nextDeleteShouldMoveToTrash=_nextDeleteShouldMoveToTrash;
@property(readonly, nonatomic) NSSet *hiddenCopies; // @synthesize hiddenCopies=_hiddenCopies;
@property(nonatomic) BOOL nibLoaded; // @synthesize nibLoaded=_nibLoaded;
@property(retain, nonatomic) MCMessage *initialMessage; // @synthesize initialMessage=_initialMessage;
@property(retain, nonatomic) NSOperation *subjectLoadOperation; // @synthesize subjectLoadOperation=_subjectLoadOperation;
@property(retain, nonatomic) NSOperation *proxyIconOperation; // @synthesize proxyIconOperation=_proxyIconOperation;
- (void)setSelectedMailboxes:(id)arg1;
- (id)selectedMailboxes;
//- (void).cxx_destruct;
@property(readonly, nonatomic) MCMessage *messageThatUserIsProbablyReading;
- (void)revealMessage:(id)arg1;
- (void)setShouldDisplayShowInMailboxLink:(BOOL)arg1;
@property(readonly, nonatomic) id /*<MCMessageDataSource>*/ messageStore;
@property(readonly, nonatomic) MCMessage *currentDisplayedMessage;
- (void)selectMessages:(id)arg1;
- (id)selectionExpandingThreadsAndHiddenCopies:(BOOL)arg1;
@property(readonly, copy, nonatomic) NSArray *selection;
- (BOOL)_replaceWithEditorForType:(long long)arg1 messages:(id)arg2;
- (BOOL)_replaceWithEditorForType:(long long)arg1 action:(SEL)arg2;
- (void)send:(id)arg1;
- (void)redirectMessage:(id)arg1;
- (void)forwardMessage:(id)arg1;
- (void)replyToOriginalSender:(id)arg1;
- (void)replyAllMessage:(id)arg1;
- (void)replyMessage:(id)arg1;
- (void)forwardMessage:(id)arg1 messageViewController:(id)arg2;
- (void)replyAllToMessage:(id)arg1 messageViewController:(id)arg2;
- (void)replyToMessage:(id)arg1 messageViewController:(id)arg2;
- (void)archiveMessages:(id)arg1;
- (void)undeleteMessagesAllowUndo:(BOOL)arg1;
- (void)undeleteMessages:(id)arg1;
- (void)_reallyDeleteMessages:(id)arg1 allowingMoveToTrash:(BOOL)arg2;
- (void)fullScreenCloseAnimationFinished;
- (void)deleteMessages:(id)arg1 allowMoveToTrash:(BOOL)arg2 allowUndo:(BOOL)arg3 selectingNextMessage:(BOOL)arg4 withAnimationOptions:(unsigned long long)arg5;
- (BOOL)_displayingSingletonMessage;
- (void)deleteMessages:(id)arg1;
- (void)_noMessagesLeftToDisplay;
- (void)_messagesCompacted:(id)arg1;
- (void)_messageFlagsDidChange:(id)arg1;
- (void)_messagesWereRemoved:(id)arg1;
- (BOOL)shouldDeleteMessagesGivenCurrentState;
- (BOOL)shouldDeleteMessageGivenCurrentState;
- (BOOL)_isViewingMessage:(id)arg1;
- (void)updateToolbar;
- (void)setupToolbar;
- (void)selectMailbox:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)selectedMessages;
- (void)resignAsSelectionOwner;
- (void)takeOverAsSelectionOwner;
- (void)saveDefaultWindowState;
- (id)dictionaryRepresentation;
- (void)_restoreViewer;
- (void)showAndMakeKey:(BOOL)arg1;
- (void)_setupFromAttributes;
- (void)_adjustNewSingleViewerWindowFrame;
- (void)_setWindowFrameFromDefaults;
- (id)_messageIDDictionaryRepresentationOf:(id)arg1;
- (void)_addMessageIDsFrom:(id)arg1 toDictionary:(id)arg2;
- (id)expandedSelectedMailboxesAllowingSearch;
- (id)expandedSelectedMailboxes;
- (id)messagesIncludingHiddenCopies:(id)arg1;
- (void)dealloc;
- (void)initFullScreenController;
- (id)initWithMailboxes:(id)arg1;
- (id)initPlainWithAttributes:(id)arg1;
- (void)_setUpForMessage:(id)arg1 showRelatedMessages:(BOOL)arg2;
- (void)setMessageToView:(id)arg1;
- (id)initForViewingMessage:(id)arg1 hiddenCopies:(id)arg2 showRelatedMessages:(BOOL)arg3 expandedSelectedMailboxes:(id)arg4 withAttributes:(id)arg5;
- (void)loadMessageWindowNib;
- (void)_openEnclosingMailbox:(id)arg1;
- (BOOL)window:(id)arg1 shouldPopUpDocumentPathMenu:(id)arg2;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (BOOL)window:(id)arg1 shouldDragDocumentWithEvent:(id)arg2 from:(struct CGPoint)arg3 withPasteboard:(id)arg4;
- (id)filenameToDrag:(id)arg1;
- (void)_reallyUpdateWindowTitle:(id)arg1;
- (void)updateWindowTitle:(id)arg1;
- (void)_updateWindowProxy:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)windowDidMove:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)restoreFrame;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isInThreadedMode;
@property(readonly) Class superclass;

@end

