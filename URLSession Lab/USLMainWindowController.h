///:
/*****************************************************************************
 **                                                                         **
 **                               .======.                                  **
 **                               | INRI |                                  **
 **                               |      |                                  **
 **                               |      |                                  **
 **                      .========'      '========.                         **
 **                      |   _      xxxx      _   |                         **
 **                      |  /_;-.__ / _\  _.-;_\  |                         **
 **                      |     `-._`'`_/'`.-'     |                         **
 **                      '========.`\   /`========'                         **
 **                               | |  / |                                  **
 **                               |/-.(  |                                  **
 **                               |\_._\ |                                  **
 **                               | \ \`;|                                  **
 **                               |  > |/|                                  **
 **                               | / // |                                  **
 **                               | |//  |                                  **
 **                               | \(\  |                                  **
 **                               |  ``  |                                  **
 **                               |      |                                  **
 **                               |      |                                  **
 **                               |      |                                  **
 **                               |      |                                  **
 **                   \\    _  _\\| \//  |//_   _ \// _                     **
 **                  ^ `^`^ ^`` `^ ^` ``^^`  `^^` `^ `^                     **
 **                                                                         **
 **                       Copyright (c) 2015 Tong G.                        **
 **                          ALL RIGHTS RESERVED.                           **
 **                                                                         **
 ****************************************************************************/

#import <Cocoa/Cocoa.h>

// USLMainWindowController class
@interface USLMainWindowController : NSWindowController < NSURLSessionDelegate
                                                        , NSURLSessionTaskDelegate
                                                        , NSURLSessionDataDelegate
                                                        , NSURLSessionDownloadDelegate
                                                        >

@property ( unsafe_unretained ) IBOutlet NSTextField* URLField;
@property ( unsafe_unretained ) IBOutlet NSButton* goButton;

@property ( unsafe_unretained ) IBOutlet NSTextView* responseTextView;

@property ( retain ) NSURLSessionDataTask* dataTask;
@property ( retain ) NSURLSessionDownloadTask* downloadTask;

@property ( copy ) NSURLSession* backgroundSession;
@property ( copy ) NSURLSession* defaultSession;
@property ( copy ) NSURLSession* ephemeralSession;

@property ( retain ) NSMutableData* receivedData;

@property ( retain ) NSMutableDictionary* completionHandlerDictionary;

+ ( id ) mainWindowController;

- ( IBAction ) goAction: ( id )_Sender;
- ( IBAction ) downloadAction: ( id )_Sender;

- ( IBAction ) pauseAction: ( id )_Sender;
- ( IBAction ) resumeAction: ( id )_Sender;
- ( IBAction ) stopAction: ( id )_Sender;

@end // USLMainWindowController

//////////////////////////////////////////////////////////////////////////////

/*****************************************************************************
 **                                                                         **
 **      _________                                      _______             **
 **     |___   ___|                                   / ______ \            **
 **         | |     _______   _______   _______      | /      |_|           **
 **         | |    ||     || ||     || ||     ||     | |    _ __            **
 **         | |    ||     || ||     || ||     ||     | |   |__  \           **
 **         | |    ||     || ||     || ||     ||     | \_ _ __| |  _        **
 **         |_|    ||_____|| ||     || ||_____||      \________/  |_|       **
 **                                           ||                            **
 **                                    ||_____||                            **
 **                                                                         **
 ****************************************************************************/
///:~