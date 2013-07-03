/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, NSArray;

@interface SAUIRequestUpdateViews : SABaseClientBoundCommand  {
}

@property(copy) NSArray * commands;
@property(copy) NSNumber * timeInSeconds;
@property(copy) NSArray * viewIds;

+ (id)requestUpdateViewsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)requestUpdateViews;

- (void)setViewIds:(id)arg1;
- (id)viewIds;
- (void)setTimeInSeconds:(id)arg1;
- (id)timeInSeconds;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)commands;
- (void)setCommands:(id)arg1;
- (id)groupIdentifier;

@end