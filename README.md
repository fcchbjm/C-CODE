[第1讲：C语言常见概念.pdf](https://github.com/fcchbjm/C-CODE/files/13538209/1.C.pdf)# C-CODE
The notes of C-code learning

这是我自学C语言的笔记，每段代码之间用回车键隔开并添加注释，去掉相应代码段的注释后即可正常运行，可以自行尝试，相信你结合注释一定能看懂


[2023/11/23]所有文件正在重构


**索引**


# C-CODE 01   C语⾔常⻅概念 
https://github.com/fcchbjm/C-CODE/blob/main/C-CODE%2001

**1.1 基本**

**1.2 数据类型**

**1.3 C语言关键字和ASCII编码**

1.3.1 常见关键字（32个）

1.3.2 ASCII 编码

**1.4 字符、字符串和\0**

1.4.1 字符、字符串和'\0'

1.4.2 strlen函数

**1.5 转义字符**

**1.6 语句和语句分类**

1.6.1 空语句 表达式语句 函数调⽤语句 复合语句 控制语句

1.6.2 C语言中的注释


# C-CODE 02   C语⾔数据类型和变量 
https://github.com/fcchbjm/C-CODE/blob/main/C-CODE%2002

**2.1 数据类型**

2.1.1 字符型

2.1.2 整型

2.1.3 浮点型

2.1.4 布尔类型

2.1.5 数据类型的⻓度和sizeof

**2.2 signed和unsigned**

2.2.1 signed和unsigned

2.2.2 unsigned的优点和原码，反码及补码

**2.3 数据类型的取值范围** 

**2.4 变量**

2.4.1 变量的创建和初始化

2.4.2 全局变量和局部变量

**2.5 算术操作符和赋值操作符**

2.5.1 算术操作符

2.5.2 赋值操作符

2.5.3 复合赋值符

**2.6 单⽬操作符和强制类型转换**

2.6.1 单⽬操作符

2.6.2 强制类型转换

**2.7 printf函数**

2.7.1 基本

2.7.2 占位符

2.7.3 占位符列举

2.7.4 限定占位符的最⼩宽度

2.7.5 限定⼩数位数

2.7.6 输出部分字符串

**2.8 scanf函数**

2.8.1 基本以及scanf为什么不安全

2.8.2 scanf的返回值

2.8.3 占位符

2.8.4 赋值忽略符


# C-CODE 03   分支与循环（1） 
https://github.com/fcchbjm/C-CODE/blob/main/C-CODE%2003

**3.1 if语句**

3.1.1 悬空else问题

3.1.2 关系操作符

3.1.3 条件操作符

3.1.4 逗号表达式

3.1.5 逻辑操作符

3.1.6 C语言中的“短路”

3.1.7 [尝试]判断一个数是否为奇数

3.1.8 [尝试]输出1~100之间的奇数

**3.2 switch语句**

**3.3 while循环**

**3.4 for循环**

**3.5 do while循环**

**3.6 break和continue语句**

**3.7 goto语句**


C-CODE 04   初识C语言（4）

4.1 结构体


C-CODE 05   分支与循环（1）

5.1 分支语句与循环语句

5.2 if语句

5.3 switch语句，常用于多分支语句

5.4 while语句

5.5 getchar语句


C-CODE 06   分支与循环（2）

6.1 while循环

6.2 for循环

6.3 do while循环

6.4 [尝试]计算n的阶乘

6.5 [尝试]计算：1！+2！+3！+……+9！+10！

6.6 [尝试]在一个有序数组中查找到某个具体的数字

6.7 [尝试]在一个有序数组中查找到某个具体的数字，运用二分查找算法

6.8 [尝试]显示效果：字符串从两端向中间显示

6.9 [尝试]编写代码实现,模拟用户登录情景,并且只能登录三次。(只允许输入三次密码,如果密码正确,则提示登录成功, 如果三次均输入错误, 则退出程序。


C-CODE 07   分支与循环（3）

7.1 [尝试]将三个数从大到小输出

7.2 [尝试]打印1~100之间所有3的倍数的数字

7.3 [尝试]给定两个数，求这两个数的最大公约数

7.4 [尝试]打印1000年~2000年之间的闰年

7.5 [尝试]打印100~200之间的素数

7.6 [尝试]数9的个数：数一下1~100之间所有的整数之间出现多少个数字9

7.7 [尝试]分数求和：计算1/1-1/2+1/3+……+1/99-1/100的结果

7.8 [尝试]求最大值：求十个整数中最大值

7.9 [尝试]乘法口诀表：在屏幕上输出9*9乘法口诀表

7.10 [尝试]猜数字游戏

7.11 goto语句


C-CODE 08   函数与递归（1）

8.1 函数的定义

8.2 [尝试]写一个函数可以判断一个数是不是素数

8.3 [尝试]写一个函数判断一年是不是闰年

8.4 [尝试]写一个函数实现一个整型有序数组的二分查找

8.5 [尝试]写一个函数，每调用一次这个r函数，就会使num的值增加1

8.6 函数的嵌套调用和链式访问

8.7 函数的声明和定义


C-CODE 09   函数与递归（2）

9.1 头文件，函数声明与定义

9.2 递归

9.3 [尝试]编写函数不允许创建临时变量，求字符串的长度


C-CODE 10   函数与递归（3）

10.1 递归与迭代

10.1.1 [尝试]用递归的方式求n的阶乘

10.1.2 [尝试]求第n个斐波那契数（不考虑溢出）

10.1.3 [尝试]汉诺塔问题

10.1.4 [尝试]青蛙跳台阶问题


C-CODE 11   数组（1）

11.1 一维数组的创建及初始化

11.2 sizeof与strlen的区别

11.3 一维数组在内存中的存储

11.4 二维数组的创建及初始化

11.5 二维数组在内存中的存储


C-CODE 12   数组（2）

12.1 数组作为函数参数

12.2 数组一般作为首元素的地址及两种例外

C-CODE 13   C语言实现三子棋（1）


**附件：**

1. ASCII可显示字符.png

2. ASCII控制字符.png
