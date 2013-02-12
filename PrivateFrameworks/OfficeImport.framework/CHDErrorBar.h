/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CHDChart, CHDData, OADGraphicProperties;

@interface CHDErrorBar : NSObject {
     /* Encoded args for previous method: B8@0:4 */
     /* Encoded args for previous method: v12@0:4B8 */
    CHDChart *mChart;
    NSInteger mDirection;
    OADGraphicProperties *mGraphicProperties;
    CHDData *mMinusValues;
    CHDData *mPlusValues;
    NSInteger mType;
    double mValue;
    NSInteger mValueType;
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mNoEndCap;
}

+ (id)errorBarWithChart:(id)arg1;

- (void)dealloc;
- (NSInteger)direction;
- (id)graphicProperties;
- (id)initWithChart:(id)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isNoEndCap;
- (id)minusValues;
- (id)plusValues;
- (void)setDirection:(NSInteger)arg1;
- (void)setGraphicProperties:(id)arg1;
- (void)setMinusValues:(id)arg1;
- (void)setNoEndCap:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
- (void)setPlusValues:(id)arg1;
- (void)setType:(NSInteger)arg1;
- (void)setValue:(double)arg1;
- (void)setValueType:(NSInteger)arg1;
- (NSInteger)type;
- (double)value;
- (NSInteger)valueType;

@end