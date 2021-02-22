# String

## 初始化：

- ```c++
  string s1; // 默认初始化，s1是一个空字符串
  string s2 = s1; // s2是s1的副本
  string s3 = "hiya"; // s3是该字符串字面值的副本
  string s4(10,'c'); // s4的内容是cccccccccc,即10个c
  ```

## string上的操作：

### 1. string读写

- ```c++
  //string s1,s2;
  //1.读入(不能读入空格的形式)——cin >> string;
  //2.读入(能读入空格的形式)——getline(cin,string);
  cin >> s1 >> s2; //读入
  getline(cin,string);//读入
  /*注意不能用scanf()读入*/
  cout << s1 << s2;//输出
  printf("%s",s1.c_str());//输出
  puts(s1.c_str());//输出
  
  ```

### 2.empty() 与 size()

- ```c++
  //string s1="123",s2;
  s1.empty();//返回 0
  s2.empty();//返回 1；
  // empty();空则返回1，非空返回0
  
  s1.size();//返回长度
  ```

### 3. string 比较

- > 支持 > < >= <= == !=等所有比较操作，按字典序进行比较。

### 4. string 赋值

- ```c++
  string s1 = "hello",s2 = "world\n";
  string s3 = s1 + s2;//成立
  string s4 = s1 + "," + s2 + ‘\n’;//成立
  string s5 = s1 + "world\n";//成立
  string s6 = "hello" + s2;//成立
  string s7 = "hello" + "world\n";//不成立
  
  ```

  > 当把string对象和字符字面值及字符串字面值混在一条语句中使用时，必须确保每个加法运算符的两侧的运算对象至少有一个是string

### 5. 处理string 对象中的字符

- ```c++
  //两种遍历
  for(int i = 0; i < s.size(); i++ )
  for(char c : s ) //c 相当于 str[i];此时改变 c 不改变 str[i]
  for(char &c : s )//改变c的时候改变str[i]
  for(auto c : s ) // 让编译器去猜要遍历的是那种类型
  
  
  //
  ```


## 小结

- ```c++
  赋值运算符： = 将后面的字符串赋值给前面的字符串O(n)
  比较运算符： == != > >= <= 比较的是两个字符串的字典序大小 O(n)
  连接运算符： += + 将一个运算符加到另一个运算符后面 O(n)
  
  s[index] //返回字符串s中下标为index的字符，string中下标也是从0开始 O(1)
  s.substr(p,n); //返回从s的下标p开始的n个字符串组成的字符串，如果n省略就取到底O(n)
  s.length();//返回字符串的长度
  s.empty();//判断s是否为空，空返回1，不空返回0
  s.erase(p0,len);//删除s中从p0开始的len个字符，如果len省略就删到底
  s.erase(s.begin()+i) 删除下标为i个字符
  s1.insert(p0,s2,pos,len) //后两个参数截取s2，可以胜率
  s.insert(p0,n,c) //在p0处插入n个字符c
  s1.replace(p0,len0,s2,pos,len) //删除p0开始的len0个字符，然后再p0处插入串s2中从pos开始的len个字符，后两个参数可以深绿
  s1.find(s2,pos); //从前往后，查找成功时返回第一次出现的下标，失败返回string::npos的值(-1)
  s1.rfind(s2,pos);//从pos开始从后向前查找字符串s2中字符串在当前串后边第一次出现的下标
  ```

  