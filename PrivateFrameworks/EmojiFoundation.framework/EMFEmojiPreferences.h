/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
 */

@interface EMFEmojiPreferences : NSObject <EMFEmojiPreferenceActions> {
    NSMutableDictionary * _categoryIndexes;
    long long  _currentSequence;
    NSMutableDictionary * _defaults;
    NSObject<OS_dispatch_queue> * _differentialPrivacyQueue;
    bool  _isDefaultDirty;
    unsigned long long  _maximumRecentsCount;
    NSString * _previouslyUsedCategory;
    NSArray * _recentEmojis;
    NSMutableArray * _recents;
    NSMutableDictionary * _skinToneBaseKeyPreferences;
    NSMutableDictionary * _usageHistory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long maximumRecentsCount;
@property (nonatomic, retain) NSString *previouslyUsedCategory;
@property (nonatomic, retain) NSArray *recentEmojis;
@property (readonly) Class superclass;

+ (id)defaultsDomain;
+ (id)differentialPrivacyDomain;
+ (id)differentialPrivacyRecorderForEmoji:(id)arg1 usageMode:(id)arg2;

- (void).cxx_destruct;
- (void)_readPreferencesFromDefaults;
- (void)didUseEmoji:(id)arg1;
- (void)didUseEmoji:(id)arg1 usageMode:(id)arg2;
- (void)didViewEmojiIndex:(long long)arg1 forCategory:(id)arg2;
- (id)init;
- (void)loadDefaultsIfNecessary;
- (unsigned long long)maximumRecentsCount;
- (void)migrateInPreviouslyUsedCategory:(id)arg1;
- (void)migrateInPreviouslyUsedCategoryIndexes:(id)arg1;
- (void)migrateInRecentEmoji:(id)arg1 usages:(id)arg2;
- (id)previouslyUsedCategory;
- (unsigned long long)previouslyUsedIndexInCategory:(id)arg1;
- (void)readEmojiDefaults;
- (id)recentEmojis;
- (id)recentVariantEmojiForEmoji:(id)arg1;
- (void)resetEmojiDefaults;
- (double)scoreForEmojiString:(id)arg1;
- (double)scoreForSequence:(long long)arg1;
- (void)setMaximumRecentsCount:(unsigned long long)arg1;
- (void)setPreviouslyUsedCategory:(id)arg1;
- (void)setRecentEmojis:(id)arg1;
- (void)writeEmojiDefaults;

@end