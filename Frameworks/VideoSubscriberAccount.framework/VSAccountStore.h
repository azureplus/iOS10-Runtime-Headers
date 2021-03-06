/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSAccountStore : NSObject <VSRemoteNotifierDelegate> {
    id  _changeObserver;
    VSKeychainEditingContext * _keychainEditingContext;
    VSRemoteNotifier * _remoteNotifier;
}

@property (nonatomic, readonly, copy) NSArray *accounts;
@property (nonatomic) id changeObserver;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VSKeychainEditingContext *keychainEditingContext;
@property (nonatomic, retain) VSRemoteNotifier *remoteNotifier;
@property (readonly) Class superclass;

+ (Class)accountClass;

- (void).cxx_destruct;
- (id)_accountForKeychainItem:(id)arg1;
- (id)_keychainItemsWithLimit:(unsigned long long)arg1;
- (void)_sendLocalNotification;
- (void)_sendRemoteNotification;
- (id)accounts;
- (id)changeObserver;
- (void)dealloc;
- (id)firstAccount;
- (id)init;
- (id)keychainEditingContext;
- (id)remoteNotifier;
- (void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2;
- (void)removeAccount:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)saveAccount:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setChangeObserver:(id)arg1;
- (void)setKeychainEditingContext:(id)arg1;
- (void)setRemoteNotifier:(id)arg1;

@end
