#if __has_include(<React/RCTBridgeModule.h>)
#import <React/RCTBridgeModule.h>
#else // back compatibility for RN version < 0.40
#import "RCTBridgeModule.h"
#endif

#import "RCTBridge.h"

@import UIKit;

@interface FileOpener : NSObject <RCTBridgeModule>
@property (nonatomic) UIDocumentInteractionController * FileOpener;
@end