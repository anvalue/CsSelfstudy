# 基础小知识
> y总云：基础并不意味简单

## 一些函数
1. `getline(cin,string)`:
> 输入字符串string

2. `sscanf()：读取格式化输入`:
> sscanf(line.c_str(),"%d:%d:%d %d:%d:%d (+%d)",&h1,&m1,&s1,&h2,&m2,&s2,&d);

3. `stoi():` 字符串转数字函数
4. `isdigit():` 是十进制数字否
5. 


## 上取整与下取整 
下取整
```cpp
a/b
```
上取整
```cpp
(a+b-1)/b
```

## 取余运算返回正值
```
(a % b + b) % b
```

## 取模运算
```
(a + b) % p = (a%p + b%p) %p
(a - b) % p = ((a%p - b%p) + p) %p
(a * b) % p = (a%p)*(b%p) %p
```

## memset——对数组每个元素赋值
> 常用搜索中的还原数组
```
#include <algorithm>
// 假设数组已经用过需要全部归1
memset(a,1,sizeof(a);
```
