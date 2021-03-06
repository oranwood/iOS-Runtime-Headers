/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class <MFGuaranteedCollectingDataConsumer>, NSData;

@interface MFPartialNetworkDataConsumer : NSObject <MFDataConsumer> {
    unsigned int _seenNetworkLineEndings : 1;
    unsigned int _length;
    <MFGuaranteedCollectingDataConsumer> *_rawDataConsumer;
    NSData *_strippedData;
}

- (int)appendData:(id)arg1;
- (id)copyDataWithUnixLineEndings;
- (id)data;
- (void)dealloc;
- (void)done;
- (id)init;
- (unsigned int)length;
- (void)purge;

@end
