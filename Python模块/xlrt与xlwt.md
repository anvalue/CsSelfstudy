# xlrd——读入excel

> import xlrd



> data = xlrd.open_workbook("excel.xls")

## 1.关于工作表对象

- ```python
  print(data.sheet_loaded(0))
  
  data.unload_sheet(0)
  
  print(data.sheet_loaded(0))
  
  print(data.sheet_loaded(1))
  
  print(data.sheets()) # 获取输出操作表中的工作表sheet下标
  
  print(data.sheets()[0]) # 获取第一个工作表对象
  
  print(data.sheet_by_index(0))# 根据索引获取工作表
  
  print(data.sheet_by_name('Sheet1')) # 根据名称获取工作表
  
  print(data.sheet_names()) # 打印工作表名称
  
  print(data.nsheets) # 返回excel工作表数量
  ```

  





## 2.操作工作表的行

- ```python
  sheet = data.sheet_by_index(0) # 指向第一个工作表
  
  print(sheet.nrows) # 获取sheet的有效行数
  
  
  
  print(sheet.row(0)) # 输出第一行的数据 !!! 注意是row(0) 不是row[0]
  
  # 输出：[text:'序号', text:'学生姓名', empty:'']
  
  print(sheet.row(0)[1]) # 输出第一行第二列的 类型:值
  
  # 输出：text:'学生姓名'
  
  print(sheet.row(0)[1].value) # 与上面一行相比，只输出值
  
  # 输出：学生姓名
  
  print(sheet.row_values(1)) # 得到指定行单元格的值
  
  # 输出：[19020101.0, '毕佳嘉', '']
  
  
  
  print(sheet.row_types(2)) # 获取单元格数据类型
  
  # 输出：array('B', [2, 1, 0])
  
  
  
  print(sheet.row_len(1)) # 得到单元格的长度
  
  # 输出：3
  ```

  







## 3.操作工作表的列

- ```python
  sheet = data.sheet_by_index(0) # 拿到第一个工作表
  
  print(sheet.ncols) # 拿到工作表的总列数
  
  print(sheet.col(1)) # 拿到第二列的 数据类型:数据
  
  print(sheet.col(0)[1].value) # 只拿第一列，第二个数
  
  print(sheet.col_values(1)) # 只拿第二列的所有数
  
  print(sheet.col_types(1)) # 输出第二列的数的数据类型
  ```





## 4.操作工作表中的单元格

- ```python
  sheet = data.sheet_by_index(0) #拿到第一个工作表
  
  print(sheet.cell(1,1)) # 输出第二行第二列的单元格 数据类型：数据
  
  print(sheet.cell_type(1,1)) # 输出二行二列的数据类型
  
  print(sheet.cell(1,1).ctype) # 输出二行二列的数据类型
  
  print(sheet.cell(1,1).value) # 输出二行二列的数据
  ```



# xlwt——写入excel

![](https://gitee.com/constsheng/imgcurl/raw/master/img/20210308233425.png)

## 1. 创建工作薄

- ```python
  wb = xlwt.Workbook("2019-CNY.xls")
  # 或者
  wb = xlwt.Workbook()
  ```



##  2. 创建工作表

- ```python
  ws = wb.add_sheet("CNY")
  f = wb.add_sheet('class')
  ```



## 3. 填充工作表内容

- ```python
  # 直接填充
  ws.write(0,0,'姓名')
  
  ws.write(0,1,'班级')
  
  ws.write(0,2,'学号')
  
  ws.write(0,3,'性别')
  
  #for填充
  raw = ['姓名','班级','学号','性别']
  for i in range(len(raw)):
      f.write(2,i,raw[i])
  ```

  

## 4. 保存文件

- ```python
  wb.save("2019-CNY.xls")
  wb.save('class02.xls')
  ```

  

