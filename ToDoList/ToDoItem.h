//
//  ToDoItem.h
//  ToDoList
//
//  Created by Andrew Elgert on 10/25/14.
//  Copyright (c) 2014 Andrew Elgert. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString * itemName;
@property BOOL completed;
@property (readonly) NSDate * creationDate;

@end
