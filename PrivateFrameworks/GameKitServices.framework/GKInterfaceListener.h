/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class <InterfaceListenerDelegate>;

@interface GKInterfaceListener : NSObject {
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    struct __SCDynamicStore { } *_dynamicStore;
    BOOL _isCellUp;
    BOOL _isWifiUp;
    } _storeMutex;
    <InterfaceListenerDelegate> *interfaceListenerDelegate;
}

@property BOOL _isCellUp;
@property BOOL _isWifiUp;
@property <InterfaceListenerDelegate> * interfaceListenerDelegate;

- (BOOL)_isCellUp;
- (BOOL)_isWifiUp;
- (void)dealloc;
- (void)hasConnectionWithWifi:(BOOL*)arg1 withCell:(BOOL*)arg2;
- (id)init;
- (id)interfaceListenerDelegate;
- (void)setInterfaceListenerDelegate:(id)arg1;
- (void)set_isCellUp:(BOOL)arg1;
- (void)set_isWifiUp:(BOOL)arg1;
- (BOOL)startChangeListener;
- (BOOL)stopChangeListener;

@end
