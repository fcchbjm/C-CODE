#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//应用

//1.计算n的阶乘

////我的答案：
//int main()
//{
//	int i = 0;
//	int num = 0;
//	num = 1;
//	int n = 0;
//	printf("请输入需要计算阶乘的数字：");
//	scanf("%d", &n);
//	for (i = n; i != 0; i--)
//	{
//		num = num * i;
//	}
//	printf("%d的阶乘为：%d\n",n,num);
//	return 0;
//}

//2.计算：1！+2！+3！+……+9！+10！

////我的答案：
//int main()
//{
//	printf("题目：计算1！+2！+3！+……+9！+10!\n");
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	for (a = 1; a <= 10; a++)
//	{
//		for (c = 1,b = a; b != 0; b--)
//		{
//			c = c * b;
//		}
//		d = d + c;
//	}
//	printf("结果是：%d\n",d);
//	return 0;
//}

//3.在一个有序数组中查找到某个具体的数字

////我的答案：
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int n = 0;
//	int k = 0;
//	int i = 0;
//	printf("请输入你需要查找的数字：");
//	scanf("%d",&n);
//	for (i = 0;n!=arr[i];i++)
//	{
//		if (i >= 10)
//			break;
//	}
//	if (i < 10 && i>0)
//	{
//		k = i + 1;
//		printf("你所查找的数字%d在该数组中为第%d位", n, k);
//	}
//	else if (i >= 10)
//		printf("未找到该数字");
//	else
//		printf("error");
//	return 0;
//}

//4.在一个有序数组中查找到某个具体的数字，运用二分查找算法

////我的答案：
//int main()
//{
//	int arr[20] = { 0,1,2,3,4,5,6,7,8,9,11,12,13,14,15,16,17,18,19,20 };
//	int n = 0;
//	printf("请输入要查找的数字：");
//	scanf("%d",&n);
//	int num = sizeof(arr) / sizeof(arr[0]);//确定数组元素个数
//	int left = 0;//左下标
//	int right = num - 1;//右下标
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;//确定中间元素下标
//		if (n == arr[mid])
//		{
//			printf("你所要查找的数字%d在数组中为第%d位，下标为%d\n", n, mid + 1, mid);
//			break;
//		}
//		else if (n > arr[mid])
//			left = mid+1;
//		else if (n < arr[mid])
//			right = mid-1;
//		else
//			printf("error");
//	}
//	if (left > right)
//		printf("该数组中不包含要查找的数组%d",n);
//	return 0;
//}

//5.显示效果：字符串从两端向中间显示

////我的答案：
//#include <windows.h>
//#include <stdlib.h>
//int main()
//{
//	int a = 0;
//	char arr1[] = { "nice to see you!!!!!" };
//	char arr2[] = {"####################"};
//	printf("%s\n",arr2);
//	Sleep(500);//暂停0.5秒，Sleep函数S必须大写，括号内数组为毫秒数，同时需引用<windows.h>
//	system("cls");//system为执行系统命令的函数，括号内cls为清空屏幕，同时需引用<stdlib.h>
//	int b = sizeof(arr1) / sizeof(arr2[0])-2;
//	while (a <= b)
//	{
//		arr2[a] = arr1[a];
//		arr2[b] = arr1[b];
//		printf("%s\n", arr2);
//		a++;
//		b--;
//		Sleep(500);
//		system("cls");
//	}
//	printf("%s\n", arr1);
//	return 0;
//}

//6.编写代码实现,模拟用户登录情景,并且只能登录三次。(只允许输入三次密码,如果密码正确,则提示登录成功, 如果三次均输入错误, 则退出程序。

////我的答案：
//#include <string.h>
//int main()
//{
//	printf("欢迎注册！\n");
//	printf("请输入用户名：");
//	char username[20] = { 0 };
//	scanf("%s", &username);
//	printf("请输入密码：");
//	char password[20] = { 0 };
//	scanf("%s", &password);
//	printf("请确认密码：");
//	char password2[20] = { 0 };
//	scanf("%s", &password2);
//	if (strcmp(password , password2) == 0)//等号不能比较两个字符串是否相等，应当使用strcmp-string compare函数，相等为0，不相等为1，使用<string.h>
//		printf("密码设置成功！\n");
//	else
//	{
//		printf("密码输入不一致，设置失败。\n");
//		exit(1);
//	}
//	printf("欢迎登录！\n");
//	printf("请输入用户名：");
//	char username2[20] = { 0 };
//	scanf("%s",&username2);
//	if (strcmp(username , username2) == 0)
//	{
//		int n = 0;
//		for (n = 3; n > 0; n--)
//		{
//			printf("请输入密码：");
//			char password3[20] = { 0 };
//			scanf("%s", &password3);
//			if (strcmp(password3 , password) == 0)
//			{
//				printf("登录成功!\n");
//				break;
//			}
//			else if (n >= 2)
//			{
//				printf("密码错误，请重新输入，您还有%d次机会\n", n-1);
//			}
//			else
//			{
//				printf("密码输入次数过多，账户已冻结。\n");
//				exit(3);
//			}
//		}
//	}
//	else
//	{
//		printf("用户名输入错误或该用户不存在。\n");
//		exit(2);
//	}
//	return 0;
//}

//7.将三个数从大到小输出

//////我的答案：
////int main()
////{
////	printf("请输入需要比大小的三个整数：");
////	int a = 0;
////	int b = 0;
////	int c = 0;
////	scanf("%d%d%d", &a, &b, &c);
////	if (a >= b)
////	{
////		if (a >= c)
////		{
////			if (b >= c)
////				printf("这三个整数从大到小分别是：%d %d %d\n", a, b, c);
////			else if (b < c)
////				printf("这三个整数从大到小分别是：%d %d %d\n", a, c, b);
////			else
////				printf("error");
////		}
////		else if (a < c)
////		{
////			if (c >= b)
////				printf("这三个整数从大到小分别是：%d %d %d\n", c, a, b);
////			else
////				printf("error");
////		}
////		else
////			printf("error");
////	}
////	else if (a < b)
////	{
////		if (a >= c)
////		{
////			if (b >= c)
////				printf("这三个整数从大到小分别是：%d %d %d\n", b, a, c);
////			else
////				printf("error");
////		}
////		else if (a < c)
////		{
////			if (b >= c)
////				printf("这三个整数从大到小分别是：%d %d %d\n", b, c, a);
////			else if (b < c)
////				printf("这三个整数从大到小分别是：%d %d %d\n", c, b, a);
////			else
////				printf("error");
////		}
////		else
////			printf("error");
////	}
////	else
////		printf("error");
////	return 0;
////}
////（另一种更优解）
//int main()
//{
//	printf("请输入需要比大小的三个整数：");
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int d = a;
//		a = b;
//		b = d;
//	}
//	if (a < c)
//	{
//		int d = a;
//		a = c;
//		c = d;
//	}
//	if (b < c)
//	{
//		int d = b;
//		b = c;
//		c = d;
//	}
//	printf("这三个整数从大到小分别是：%d %d %d\n", a, b, c);
//	return 0;
//}

//8.打印1~100之间所有3的倍数的数字

////我的答案：
//int main()
//{
//	int a = 0;
//	for (a = 1; a*3 <= 100; a++)
//	{
//		printf("%d\n", a*3);
//	}
//	return 0;
//}
////（另一种写法）
////int main()
////{
////	int a = 0;
////	for (a = 1; a <= 100; a++)
////	{
////		if (a % 3 == 0)
////			printf("%d\n", a);
////	}
////	return 0;
////}

//9.给定两个数，求这两个数的最大公约数

////我的答案：
//////（在编写过程中发现了最小公约数的求法）
////int main()
////{
////	int a = 0;
////	int b = 0;
////	int c = 0;
////	printf("请输入需要求最小公约数的两个整数：");
////	scanf("%d%d", &a, &b); 
////	for (c = 2; a % c != 0 || b % c != 0; c++)
////	{
////		if (c >= b || c >= a)
////		{
////			printf("%d和%d之间没有最小公约数。\n",a,b);
////			exit(1);
////		}
////	}
////	printf("%d和%d的最小公约数为%d", a, b, c);
////	return 0;
////}
////（咳咳，回归正题，最大公约数的求法）
////int main()
////{
////	int a = 0;
////	int b = 0;
////	int c = 0;
////	int d = 0;
////	int e = 0;
////	printf("请输入需要求最大公约数的两个整数：");
////	scanf("%d%d", &a, &b); 
////	if (a >= b)
////		c = a;
////	else if (a < b)
////		c = b;
////	else
////	{
////		printf("error");
////		exit(1);
////	}
////	for (d = c; d>=2; d--)
////	{
////		if (a % d == 0 && b % d == 0)
////		{
////			printf("%d和%d的最大公约数为%d", a, b, d);
////			exit(0);
////		}
////	}
////	printf("%d和%d之间没有最大公约数。\n", a, b);
////	exit(2);
////	return 0;
////}
////（另一种更优解（辗转相除法））
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入需要求最大公约数的两个整数：");
//	scanf("%d%d", &a, &b); 
//	while (c=a % b)
//	{
//		//c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("最大公约数为%d",b);
//	return 0;
//}

//10.打印1000年~2000年之间的闰年
//闰年定义：1.能被四整除，不能被100整除，2.能被400整除

////我的答案：
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0)||(year % 400 == 0))
//		{
//			printf("%d\n", year);
//			count++;
//		}
//	}
//	printf("在1000年到2000年之间一共有%d个闰年。",count);
//	return 0;
//}

//11.打印100~200之间的素数

//////我的答案：（试除法）
////int main()
////{
////	int i = 0;
////	int m = 0;
////	for (i = 100; i <= 200; i++)
////	{
////		int n = 0;
////		for (n = 2; n < i; n++)
////		{
////			if (i % n == 0)
////				break;
////		}
////		if (i == n)
////		{
////			printf("%d\n", i);
////			m++;
////		}
////	}
////	printf("在100到200之间一共有%d个素数。\n",m);
////	return 0;
////}
////另一种更优解
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int m = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int n = 0;
//		for (n = 2; n <= sqrt(i); n++)//sqrt()函数表示开平方，同时需要引用库函数<math.h>
//		{
//			if (i % n == 0)
//				break;
//		}
//		if (n > sqrt(i))
//		{
//			printf("%d\n", i);
//			m++;
//		}
//	}
//	printf("在100到200之间一共有%d个素数。\n", m);
//	return 0;
//}

//12.数9的个数：数一下1~100之间所有的整数之间出现多少个数字9

////我的答案：
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("从1~100之间有%d个数字9。\n",count);
//	return 0;
//}

//13.分数求和：计算1/1-1/2+1/3+……+1/99-1/100的结果

////我的答案：
//int main()
//{
//	double sum = 0.00;
//	double i = 0.00;
//	int n = 0;
//	int flag = 1;
//	for (n = 1; n <= 100; n++)
//	{
//		i = 1;
//		sum += flag*(i / n);
//		flag = -flag;
//	}
//	printf("1/1-1/2+1/3+……+1/99-1/100的结果为%lf。\n",sum);
//	return 0;
//}

//14.求最大值：求十个整数中最大值

////我的答案：
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	printf("请输入需要求最大值的十个整数：");
//	for (i = 0; i <= 9; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (i = 0; i <= 10; i++)
//	{
//		if (arr[i] >= max)
//			max = arr[i];
//	}
//	printf("这十个数的最大值为：%d\n", max);
//	return 0;
//}

//15.乘法口诀表：在屏幕上输出9*9乘法口诀表

////我的答案：
//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (a = 1; a <= 9; a++)
//	{
//		for (b = 1; b <= a; b++)
//		{
//			printf("%d*%d=%-2d ", a, b, a * b);//左对齐，在%后面加上数字表示空几位，正数为右对齐，负数为左对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}

//16.猜数字游戏

////我的答案：
//int dat = 0;
//int n = 0;
//void menu()
//{
//	printf("****************************************\n");
//	printf("*              猜数字游戏              *\n");
//	printf("****************************************\n");
//	printf("*              1.开始游戏              *\n");
//	printf("*              2.配置游戏              *\n");
//	printf("*              0.退出游戏              *\n");
//	printf("****************************************\n");
//}
//void config()
//{
//	printf("请输入尝试参数（默认5次）：");
//	scanf("%d", &dat);
//	if (dat >= 1)
//	{
//		printf("修改成功！\n");
//		n++;
//	}
//	else
//	{
//		printf("修改失败，已重置。\n");
//		dat = 0;
//	}
//}
//#include <stdlib.h>//使用srand函数和rand函数
//#include <time.h>//使用time函数
//#include <stdlib.h>//使用system函数
//void game()
//{
//	int num = 0;
//	int i = 0;
//	int guess = 0;
//	num = rand()%100+1;//这里生成1~100之间的随机数，由于rand函数生成0~32767之间的整数，因此需要进行数学运算确保生成数符合要求
//	printf("游戏已开始。\n");
//	for (i = 5; i >= 1; i--)
//	{
//		for (n; n >= 1; n--)
//		{
//			if (dat != 0)
//				i = dat;
//			else
//				break;
//		}
//		printf("请输入你猜测的数字（1~100之间的整数）：");
//		scanf("%d", &guess);
//		if (guess > num)
//		{
//			printf("你所猜测的数字过大。\n");
//			if (i == 1)
//			{
//				system("cls");
//				printf("很遗憾，尝试次数已耗尽，再来一次吧。\n");
//				break;
//			}
//			else
//			printf("加油，你还有%d次机会。\n", i - 1);
//		}
//		else if (guess < num)
//		{
//			printf("你所猜测的数字过小。\n");
//			if (i == 1)
//			{
//				system("cls");
//				printf("很遗憾，尝试次数已耗尽，再来一次吧。\n");
//				break;
//			}
//			else
//			printf("加油，你还有%d次机会。\n", i - 1);
//		}
//		else if (guess = num)
//		{
//			system("cls");
//			printf("恭喜你，你猜对了！\n");
//			break;
//		}
//	}
//
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//srand为随机数rand的种子，括号内输入种子，要求无符号整型，因此使用(unsigned int)进行强制类型转换，同时调用time函数生成时间戳（现在时间与1970年1月1日0时0分0秒的秒数差）time函数括号内为空指针,srand函数一般设置一次就可以了
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			system("cls");
//			printf("游戏已退出。\n");
//			exit(0);
//			break;
//		case 1:
//			system("cls");
//			game();//游戏主体
//			break;
//		case 2:
//			system("cls");
//			config();
//			break;
//		default:
//			system("cls");
//			printf("输入错误，请重新选择。\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

