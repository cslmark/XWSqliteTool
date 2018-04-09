//
//  AppDelegate.h
//  XWSqliteToolDemo
//
//  Created by 邱学伟 on 2018/4/8.
//  Copyright © 2018年 邱学伟. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

