#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//数据类型
//内置类型：字符型（char），整型（int,short（短整型）,long（长整型）,long long（更长的整型））,浮点型（float（单精度浮点数）,double（双精度浮点数）），布尔类型（_Bool）
//自定义类型：数组，结构体（struct），枚举（enum），联合体（union）

//#include <stdbool.h>//使用布尔类型
//int main()
//{
//	////字符型：
//	//char a = 'a';//char(character)创建字符型变量a并初始化和赋值字符'a'
//	//[signed] char b = 'b';//有符号的字符类型
//	//unsigned char c = 'c';//⽆符号的字符类型
//	
//	////整型：
//	////短整型
//	//short d = 0;//短整型
//	//[signed] short e = 0;//有符号短整型（可省略signed，默认有符号）
//	//unsigned short f = 0;//无符号短整型
//	////整型
//	//int g = 0;//整型
//	//[signed] int h = 0;//有符号整型（可省略signed，默认有符号）
//	//unsigned int i = 0;//无符号整型
//	////⻓整型
//	//long j = 0;//长整型
//	//[signed] long k = 0;//有符号长整型（可省略signed，默认有符号）
//	//unsigned long l = 0;//无符号长整形
//	////更⻓的整型
//	////C99中引⼊
//	//long long m = 0;//更长的整型
//	//[signed] long long n = 0;//有符号更长的整型（可省略signed，默认有符号）
//	//unsigned long long o = 0;//无符号更长的整型
//
//	////浮点型：
//	//float p = 0.0;//单精度浮点型
//	//double q = 0.00;//双精度浮点型
//	//long double r = 0.00;//更高精度的浮点型（C99中引入）
//  //注意：小数在内存中可能无法精确保存 
//
//	////布尔类型（_Bool）：（C99中引入）专⻔表⽰真假的类型，使⽤需要包含头⽂件 <stdbool.h>。布尔类型中true表示真，false表示假
//	////关于C语言真假的判断：0表示假，非0表示真，如：-1表示真
//	//_Bool flag = true;//定义布尔类型变量flag并赋值为true，为了表示方便布尔类型也可以写作bool
//	//if (flag)//这里使用了if语句，如果flag的值为真，那么打印"真"
//	//	printf("真\n");
//
//	////各种数据类型的⻓度：
//	////sizeof计算的是变量/类型所占空间的大小，单位是字节
//	////计算机存储最小单位-比特位（Bit），1 Byte（字节）=8 Bit  1 KB（千字节）=1024 Byte  1 MB（兆字节）=1024 KB ……GB,TB,PB……
//	//int a = 10;
//	//printf("sizeof(a)=%zd\n", sizeof(a));
//	//printf("sizeof(int)=%zd\n", sizeof (int));
//	//printf("sizeof a=%zd\n", sizeof a);//当sizeof后面是变量时，可以省略括号，但数据类型不行，如不能省略int的括号
//	//////结果：
//	////sizeof(a) = 4
//	////sizeof(int) = 4
//	////sizeof a = 4
//	//////总结：
//	////1. sizeof 的操作数如果不是类型，是表达式的时候，可以省略掉后边的括号的。
//	////2. sizeof 后边的表达式是不真实参与运算的，根据表达式的类型来得出⼤⼩。
//	////3. sizeof 的计算结果是 size_t 类型的。
//	//printf("sizeof(char)=%zd\n", sizeof(char));//计算char这种变量可以向计算机申请多少字节的内存
//	//printf("sizeof(short)=%zd\n", sizeof(short));
//	//printf("sizeof(int)=%zd\n", sizeof(int));
//	//printf("sizeof(long)=%zd\n", sizeof(long));
//	//printf("sizeof(long long)=%zd\n", sizeof(long long)); 
//	//printf("sizeof(float)=%zd\n", sizeof(float));
//	//printf("sizeof(double)=%zd\n", sizeof(double));
//	//printf("sizeof(long double)=%zd\n", sizeof(long double));
//	//printf("sizeof(bool)=%zd\n", sizeof(bool));
//	//////结果：
//	////sizeof(char) = 1
//	////sizeof(short) = 2
//	////sizeof(int) = 4
//	////sizeof(long) = 4//C语言标准规定：sizeof(long) >= sizeof(int)，sizeof(long)可以取4，也可以取8（不同编译器）
//	////sizeof(long long) = 8
//	////sizeof(float) = 4
//	////sizeof(double) = 8
//	////sizeof(long double) = 8
//	////sizeof(bool) = 1
//	//////总结：
//	////1. sizeof 运算符的返回值，C 语⾔只规定是⽆符号整数，并没有规定具体的类型，⽽是留给系统⾃⼰去决定， sizeof 到底返回什么类型。不同的系统中，返回值的类型有可能是
//	//// unsigned int ，也有可能是 unsigned long ，甚⾄是 unsigned long long ，对应的 printf() 占位符分别是% u 、% lu 和% llu 。这样不利于程序的可移植性。
//	////2. C语⾔提供了⼀个解决⽅法，创造了⼀个类型别名 size_t ，⽤来统⼀表⽰ sizeof 的返回值类型。
//	//// 对应当前系统的 sizeof 的返回值类型，可能是 unsigned int ，也可能是unsigned long long 。
//
//	return 0;
//}

//signed和unsigned
//signed：用来定义表⽰⼀个类型（字符型和整型）带有正负号，包含负值。对于 int 类型，默认是带有正负号的，也就是说 int 等同于 signed int
//unsigned：表⽰该类型（字符型和整型）不带有正负号，只能表⽰零和正整数

//int main()
//{
//	//signed int a = 0;
//	//int b = 0;//这里int默认定义有符号整型，可以省略signed
//	//unsigned int c = 0;//定义无符号整型变量c，unsigned不能省略
//	
//	//printf("a,b,c均为0时（a,b为有符号整型，c为无符号整型）：\n");
//	//printf("a=%d\n", a);
//	//printf("b=%d\n", b);
//	//printf("c=%u\n", c);
//
//	//a = 10;
//	//b = 10;
//	//c = 10;
//	//printf("a,b,c均为正数10时（a,b为有符号整型，c为无符号整型）：\n");
//	//printf("a=%d\n", a);
//	//printf("b=%d\n", b);
//	//printf("c=%u\n", c);
//
//	//a = -10;
//	//b = -10;
//	//c = -10;
//	//printf("a,b,c均为负数-10时（a,b为有符号整型，c为无符号整型）：\n");
//	//printf("a=%d\n", a);
//	//printf("b=%d\n", b);
//	//printf("c=%u\n", c);//结果：c=4294967286，所以将负数赋值给无符号整型绝对不是失去符号这么简单，这与负数在计算机中的存储有关
//
//	////整数变量声明为 unsigned 的好处是，同样⻓度的内存能够表⽰的最⼤整数值，增⼤了⼀倍
//	//a = 2147483647;//2147483647为2^31-1为整型4字节32比特位中存放的最大整数，详细参考原码，反码和补码
//	//b = 2147483648;
//	//c = 2147483648;//无符号整型最大值为4294967295，即2^32-1
//	//printf("a,b,c均为较大数字时（a,b为有符号整型，c为无符号整型）：\n");
//	//printf("a=%d\n", a);
//	//printf("b=%d\n", b);//结果：b=-2147483648，产生了溢出
//	//printf("c=%u\n", c);//结果：c= 2147483648，显示正常
//
//	//原码，反码和补码（以整型为例）
//	//整型占4个字节，即32个比特位，计算机用二进制存储数据，所以每一个比特位只有0和1两种类型
//	//正数以原码存储，负数以补码存储，其中正数原码、反码、补码相同
//	//有符号整型32个比特位中最高位为符号位（1为负值，0为正值），所以正数的最大值为2^31-1即0111 1111 1111 1111 1111 1111 1111 1111
//	//原码经过按位取反（所有比特位上将0变成1，将1变成0），补码在反码的基础上加上一
//	//上述有符号整型2147483647存储为0111 1111 1111 1111 1111 1111 1111 1111 ，加1后为1000 0000 0000 0000 0000 0000 0000 0000为负数-2147483648的补码
//
//	////字符类型 char 也可以设置 signed 和 unsigned
//	//signed char d; // 范围为 -128 到 127
//	//unsigned char e; // 范围为 0 到 255
//	////注意：C 语⾔规定 char 类型默认是否带有正负号，由当前系统决定
//	////所以 char 不等同于 signed char ，它有可能是 signed char ，也有可能是unsigned char
//
//	return 0;
//}

//数据类型的取值范围

//最大最小值的定义可以查看<limits.h>中整型部分的定义，<float.h>中浮点型部分的定义
//#include<limits.h>
//#include<float.h>
// SCHAR_MIN ， SCHAR_MAX ：signed char 的最⼩值和最⼤值。
// SHRT_MIN ， SHRT_MAX ：short 的最⼩值和最⼤值。
// INT_MIN ， INT_MAX ：int 的最⼩值和最⼤值。
// LONG_MIN ， LONG_MAX ：long 的最⼩值和最⼤值。
// LLONG_MIN ， LLONG_MAX ：long long 的最⼩值和最⼤值。
// UCHAR_MAX ：unsigned char 的最⼤值。
// USHRT_MAX ：unsigned short 的最⼤值。
// UINT_MAX ：unsigned int 的最⼤值。
// ULONG_MAX ：unsigned long 的最⼤值。
// ULLONG_MAX ：unsigned long long 的最⼤值。

//变量

//int global = 10;//全局变量-定义在代码块（{}）之外的变量-全局变量的使⽤范围更⼴，整个⼯程中想使⽤，都是有办法使⽤的
//int c;
//int main()
//{
//	////变量的创建和初始化：
//	//int a;//创建变量，格式为变量数据类型加上变量名
//	//int b = 0;//变量在创建的时候就给⼀个初始值，就叫初始化
//
//	////全局变量和局部变量：
//	//int local = 20;//局部变量-定义在代码块内部的变量-局部变量的使⽤范围是⽐较局限，只能在⾃⼰所在的局部范围（大括号{}）内使⽤的
//	//printf("c=%d\n", c);//全局变量不初始化默认为0
//	//printf("b=%d\n", b);//局部变量不初始化为随机值，但VS编译器不允许未初始化的变量进行打印
//
//	//printf("global=%d\n", global); //global=10
//	//int global = 30;//这里定义main函数内部的同名局部变量global
//	//{
//	//int global = 20;//全局变量和局部变量的名字建议不要相同，相同时局部变量优先
//	//printf("global=%d\n", global);//global=20
//	//}
//	//printf("global=%d\n", global); //global=30
//
//	//全局变量和局部变量在内存中的存储：
//	//变量存储相关内存中的三个区域：栈区、堆区、静态区
//	//1. 局部变量是放在内存的栈区
//	//2. 全局变量是放在内存的静态区
//	//3. 堆区是⽤来动态内存管理的
//
//	return 0;
//}

//算术操作符和赋值操作符：

//int main()
//{
//	////算术操作符（ + - * /（取模，即取余数））：
//	////+ 和 - 都是有2个操作数的，位于操作符两端的就是它们的操作数，这种操作符也叫双⽬操作符
//	//int a = 5 + 2;//加法运算，a取5除2的和
//	//printf("5+2=%d\n", a);
//	//int e = -5 + 2;
//	//printf("-5+2=%d\n", e);
//	//int b = 5 - 2;//减法运算，b取5除2的差
//	//printf("5-2=%d\n", b);
//	//int f = -5 - 2;
//	//printf("-5-2=%d\n", f);
//	//int k = 5 * 2;//乘法运算，k取5除2的积
//	//printf("5*2=%d\n", k);
//	//int l = -5 * 2;
//	//printf("-5*2=%d\n", l);
//	////除号的两端如果是整数，执⾏的是整数除法，得到的结果也是整数
//	////C语⾔⾥⾯的整数除法是整除，只会返回整数部分，丢弃⼩数部分
//	//int c = 5 / 2;//除法运算，c取5除2的商
//	//printf("5/2=%d\n",c);
//	//int g = -5 / 2;
//	//printf("-5/2=%d\n", g);
//	//float j = 0.0;
//	//j = 5 / 2.0;//如果希望得到浮点数的结果，两个运算数必须⾄少有⼀个浮点数
//	//printf("(float)5/2=%f\n", j);
//	//int d = 5 % 2;//取模运算，d取5除2的余数,只能⽤于整数，不能⽤于浮点数
//	//printf("5%%2=%d\n",d);
//	//int h = -5 % 2;//负数求模的规则是，结果的正负号由第⼀个运算数的正负号决定
//	//printf("-5%%2=%d\n", h);
//	//int i = 5 % -2;
//	//printf("5%%-2=%d\n", i);
//
//	////赋值操作符（赋值操作符'='和复合赋值）：
//	//int m = 100;//创建变量并初始化
//	//m = 200;//赋值，变量创建好后，再给⼀个值，叫赋值
//	//int n = 3;
//	//int o = 5;
//	//int p = 0;
//	//printf("连续赋值前：\nn=%d  o=%d  p=%d\n", n, o, p);
//	//p = o = n + 3;//连续赋值，从右向左依次赋值的。缺点：代码不容易理解
//	//printf("连续赋值后：\nn=%d  o=%d  p=%d\n", n, o, p);
//
//	////复合赋值符（+=  -+  *=  /=  >>=  <<=  &=  |=  ^= ）:
//	//int q = 0;
//	//int r = 0;
//	//q = q + 2;
//	//r += 2;
//	//printf("q=q+2=%d\n", q);
//	//printf("r+=2=%d\n", r);
//	//q = q - 1;
//	//r -= 1;
//	//printf("q=q-2=%d\n", q);
//	//printf("r-=2=%d\n", r);
//	//q = q * 6;
//	//r *= 6;
//	//printf("q=q*6=%d\n", q);
//	//printf("r*=6=%d\n", r);
//	//q = q / 3;
//	//r /= 3;
//	//printf("q=q/3=%d\n", q);
//	//printf("r/=3=%d\n", r);
//
//	return 0;
//}

//单⽬操作符和强制类型转换

//int main()
//{
//	////⼀些操作符只有⼀个操作数，被称为单⽬操作符。 ++、--、 + (正)、 - (负)就是单⽬操作符
//	//int a = 10;
//	//int b = 10;
//	//int c = a++;//后置++，先使用a值，然后a自增
//	//int d = ++b;//前置++，a值先自增，后使用a值
//	//printf("a=%d  b=%d  c=%d  d=%d\n", a, b, c, d);//输出结果：a=11  b=11  c=10  d=11
//	//int e = 10;
//	//int f = 10;
//	//int g = e--;//后置--，先使用a值，然后a自减
//	//int h = --f;//前置--，a值先自减，后使用a值
//	//printf("e=%d  f=%d  g=%d  h=%d\n", e, f, g, h);//输出结果：e=9  f=9  g=10  h=9
//
//	////运算符 + 对正负值没有影响，是⼀个完全可以省略的运算符，但是写了也不会报错
//	////运算符 - ⽤来改变⼀个值的正负号，负数的前⾯加上 - 就会得到正数，正数的前⾯加上 - 会得到负数
//	//int i = 10;
//	//int j = +10;
//	//printf("i=%d  j=%d\n", i, j); //输出结果：i=10  j=10
//	//int k = 10;
//	//int l = -k;
//	//int m = -l;
//	//printf("k=%d  l=%d  m=%d\n", k, l, m); //输出结果：k=10  l=-10  m=10
//
//	////强制类型转换：（在需要转换的数据前面加上括号和转换之后的类型，如：(int)）
//	////缺点：有可能会损失数据精度
//	//int n = (int)3.14;//变量n的数据类型是int类型, 数值3.14是double类型，两边的类型不⼀致，编译器会报警告,为了消除这个警告，我们可以使⽤强制类型转换
//	//printf("n=%d\n", n);
//
//	return 0;
//}

//printf函数

//int main()
//{
//	////printf() 的作⽤是将参数⽂本输出到屏幕。它名字⾥⾯的 f 代表 format （格式化），表⽰可以定制输出⽂本的格式，printf() 是在标准库的头⽂件 stdio.h 定义的
//	//printf("Hello World"); //printf() 不会在⾏尾⾃动添加换⾏符，运⾏结束后，光标就停留在输出结束的地⽅，不会⾃动换⾏。
//	//printf("Hello World\n");//添加⼀个换⾏符 \n 来用来换行
//	//printf("Hello\nWorld\n");//如果⽂本内部有换⾏，也是通过插⼊换⾏符来实现
//
//	////printf() 可以在输出⽂本中指定占位符：
//	//printf("There are %d apples\n", 3);//这里%d就是占位符，表⽰这个位置要⽤其他值来替换，占位符的第⼀个字符⼀律为百分号 % ，第⼆个字符表⽰占位符的类型
//	//printf("%s will come tonight\n", "zhangsan");//%s 表⽰代⼊的是字符串
//	//printf("%s says it is %d o'clock\n", "lisi", 21);//输出⽂本⾥⾯可以使⽤多个占位符
//
//	////printf() 参数与占位符是⼀⼀对应关系，如果有 n 个占位符， printf() 的参数就应该有 n + 1 个。如果参数个数少于对应的占位符， printf() 可能会输出内存中的任意值
//	//printf("%d %d %d %s %c %p", 1);
//
//	//占位符列举：
//	// %a ：⼗六进制浮点数，字⺟输出为⼩写。
//	// %A ：⼗六进制浮点数，字⺟输出为⼤写。
//	// %c ：字符。
//	// %d ：⼗进制整数。
//	// %e ：使⽤科学计数法的浮点数，指数部分的 e 为⼩写。
//	// %E ：使⽤科学计数法的浮点数，指数部分的 E 为⼤写。
//	// %i ：整数，基本等同于%d 。
//	// %f ：⼩数（包含 float 类型和 double 类型）。
//	// %g ：6个有效数字的浮点数。整数部分⼀旦超过6位，就会⾃动转为科学计数法，指数部分的 e为⼩写。
//	// %G ：等同于% g ，唯⼀的区别是指数部分的 E 为⼤写。
//	// %hd ：⼗进制 short int 类型。
//	// %ho ：⼋进制 short int 类型。
//	// %hx ：⼗六进制 short int 类型。
//	// %hu ：unsigned short int 类型。
//	// %ld ：⼗进制 long int 类型。
//	// %lo ：⼋进制 long int 类型。
//	// %lx ：⼗六进制 long int 类型。
//	// %lu ：unsigned long int 类型。
//	// %lld ：⼗进制 long long int 类型。
//	// %llo ：⼋进制 long long int 类型。
//	// %llx ：⼗六进制 long long int 类型。
//	// %llu ：unsigned long long int 类型。
//	// %Le ：科学计数法表⽰的 long double 类型浮点数。
//	// %Lf ：long double 类型浮点数。
//	// %n ：已输出的字符串数量。该占位符本⾝不输出，只将值存储在指定变量之中。
//	// %o ：⼋进制整数。
//	// %p ：指针。
//	// %s ：字符串。
//	// %u ：⽆符号整数（unsigned int）。
//	// %x ：⼗六进制整数。
//	// %zd ： size_t 类型。
//	// %% ：输出⼀个百分号。
//
//	////printf() 可以定制占位符的输出格式:
//	////限定占位符的最⼩宽度:
//	//printf("%5d %5d\n", 123, 456);// %5d 表⽰这个占位符的宽度⾄少为5位。如果不满5位，对应的值的前⾯会添加空格，默认为右对齐
//	//printf("%-5d %-5d\n", 123, 456);//如果希望改成左对⻬，在输出内容后⾯添加空格，可以在占位符的% 的后⾯插⼊⼀个 - 号
//	//printf("%2d %-2d\n", 12345, 67890);//只限定最小宽度，如果超出，也会全部打印
//	////对于⼩数，这个限定符会限制所有数字的最⼩显⽰宽度：
//	//printf("%20f\n", 123.45);//%f默认输出小数点后六位，小数点也算一位
//
//	////默认情况下， printf() 不对正数显⽰ + 号，只对负数显⽰ - 号。如果想让正数也输出 + 号，可以在占位符的% 后⾯加⼀个 + ，即 %+d 可以确保输出的数值，总是带有正负号
//	//printf("%+d\n", 12); // 输出 +12
//	//printf("%+d\n", -12); // 输出 -12
//
//	////限定⼩数位数：
//	////输出⼩数时，有时希望限定⼩数的位数。如：希望⼩数点后⾯只保留两位，占位符可以写成 % .2f
//	//printf("Number is %.2f\n", 0.5);
//	//printf("%.2f\n", 0.4999);//会四舍五入
//	//printf("%.2f\n", 0.5049);
//	//printf("%6.2f\n", 0.5);//这种写法可以与限定宽度占位符，结合使⽤
//
//	////最⼩宽度和⼩数位数这两个限定值，都可以⽤ * 代替，通过 printf() 的参数传⼊
//	//printf("%*.*f\n", 6, 2, 0.5);
//
//	////输出部分字符串：
//	////%s 占位符⽤来输出字符串，默认是全部输出。如果只想输出开头的部分，可以⽤ %.[m]s 指定输出的⻓度，其中[m] 代表⼀个数字，表⽰所要输出的⻓度。
//	//printf("%.5s\n", "hello world");
//	//printf("%.4s\n", "nice to meet you");
//
//	return 0;
//}

//scanf函数

//int main()
//{
//	//int score = 0;
//	//printf("请输⼊成绩:");
//	//scanf("%d", &score);//输入数据-使用输入函数scanf，取地址符号&，表示将键盘输入的值存储到&后面的变量中
//	////Error: 'scanf': This function or variable may be unsafe.Consider using scanf_s instead.To disable deprecation, use _CRT_SECURE_NO_WARNINGS.See online help for details
//	////scanf是C语言标准库提供的，具有跨平台性/可移植性，而scanf_s不是标准C语言提供的，是VS编译器提供的，VS编译器认为scanf不安全，提供了scanf_s函数，在其它编译器上无法运行
//	////使用“_CRT_SECURE_NO_WARNINGS”来取消此警告
//	//printf("成绩是：%d\n", score);
//
//	////scanf为什么不安全：
//	//char arr[6] = { 0 };//创建字符型数组arr并初始化
//	//scanf("%s", arr);//给数组输入内容,数组命本身就是地址，所以可以省略取地址符号
//	////这里一旦输入比arr数组容量多的字符，就会发生越界访问，导致程序崩溃，因此scanf有一定不安全的地方，就是不会检测应该输入多少内容
//	//printf("%s\n", arr);//输出数组内的内容
//
//	////基本用法：
//	////scanf() 函数⽤于读取⽤⼾的键盘输⼊，是在标准库的头⽂件 stdio.h 定义的
//	////程序运⾏到这个语句时，会停下来，等待⽤⼾从键盘输⼊。⽤⼾输⼊数据、按下回⻋键后， scanf() 就会处理⽤⼾的输⼊，将其存⼊变量。
//	////第⼀个参数是⼀个格式字符串，⾥⾯会放置占位符（与 printf() 的占位符基本⼀致），告诉编译器如何解读⽤⼾的输⼊，需要提取的数据是什么类型
//	////因为 C 语⾔的数据都是有类型的， scanf() 必须提前知道⽤⼾输⼊的数据类型，才能处理数据。
//	////它的其余参数就是存放⽤⼾输⼊的变量，格式字符串⾥⾯有多少个占位符，就有多少个变量
//	////变量（指针变量除外）前面必须包含取地址符号&，数组可以省略，因为 scanf() 传递的不是值，⽽是地址
//	//int a = 0;
//	//char arr[10] = {0};
//	//scanf("%d%s", &a, arr);//scanf() 处理数值占位符时，会⾃动过滤空⽩字符，包括空格、制表符、换⾏符等
//	//printf("a=%d arr[10]=%s\n", a, arr);
//	////⽤⼾输⼊的数据之间，有⼀个或多个空格不影响 scanf() 解读数据。另外，⽤⼾使⽤回⻋键，将输⼊分成⼏⾏，也不影响解读
//	////解读⽤⼾输⼊时，会从上⼀次解读遗留的第⼀个字符开始，直到读完缓存，或者遇到第⼀个不符合条件的字符为⽌
//
//	////scanf的返回值：
//	////scanf() 的返回值是⼀个整数，表⽰成功读取的变量个数。
//	////如果没有读取任何项，或者匹配失败，则返回 0 。如果在成功读取任何数据之前，发⽣了读取错误或者遇到读取到⽂件结尾，则返回常量 EOF(-1)
//	//int b = 0;
//	//int c = 0;
//	//int d = 0;
//	//int ret = 0;
//	//ret = scanf("%d%d%d", &b, &c, &d);
//	//printf("ret %d b=%d c=%d d=%d\n", ret, b, c, d);
//
//	////计算多组数据之和
//	//int m = 0;
//	//int n = 0;
//	//int sum = 0;
//	//while (scanf("%d%d", &m, &n) == 2)//这里使用while循环，如果scanf正确读取到两个数字，那么执行循环，如果需要结束输⼊，在VS环境中按3次 ctrl+z ，或者输入与不匹配的数据类型
//	//{
//	//	sum = m + n;
//	//	printf("sum=%d\n", sum);
//	//}
//
//	////scanf() 常⽤的占位符如下，与 printf() 的占位符基本⼀致。
//	//// % c ：字符。
//	////所有占位符之中，除了% c 以外，都会⾃动忽略起⾸的空⽩字符。% c 不忽略空⽩字符，总是返回当前第⼀个字符，⽆论该字符是否为空格。
//	////如果要强制跳过字符前的空⽩字符，可以写成 scanf(" %c", &ch) ，即% c 前加上⼀个空格，表⽰跳过零个或多个空⽩字符。
//	//char e = 0;
//	//scanf(" %c", &e);
//	//printf("e=%c\n", e);
//	//// % d ：整数。
//	//// % f ： float 类型浮点数。
//	//// % lf ： double 类型浮点数。
//	//// % Lf ： long double 类型浮点数。
//	//// % s ：字符串。
//	////占位符% s ，它其实不能简单地等同于字符串。它的规则是，从当前第⼀个⾮空⽩字符开始读起，直到遇到空⽩字符（即空格、换⾏符、制表符等）为⽌。
//	////因为% s 不会包含空⽩字符，所以⽆法⽤来读取多个单词，除⾮多个% s ⼀起使⽤。这也意味着，scanf() 不适合读取可能包含空格的字符串，⽐如书名或歌曲名。
//	////另外， scanf() 遇到% s 占位符，会在字符串变量末尾存储⼀个空字符 \0 。
//	//char arr1[10] = { 0 };
//	//char arr2[10] = { 0 };
//	//char arr3[10] = { 0 };
//	//scanf("%s %s %s", arr1, arr2, arr3);
//	//printf("%s %s %s\n", arr1, arr2, arr3);
//	//// % [] ：在⽅括号中指定⼀组匹配的字符（⽐如% [0 - 9] ），遇到不在集合之中的字符，匹配将会停⽌。
//	////scanf() 将字符串读⼊字符数组时，不会检测字符串是否超过了数组⻓度。所以，储存字符串时，很可能会超过数组的边界，导致预想不到的结果。
//	////为了防⽌这种情况，使⽤ % s 占位符时，应该指定读⼊字符串的最⻓⻓度，即写成 % [m]s ，其中的[m] 是⼀个整数，表⽰读取字符串的最⼤⻓度，后⾯的字符将被丢弃。
//	//char name[11];
//	//scanf("%10s", name);
//	//printf("name[11]=%s\n", name);
//	
//	////赋值忽略符
//	////作用：⽤⼾的输⼊可能包含不符合预定的格式，而scanf要求输入格式相同
//	////scanf() 提供了⼀个赋值忽略符（assignment suppression character） *  只要把* 加在任何占位符的百分号后⾯，该占位符就不会返回值，解析后将被丢弃
//	//int year = 0;
//	//int month = 0;
//	//int day = 0;
//	//printf("请输入年月日：");
//	//scanf("%d%*c%d%*c%d", &year, &month, &day);//这里三个输入值之间可以用任意字符隔开,输入会自动忽略中间的字符格式数据
//	//printf("%d %d %d\n", year, month, day);
//
//	return 0;
//}
