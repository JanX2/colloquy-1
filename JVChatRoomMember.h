#import <Foundation/NSObject.h>
#import <AppKit/NSNibDeclarations.h>
#import "JVChatWindowController.h"

@class JVChatRoom;
@class NSString;
@class MVChatConnection;

@interface JVChatRoomMember : NSObject <JVChatListItem> {
	JVChatRoom *_parent;
	NSString *_memberName;
	BOOL _operator;
	BOOL _voice;
}
- (void) setParent:(id <JVChatListItem>) parent;

- (MVChatConnection *) connection;

- (void) setMemberName:(NSString *) name;
- (NSString *) memberName;

- (void) setVoice:(BOOL) voice;
- (void) setOperator:(BOOL) operator;	
@end
