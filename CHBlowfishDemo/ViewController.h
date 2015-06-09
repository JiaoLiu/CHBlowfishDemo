//
//  ViewController.h
//  CHBlowfishDemo
//
//  Created by Jiao Liu on 6/9/15.
//  Copyright (c) 2015 Jiao Liu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *KeyInput;
@property (weak, nonatomic) IBOutlet UITextField *IVInput;
@property (weak, nonatomic) IBOutlet UITextField *plainInput;
@property (weak, nonatomic) IBOutlet UITextField *cryptedInput;
@property (weak, nonatomic) IBOutlet UIButton *encryptBtn;
@property (weak, nonatomic) IBOutlet UIButton *DecryptBtn;

@end

