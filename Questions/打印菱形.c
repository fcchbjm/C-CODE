//题目：打印菱形

/*
描述：
       *
      ***
     *****
    *******
   *********
  ***********
 *************
  ***********
   *********
    *******
     *****
      ***
       *
*/

//我的答案：

#include <stdio.h>
int main()
{
	char arr[14] = { "             " };
	for (int i = 7; i > 0; i--)
	{
		arr[i] = '*';
		arr[14 - i] = '*';
		for (int j = 0; j < 14; j++)
		{
			printf("%c", arr[j]);
		}
		printf("\n");
	}
	for (int i = 1; i < 7; i++)
	{
		arr[i] = ' ';
		arr[14 - i] = ' ';
		for (int j = 0; j < 14; j++)
		{
			printf("%c", arr[j]);
		}
		printf("\n");
	}
	return 0;
}
