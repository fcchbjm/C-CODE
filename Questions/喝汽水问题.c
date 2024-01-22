//题目：喝汽水问题

//描述：喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水。

//我的答案：

#include <stdio.h>

int main()
{
	int money = 20;
	int coke = 0;
	int bottle = 0;
	int number = 0;
	coke = money / 1;
	while (coke)
	{
		bottle = coke;
		number += coke;
		coke = 0;
		coke = bottle / 2;
	}
	printf("可以喝%d瓶可乐。\n", number);
	return 0;
}
