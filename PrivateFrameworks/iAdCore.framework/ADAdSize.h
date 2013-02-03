/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@interface ADAdSize : PBCodable {
    BOOL _hasSize;
    int _size;
}

@property(readonly) BOOL hasSize;
@property int size;

- (int)compareToSize:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasSize;
- (id)init;
- (BOOL)readFrom:(id)arg1;
- (void)setSize:(int)arg1;
- (int)size;
- (void)writeTo:(id)arg1;

@end