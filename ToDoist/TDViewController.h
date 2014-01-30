//
//  TDViewController.h
//  ToDoist
//
//  Created by Alexey Bondarenko on 1/30/14.
//  Copyright (c) 2014 Alexey Bondarenko. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface TDViewController : UIViewController <UITableViewDelegate, UITableViewDataSource,NSFetchedResultsControllerDelegate, UITextFieldDelegate>
{
    NSFetchedResultsController *fetchedResultsController;
    NSManagedObjectContext *managedObjectContext;
}

@property (weak, nonatomic) IBOutlet UITextField *taskInputField;

@property (nonatomic, retain) NSFetchedResultsController *fetchedResultsController;
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;

-(void) addNewTask:(NSString*)taskText;

@end
