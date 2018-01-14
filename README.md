# iOS-Commons-NSStringGeometry
iOS-Commons-NSStringGeometry


### 工具汇总贴：[iOS常用扩展工具类（只为你的开发能更得心应手~）](https://tqmax.github.io/2018/01/07/iOS常用扩展工具类（只为你的开发能更得心应手~）/)

#### 在做项目中对字符串的处理是必不可少的，或者要对一些数据进行字符串的转换等等。这里就介绍几个自己在项目中经常使用的方法。这里的category包括：时间戳转化为字符串的各类形式，获取当前设备deviceId和字符串向富文本的转换等等

```objc

    //用法如下：

    //我这里是为了便于计算长度而先赋值字符串
    NSString *str = [NSString stringWithFormat:@"￥%@（佣金：%@）",friendModel.goods_rent_sell_friend_price,friendModel.yongjin];
    NSString *str1 = [NSString stringWithFormat:@"￥%@",friendModel.goods_rent_sell_friend_price];
    NSString *str2 = [NSString stringWithFormat:@"（佣金：%@）",friendModel.yongjin];
    
    //改变Lable的颜色和字体、大小，范围自定
    self.priceLabel.attributedText = [str changeColor:UIColorFromRGB(0x999999) andColorRang:NSMakeRange(str1.length, str2.length) andFont:[UIFont fontWithName:@"PingFangSC-Regular" size:12] andFontRange:NSMakeRange(str1.length, str2.length)];
 
```
#### 效果图如下（单件数量前面的总价和佣金字符串）：

![](https://github.com/TQMAX/Markdown-Res/blob/master/Res/NSStringGeometry.png?raw=true)
