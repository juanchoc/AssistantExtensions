#import "SiriObjects.h"

/// Principal class - the main class of the extension
@interface AESBSToggles : NSObject<SEExtension>

-(id)initWithSystem:(id<SESystem>)system;

-(NSString*)author;
-(NSString*)name;
-(NSString*)description;
-(NSString*)website;

@end
// vim:ft=objc
