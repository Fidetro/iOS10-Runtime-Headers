/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKDynamicColumnSectionMetrics : GKSectionMetrics  {
    unsigned int _columnsInPortrait;
    unsigned int _columnsInLandscape;
}

@property unsigned int columnsInPortrait;
@property unsigned int columnsInLandscape;

+ (id)dynamicColumnSectionMetricsWithColumnsInPortrait:(unsigned int)arg1 columnsInLandscape:(unsigned int)arg2 forIdiom:(int)arg3;
+ (id)dynamicColumnSectionMetricsWithColumnsInPortrait:(unsigned int)arg1 columnsInLandscape:(unsigned int)arg2;

- (unsigned int)columnsInLandscape;
- (unsigned int)columnsInPortrait;
- (void)setColumnsInLandscape:(unsigned int)arg1;
- (void)setColumnsInPortrait:(unsigned int)arg1;
- (struct CGSize { float x1; float x2; })itemSizeForCollectionView:(id)arg1;
- (id)initWithIdiom:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
