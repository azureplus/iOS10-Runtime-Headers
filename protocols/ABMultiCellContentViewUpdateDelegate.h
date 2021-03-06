/* Generated by RuntimeBrowser.
 */

@protocol ABMultiCellContentViewUpdateDelegate <ABTabOrderDelegate, ABDatePickerPresentationDelegate>

@required

- (void)multiCellContentView:(ABMultiCellContentView *)arg1 didResizeAnimated:(bool)arg2;
- (void)multiCellContentView:(ABMultiCellContentView *)arg1 entryField:(UIView *)arg2 didUpdateValue:(id)arg3 forKey:(id)arg4;
- (void)multiCellContentView:(ABMultiCellContentView *)arg1 entryFieldDidBeginEditing:(UIView *)arg2;
- (void)multiCellContentView:(ABMultiCellContentView *)arg1 entryFieldDidEndEditing:(UIView *)arg2 forKey:(id)arg3;
- (bool)multiCellContentView:(ABMultiCellContentView *)arg1 entryFieldShouldBeginEditing:(UIView *)arg2;
- (void)multiCellContentView:(ABMultiCellContentView *)arg1 touchesBeganForView:(UIView *)arg2;
- (void)multiCellContentView:(ABMultiCellContentView *)arg1 touchesCancelledForView:(UIView *)arg2;
- (void)multiCellContentView:(ABMultiCellContentView *)arg1 touchesEndedForView:(UIView *)arg2;
- (void)multiCellContentView:(ABMultiCellContentView *)arg1 willResizeAnimated:(bool)arg2;
- (void)multiCellContentViewDidEndEditing:(ABMultiCellContentView *)arg1;
- (void)multiCellContentViewWillHideDeleteConfirmation:(ABMultiCellContentView *)arg1;
- (void)multiCellContentViewWillShowDeleteConfirmation:(ABMultiCellContentView *)arg1;

@end
