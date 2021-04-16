# 基础小知识
> y总云：基础并不意味简单

## 一些函数
1. `getline(cin,string)`:
> 输入字符串string

2. `sscanf()：读取格式化输入`:
> sscanf(line.c_str(),"%d:%d:%d %d:%d:%d (+%d)",&h1,&m1,&s1,&h2,&m2,&s2,&d);



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
![[Recording 20210413223730.webm]]
