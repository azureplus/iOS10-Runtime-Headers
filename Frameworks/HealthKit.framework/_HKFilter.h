/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKFilter : NSObject <NSCopying, NSSecureCoding>

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)compoundFilterWithFilter:(id)arg1 otherFilter:(id)arg2;
+ (id)falseFilter;
+ (bool)filter:(id)arg1 acceptsDataObject:(id)arg2;
+ (id)filterByCombiningFilters:(id)arg1 compoundType:(unsigned long long)arg2;
+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4;
+ (bool)supportsSecureCoding;
+ (id)trueFilter;

- (id)_copyWithZone:(struct _NSZone { }*)arg1 subfilters:(id)arg2;
- (id)_subfilters;
- (bool)acceptsDataObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)filterByApplyingTransformation:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)_filterIgnoringPrivateMetadata;
- (id)filterIgnoringPrivateMetadata;
- (id)predicateWithProfile:(id)arg1;

@end
