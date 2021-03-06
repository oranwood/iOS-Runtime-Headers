/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableDictionary, UIScreen;

@interface UIKBGraphCache : NSObject <_UIScreenBasedObject> {
    NSMutableDictionary *_graphCache;
    UIScreen *_screen;
}

@property(readonly) UIScreen * _intendedScreen;
@property(readonly) NSMutableDictionary * graphCache;

+ (id)graphCacheForScreen:(id)arg1;

- (id)_initWithScreen:(id)arg1 options:(id)arg2;
- (id)_intendedScreen;
- (BOOL)_matchingOptions:(id)arg1;
- (void)dealloc;
- (id)graphCache;

@end
