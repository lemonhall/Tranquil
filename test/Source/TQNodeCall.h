#import "TQNode.h"

// A call to a block (block: argument.)
@interface TQNodeCall : TQNode
@property(readwrite, retain) TQNode *callee;
@property(readwrite, copy) NSMutableArray *arguments;
+ (TQNodeCall *)nodeWithCallee:(TQNode *)aCallee;
- (id)initWithCallee:(TQNode *)aCallee;
@end
