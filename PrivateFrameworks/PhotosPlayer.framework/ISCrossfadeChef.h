/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISCrossfadeChef : NSObject {
    NSOperationQueue * __operationQueue;
    long long  __requestCounter;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    NSMutableDictionary * _operationsByRequestID;
}

@property (nonatomic, readonly) NSOperationQueue *_operationQueue;
@property (setter=_setRequestCounter:, nonatomic) long long _requestCounter;

+ (id)defaultChef;

- (void).cxx_destruct;
- (id)_operationQueue;
- (void)_removeOperationForRequestID:(long long)arg1;
- (long long)_requestCounter;
- (void)_setRequestCounter:(long long)arg1;
- (void)cancelRequestWithID:(long long)arg1;
- (id)init;
- (long long)requestCrossfadeItemForVideoAsset:(id)arg1 sourceStartTime:(double)arg2 stillPhoto:(struct CGImage { }*)arg3 photoEXIFOrientation:(int)arg4 crossfadeDuration:(double)arg5 numberOfFrames:(unsigned long long)arg6 targetSize:(struct CGSize { double x1; double x2; })arg7 videoComposition:(id)arg8 resultHandler:(id /* block */)arg9;
- (long long)requestCrossfadeItemForVideoAsset:(id)arg1 stillPhoto:(struct CGImage { }*)arg2 stillPhotoEXIFOrientation:(int)arg3 sourceStartTime:(double)arg4 targetSize:(struct CGSize { double x1; double x2; })arg5 videoComposition:(id)arg6 resultHandler:(id /* block */)arg7;

@end
