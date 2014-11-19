//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSServiceDelegate.h"

@class IDSService, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, PUKeyStore;

@interface PUPeer : NSObject <IDSServiceDelegate>
{
    IDSService *_service;
    NSObject<OS_dispatch_queue> *_idsQueue;
    _Bool _unlockEnabled;
    id <PUPeerDelegate> _delegate;
    PUKeyStore *_keyStore;
    NSMutableDictionary *_responseHandlers;
}

@property(retain, nonatomic) NSMutableDictionary *responseHandlers; // @synthesize responseHandlers=_responseHandlers;
@property(retain, nonatomic) PUKeyStore *keyStore; // @synthesize keyStore=_keyStore;
@property(nonatomic, getter=isUnlockEnabled) _Bool unlockEnabled; // @synthesize unlockEnabled=_unlockEnabled;
@property(nonatomic) id <PUPeerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_notifyPairResult:(_Bool)arg1 error:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)getPasscodeState:(id)arg1;
- (void)didGetPasscodeState:(id)arg1;
- (void)setShouldNotifyNextUnlock:(id)arg1;
- (void)didUnlock:(id)arg1;
- (void)startPasscodeAction:(id)arg1;
- (_Bool)canUnlock;
- (void)checkCanBeUnlocked:(CDUnknownBlockType)arg1;
- (_Bool)_isUnlockOnly;
- (_Bool)_isCurrentlyLocked;
- (void)notifyThisDeviceDidUnlock;
- (void)disableOnlyRemoteUnlockWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_retrieveUnlockOnlyPasscode;
- (void)enableOnlyRemoteUnlockWithPasscode:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_createAndStoreNewPasscodeWithCurrentPasscode:(id)arg1;
- (void)getRemoteDeviceState:(CDUnknownBlockType)arg1;
- (void)unpairForUnlockWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)requestRemoteDeviceUnlockNotification;
- (void)requestRemoteDevicePasscodeAction:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)pairForUnlockWithPasscode:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)didCompleteRequest:(id)arg1;
- (id)_sendProtobuf:(id)arg1 expectsResponse:(_Bool)arg2 responseIdentifier:(id)arg3;
- (void)_sendResponse:(unsigned short)arg1 toRequestID:(id)arg2 data:(id)arg3;
- (id)_sendRequest:(unsigned short)arg1 data:(id)arg2 expectResponse:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_sendResultOfMessage:(unsigned short)arg1 requestID:(id)arg2 success:(_Bool)arg3 error:(id)arg4;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
