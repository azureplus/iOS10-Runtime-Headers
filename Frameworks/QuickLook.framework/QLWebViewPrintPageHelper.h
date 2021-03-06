/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLWebViewPrintPageHelper : NSObject <QLPrintingProtocol> {
    UIWebBrowserView * _browserView;
    NSString * _documentType;
    QLPreviewConverter * _previewConverter;
    struct CGSize { 
        double width; 
        double height; 
    }  _printableSize;
    NSURLRequest * _request;
}

@property (retain) QLPreviewConverter *previewConverter;
@property (nonatomic) struct CGSize { double x1; double x2; } printableSize;

+ (bool)_isXPathType:(id)arg1;
+ (id)printPageRendererWithBrowserView:(id)arg1 request:(id)arg2 documentType:(id)arg3;

- (void).cxx_destruct;
- (void)_waitForPreview;
- (id)initWithWebBrowserView:(id)arg1 request:(id)arg2 documentType:(id)arg3;
- (long long)numberOfPages;
- (void)numberOfPagesWithSize:(struct CGSize { double x1; double x2; })arg1 completionHandler:(id /* block */)arg2;
- (id)pdfDataForPageAtIndex:(long long)arg1;
- (void)pdfDataForPageAtIndex:(long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)prepareForDrawingPages:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)previewConverter;
- (struct CGSize { double x1; double x2; })printableSize;
- (void)setPreviewConverter:(id)arg1;
- (void)setPrintableSize:(struct CGSize { double x1; double x2; })arg1;

@end
