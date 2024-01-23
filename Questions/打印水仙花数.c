//题目：打印水仙花数

/*
描述：求出0～100000之间的所有“水仙花数”并输出。
“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
如:153＝1^3＋5^3＋3^3，则153是一个“水仙花数”。
*/

//我的答案：

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

_Bool Number_of_daffodils(int number,int digits)
{
	int sum = 0;
	int num = 0;
	int dig = 0;
	num = number;
	dig = digits;
	for (dig; dig > 0; dig --)
	{
		int eachnumber = 0;
		eachnumber = num / (int)pow(10.0, (double)(dig - 1));
		num = num - eachnumber * ((int)pow(10.0, (double)(dig - 1)));
		sum += (int)pow((double)eachnumber, (double)digits);
	}
	if (sum == number)
		return true;
	else
		return false;
}

int Number_of_digits(int number)
{
	int digits = 0;
	do
	{
		number = number / 10;
		digits++;
	} while (number);
	return digits;
}

int main()
{
	int count = 0;
	for (int n = 0; n <= 100000; n++)
	{
		int digits = Number_of_digits(n);
		if (Number_of_daffodils(n, digits))
		{
			printf("%d ", n);
			count++;
		}
	}
	printf("\n");
	printf("从0~100000之间共有%d个水仙花数。\n", count);
	
	return 0;
}
