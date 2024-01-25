//题目：递归实现n的k次方

//描述：编写一个函数实现n的k次方，使用递归实现。

//我的答案：

#include <stdio.h>

int Nmpow(int n, int k)
{
	if (k == 0)
	{
		return 1;
	}
	else
	{
		return n * Nmpow(n, k - 1);
	}
}

int main()
{
	int n = 0;
	int k = 0;
	int ret = 0;
	while (scanf("%d%d", &n, &k) == 2)
	{
		ret = Nmpow(n, k);
		printf("%d\n", ret);
	}
	return 0;
}
