# CHBlowfishDemo
《Blowfish》<br>

EASY TO USE<br>

Just copy the CHBlowfish Dir into your Project!!<br>

    CHBlowfish *fish = [[CHBlowfish alloc] init];
    fish.Key = @"hello";
    fish.IV = 1234; // long value
    [fish initBlowfish];
    NSLog(@"%@",[fish encrypt:@"****"]);
    NSLog(@"%@",[fish decrypt:@"****");

Notice: ONLY SUPPORT ASCII CAPABLE WORD ENCRYPT&DECRYPT RIGHT NOW!!<br> 

-Jiao <br>
-2015/6/9 <br>

Screenshots

![image](https://github.com/JiaoLiu/CHBlowfishDemo/blob/master/ScreenShot.png)
