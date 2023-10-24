#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//函数调用操作符

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//()-函数调用操作符
//	printf("%d\n", sum);
//
//
//	return 0;
//}

//常见关键字
//case char goto const if int long register return sizeof auto break extern float for static struct switch typedef union unsigned continue default do double else enum short signed void volatile while

//int main()
//{
//	//auto int a = 10;//局部变量-自动变量（自动创建，自动销毁），前面auto可以省略
//	//register int b = 10;//建议把变量b放入寄存器
//	//signed int c = 10;//int定义的是有符号数，signed可以省略
//	//unsigned int d = 10;//unsigned定义无符号数
//	////struct-结构体关键字 union-联合体/共用体  自定义变量不能与关键字冲突
//
//	////typedef-类型定义-类型重定义
//	//typedef unsigned int u_int;//利用typedef函数将unsigned int重定义为u_int(相当于重命名)
//	//u_int a = 20;
//
//	return 0;
//}

////static修饰局部变量，使其在作用域之外不销毁，延长了该变量的生命周期

//void test()
//{
//	//int a = 1;//此处a为临时的局部变量，在每次test执行结束后自动销毁
//	static int a = 1;//由于使用static，a是一个静态的局部变量，不会在函数结束后被销毁
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

////static修饰全局变量

//int main()
//{
//	extern int wb;
//	printf("wb=%d\n",wb);
//	//extern int wb2;//变量wb2在extern.c中被static函数修饰，无法跨文件引用
//	//printf("wb2=%d\n",wb2);//无法解析的外部符号 wb2
//
//}

////static修饰外部函数

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	printf("请输入两个相加数\n");
//	scanf("%d%d",&num1,&num2);
//	extern int Add(int, int);//声明外部函数并说明参数数据类型
//	int sum = Add(num1,num2);
//	printf("相加结果是%d\n",sum);
//	return 0;
//}

////#define定义常量和宏

//#define MAX 100//利用#define定义的标识符常量，将MAX定义为100
//int main()
//{
//	//int a = MAX;
//	//printf("a=%d",a);
//	return 0;
//}

//#define MAX(x,y) (x>=y?x:y)//#define定义宏
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);//宏的方式
//	printf("max=%d\n", max);
//	return 0;
//}

//指针

//int main()
//{
//	//int a = 10;//向内存申请四个字节
//	//printf("%p\n",&a);//%p用来打印地址，其中&a取地址
//	//int* p = &a;//变量p用来存放a的地址-称为指针变量,int*表示这是一个指针变量
//	//printf("%p\n",p);
//	//*p = 20;//*为解引用操作符，此处表示通过解引用p的地址找到a的值，并更改为20
//	//printf("a=%d\n",a);
//
//	//char ch = 'b';
//	//char* pc = &ch;
//	//printf("ch=%c\n",ch);
//	//*pc = 'a';
//	//printf("ch=%c\n",ch);
//
//	////指针变量的大小
//	//printf("%d\n", sizeof(int*));
//	//printf("%d\n", sizeof(char*));
//	//printf("%d\n", sizeof(short*));
//	//printf("%d\n", sizeof(long*));
//	//printf("%d\n", sizeof(long long*));
//	//printf("%d\n", sizeof(float*));
//	//printf("%d\n", sizeof(double*));
//	////输出结果，32位机器内存占用32个比特位，即4个字节，64位加强占用64个比特位，即8个字节
//
//	return 0;
//}
