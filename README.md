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

-Liu jiao <br>
-2015/6/9 <br>

Screenshots

![image](https://github.com/JiaoLiu/CHCalendar/blob/master/Screenshot/main.png)
