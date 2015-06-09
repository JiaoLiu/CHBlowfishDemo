//
//  ViewController.m
//  CHBlowfishDemo
//
//  Created by Jiao Liu on 6/9/15.
//  Copyright (c) 2015 Jiao Liu. All rights reserved.
//

#import "ViewController.h"
#import "CHBlowfish.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)EncryptedBtnClicked:(id)sender {
    CHBlowfish *fish = [[CHBlowfish alloc] init];
    fish.Key = _KeyInput.text;
    fish.IV = [_IVInput.text integerValue];
    [fish initBlowfish];
    _cryptedInput.text = [fish encrypt:_plainInput.text];
}

- (IBAction)DecryptedBtnClicked:(id)sender {
    CHBlowfish *fish = [[CHBlowfish alloc] init];
    fish.Key = _KeyInput.text;
    fish.IV = [_IVInput.text integerValue];
    [fish initBlowfish];
    _plainInput.text = [fish decrypt:_cryptedInput.text];
}

@end
