//
//  AppDelegate.h
//  TestSubmitCode
//
//  Created by Dinh Tran on 5/17/13.
//  Copyright Dinh Tran 2013. All rights reserved.
//

#import "cocos2d.h"

@interface TestSubmitCodeAppDelegate : NSObject <NSApplicationDelegate>
{
	NSWindow	*window_;
	CCGLView	*glView_;
}

@property (assign) IBOutlet NSWindow	*window;
@property (assign) IBOutlet CCGLView	*glView;

- (IBAction)toggleFullScreen:(id)sender;

@end
