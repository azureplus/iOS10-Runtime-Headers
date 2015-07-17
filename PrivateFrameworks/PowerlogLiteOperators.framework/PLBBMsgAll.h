/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLBBMsgAll : PLBBMsgRoot {
    NSDate *_bbDate;
    NSString *_error;
    NSDate *_ibbDate;
    NSString *_ierror;
    NSString *_ieventCode;
    NSMutableDictionary *_info;
    NSString *_ipayload;
    NSNumber *_iseqNum;
    NSString *_payload;
    NSNumber *_seqNum;
}

@property (retain) NSDate *bbDate;
@property (retain) NSString *error;
@property (retain) NSDate *ibbDate;
@property (retain) NSString *ierror;
@property (retain) NSString *ieventCode;
@property (retain) NSMutableDictionary *info;
@property (retain) NSString *ipayload;
@property (retain) NSNumber *iseqNum;
@property (retain) NSString *payload;
@property (retain) NSNumber *seqNum;

+ (id)entryEventNoneBBMsgAll;

- (void).cxx_destruct;
- (id)bbDate;
- (id)error;
- (id)ibbDate;
- (id)ierror;
- (id)ieventCode;
- (id)info;
- (id)ipayload;
- (id)iseqNum;
- (void)logEventNoneBBMsgAll;
- (id)payload;
- (void)refreshBBMsgAll;
- (void)sendAndLogPLEntry:(id)arg1 withName:(id)arg2 withType:(id)arg3;
- (id)seqNum;
- (void)setBbDate:(id)arg1;
- (void)setError:(id)arg1;
- (void)setISeqNum:(id)arg1;
- (void)setIbbDate:(id)arg1;
- (void)setIerror:(id)arg1;
- (void)setIeventCode:(id)arg1;
- (void)setInfo:(id)arg1;
- (void)setIpayload:(id)arg1;
- (void)setIseqNum:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setSeqNum:(id)arg1;

@end