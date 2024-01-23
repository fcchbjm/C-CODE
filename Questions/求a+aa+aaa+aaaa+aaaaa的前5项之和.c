//题目：求a+aa+aaa+aaaa+aaaaa的前5项之和

/*
描述：
求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
例如：2+22+222+2222+22222
*/

//我的答案：

#include <stdio.h>
#include <math.h>

int Add(int num, int dig)
{
	int ret = 0;
	for (int i = 0; i < dig; i++)
	{
		ret += (int)(num * pow(10.0, (double)i));
	}
	return ret;
}

int main()
{
	int a = 0;
	int sum = 0;
	scanf("%d", &a);
	for (int i = 1; i <= 5; i++)
	{
		sum += Add(a, i);
	}
	printf("a+aa+aaa+aaaa+aaaaa=%d\n", sum);
	return 0;
}
