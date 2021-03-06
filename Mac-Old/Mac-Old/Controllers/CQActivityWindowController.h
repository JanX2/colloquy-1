typedef unsigned long long CQFileSize;

NSString *MVPrettyFileSize(CQFileSize size);
NSString *MVReadableTime(NSTimeInterval date, BOOL longFormat);

@class CQGroupCell;
@class CQSubtitleCell;
@class CQDownloadCell;

@interface CQActivityWindowController : NSWindowController {
@private
	NSMapTable *_activity;

	NSTimeInterval _rowLastClickedTime;
	IBOutlet NSOutlineView *_outlineView;

	CQGroupCell *_groupCell;
	CQSubtitleCell *_titleCell;

	NSDateFormatter *_timeFormatter;

	NSMutableDictionary *_cellImages;
}
+ (CQActivityWindowController *) sharedController;

- (IBAction) showActivityWindow:(id) sender;
- (IBAction) hideActivityWindow:(id) sender;

- (void) downloadFileAtURL:(NSURL *) url toLocalFile:(NSString *) path;
@end
