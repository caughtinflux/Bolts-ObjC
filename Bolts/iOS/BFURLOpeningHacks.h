//
//  BFURLOpeningHacks.h
//  Bolts
//
//  Created by Aditya Krishnadevan on 22/02/16.
//  Copyright © 2016 Parse Inc. All rights reserved.
//

#ifndef BFURLOpeningHacks_h
#define BFURLOpeningHacks_h

#import <objc/message.h>

#define BF_UIAPP() ((UIApplication *)[NSClassFromString(@"UIApplication") performSelector:@selector(sharedApplication)])

#define BF_OPEN_URL(_URL) (((BOOL (*)(id, SEL, NSURL *))objc_msgSend)(BF_UIAPP(), @selector(openURL:), _URL))

#endif /* BFURLOpeningHacks_h */
