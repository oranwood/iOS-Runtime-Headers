/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSNumber, NSString;

@interface SKUIItemState : NSObject <NSCopying> {
    NSString *_downloadPhase;
    float _downloadProgress;
    NSNumber *_itemIdentifier;
    unsigned int _state;
}

@property(copy) NSString * downloadPhase;
@property float downloadProgress;
@property(copy) NSNumber * itemIdentifier;
@property unsigned int state;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)downloadPhase;
- (float)downloadProgress;
- (id)itemIdentifier;
- (void)setDownloadPhase:(id)arg1;
- (void)setDownloadProgress:(float)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setState:(unsigned int)arg1;
- (unsigned int)state;

@end
