//题目：计算斐波那契数

/*
描述：
递归和非递归分别实现求第n个斐波那契数
例如：
输入：5  输出：5
输入：10， 输出：55
输入：2， 输出：1
*/

//我的答案：

//递归：

#include <stdio.h>

int Fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}

int main()
{
	int n = 0;
	int ret = 0;
	while (scanf("%d", &n) == 1)
	{
		ret = Fib(n);
		printf("%d\n", ret); 
	}
	return 0;
}

//非递归：

#include <stdio.h>

int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	for (int i = 0; i < n-2; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}

int main()
{
	int n = 0;
	int ret = 0;
	while (scanf("%d", &n) == 1)
	{
		ret = Fib(n);
		printf("%d\n", ret);
	}
	return 0;
}
