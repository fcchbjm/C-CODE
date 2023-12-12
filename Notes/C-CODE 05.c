#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//数组的概念
//数组是⼀组相同类型元素的集合，数组中存放的是1个或者多个数据，但是数组元素个数不能为0，数组中存放的多个数据，类型是相同的。
//数组分为⼀维数组和多维数组，多维数组⼀般⽐较多⻅的是⼆维数组。

//⼀维数组的创建和初始化

//int main()
//{
//	//int a[10];//创建一维数组：数据类型+数组名+元素个数（常量）
//
//	////完全初始化
//	//int arr[5] = { 1,2,3,4,5 };
//	////不完全初始化
//	//int arr2[6] = { 1 };//第⼀个元素初始化为1，剩余的元素默认初始化为0
//	////注意：大括号内输入的元素个数不能超过数组元素个数
//
//	////数组的类型：可以算是⼀种⾃定义类型，去掉数组名留下的就是数组的类型
//	//int arr3[10];//arr3数组的类型是 int[10]，数组元素的类型为int
//	//int arr4[12];//arr4数组的类型是 int[12]
//	//char ch[5];//ch 数组的类型是 char[5]，数组元素的类型为char
//	//printf("sizeof(arr3)=%zd\n", sizeof(arr3));//一个int类型占四个字节，10个int类型占40个字节
//	//printf("sizeof(int [10])=%zd\n", sizeof(int [10]));//结果：40
//
//	//int arr5[] = { 1,2,3,4,5 };//当不输入元素个数时，编译器可以依据初始化时数组元素个数确定数组大小
//	//char ch2[] = "hello";
//	//printf("sizeof(arr5)=%zd\n", sizeof(arr5));//szieof(arr5)=20，一个int类型占4个字节，则arr5数组有5个元素
//	//printf("sizeof(ch2)=%zd\n", sizeof(ch2));//szieof(ch2)=6，一个char类型占1个字节，则ch2数组有6个元素（五个字符和一个'\0'）
//
//	return 0;
//}

//⼀维数组的使⽤

//int main()
//{
//	////数组下标
//	////C语⾔规定数组是有下标的，下标是从0开始的，假设数组有n个元素，最后⼀个元素的下标是n - 1，下标就相当于数组元素的编号
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//printf("arr[5]=%d\n", arr[5]);//通过数组下标5访问到第六个元素，即6
//
//	////数组的打印
//	//int arr2[10] = { 1,2,3,4,5,6,7,8 };//剩下的两个元素将被赋值为0
//	//for (int i = 0; i < 10; i++)//通过for循环打印数组arr2中每一个元素的值
//	//{
//	//	printf("arr2[%d]=%d\n", i, arr2[i]);
//	//}
//
//	////数组的输入
//	//int arr3[10] = { 0 };
//	//for (int i = 0; i < 10; i++)//通过for循环实现对数组每个元素的输入
//	//{
//	//	printf("arr3[%d]=", i);
//	//	scanf("%d", &arr3[i]);
//	//}
//	//for (int n = 0; n < 10; n++)//通过for循环实现对数组每个元素的输出
//	//{
//	//	printf("arr3[%d]=%d\n", n, arr3[n]);
//	//}
//
//	////数组的元素个数
//	//int arr4[10] = { 0 };
//	//printf("sizeof(arr4)=%zd\n", sizeof(arr4));//通过sizeof计算arr4整个数组所占的空间大小
//	//printf("sizeof(arr[0])=%zd\n", sizeof(arr4[0]));//通过sizeof计算arr4首个元素所占的空间大小
//	//printf("数组元素个数有%d个\n", (int) sizeof(arr4) / sizeof(arr4[0]));//通过sizeof计算arr4整个数组除以首个元素所占的空间大小，就得到了元素个数
//	
//	//int arr5[5] = { 0 };
//	//int sz = (int)sizeof(arr5) / sizeof(arr5[0]);//计算数组元素个数
//	//for (int i = 0; i < sz; i++)//通过sz实现for循环中循环次数自动调整
//	//{
//	//	printf("arr5[%d]=", i);
//	//	scanf("%d", &arr5[i]);
//	//}
//	//for (int n = 0; n < sz; n++)
//	//{
//	//	printf("arr5[%d]=%d\n", n, arr5[n]);
//	//}
//
//	return 0;
//}

//⼀维数组在内存中的存储

//int main()
//{
//	//int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//for (int i = 0; i < sz; i++)
//	//{
//	//	printf("&arr[%d]=%p\n", i, &arr[i]);//%p是用来打印地址的占位符，&是取地址符，用于获取地址 
//	//	//输出结果（x64）如：
//	//	//&arr[0] = 000000F5D05CF9E8
//	//	//&arr[1] = 000000F5D05CF9EC
//	//	//&arr[2] = 000000F5D05CF9F0
//	//	//&arr[3] = 000000F5D05CF9F4
//	//	//&arr[4] = 000000F5D05CF9F8
//	//	//&arr[5] = 000000F5D05CF9FC
//	//	//&arr[6] = 000000F5D05CFA00
//	//	//&arr[7] = 000000F5D05CFA04
//	//	//&arr[8] = 000000F5D05CFA08
//	//	//&arr[9] = 000000F5D05CFA0C
//	//	//内存表示方式为16进制，数组在内存中是连续存放的，数组随着下标的增⻓，地址是由⼩到⼤变化的，地址之间间隔4个字节（int类型的内存占用）
//	//}
//
//	//double arr2[] = { 1,2,3,4,5,6,7,8,9,0 };
//	//int sz = sizeof(arr2) / sizeof(arr2[0]);
//	//for (int i = 0; i < sz; i++)
//	//{
//	//	printf("&arr[%d]=%p\n", i, &arr[i]);
//	//	//输出结果（x64）如：
//	//	//&arr2[0] = 0000003925B7F920
//	//	//&arr2[1] = 0000003925B7F928
//	//	//&arr2[2] = 0000003925B7F930
//	//	//&arr2[3] = 0000003925B7F938
//	//	//&arr2[4] = 0000003925B7F940
//	//	//&arr2[5] = 0000003925B7F948
//	//	//&arr2[6] = 0000003925B7F950
//	//	//&arr2[7] = 0000003925B7F958
//	//	//&arr2[8] = 0000003925B7F960
//	//	//&arr2[9] = 0000003925B7F968
//	//	//内存表示方式为16进制，数组在内存中是连续存放的，地址之间间隔8个字节（double类型的内存占用）
//	//}
//
//	return 0;
//}

//二维数组的创建及初始化

//int main()
//{
//	//int arr[3][4]; //二维数组的创建
//	//char arr2[3][5];
//	//double arr3[2][3];
//	//int arr4[3][4] = { 1,2,3,4,5,6 };//依据元素个数自动由第一行开始填充数组，剩下的填充0
//	//int arr5[3][4] = { {1,2,3},{4,5,6} };//依据大括号划分行数，剩下的填充0
//	//int arr6[][4] = { {1,2,3},{4,5,6} };//可以省略行数，但不能省略列数，自动依据列数确定行数
//
//	//int arr7[5][4] = { {1,2,3,4},{5,6,7},{7,8},{9} };
//	//for (int m = 0; m < 5; m++)//确定列
//	//{
//	//	for (int n = 0; n < 4; n++)//确定行
//	//	{
//	//		printf("arr7[%d][%d]=%-4d", m, n, arr7[m][n]);
//	//	}
//	//	printf("\n");
//	//}
//
//	return 0;
//}

//二维数组在内存中的存储

//int main()
//{
//	//int arr[2][3] = { 0 };
//	//for (int m = 0; m < 2; m++)
//	//{
//	//	for (int n = 0; n < 3; n++)
//	//	{
//	//		printf("arr[%d][%d]=%p\n", m, n, &arr[m][n]);
//	//		//打印结果（x64）：
//	//		//arr[0][0] = 000000B9A9F7F948
//	//		//arr[0][1] = 000000B9A9F7F94C
//	//		//arr[0][2] = 000000B9A9F7F950
//	//		//arr[1][0] = 000000B9A9F7F954
//	//		//arr[1][1] = 000000B9A9F7F958
//	//		//arr[1][2] = 000000B9A9F7F95C
//	//		//二维数组在内存中也是连续存储的，先行后列，间隔4个字节（int类型的内存占用）
//	//	}
//	//}
//
//	return 0;
//}


//C99中的变⻓数组
//在C99标准之前，C语⾔在创建数组的时候，数组⼤⼩的指定只能使⽤常量、常量表达式，如果初始化数组时不包含数组大小，编译器会自动依据内容确定数组大小
//C99中给⼀个变⻓数组（variable-length array，简称 VLA）的新特性，允许我们可以使⽤变量指定数组⼤⼩
//但是在VS2022上，虽然⽀持⼤部分C99的语法，没有⽀持C99中的变⻓数组，没法测试；在gcc编译器上可以测试通过
//变⻓数组的根本特征，就是数组⻓度只有运⾏时才能确定，所以变⻓数组不能初始化。
//好处是程序员不必在开发时，随意为数组指定⼀个估计的⻓度，程序可以在运⾏时为数组分配精确的⻓度。
//变⻓数组的意思是数组的⼤⼩是可以使⽤变量来指定的，在程序运⾏的时候，根据变量的⼤⼩来指定数组的元素个数，⽽不是说数组的⼤⼩是可变的。
//数组的⼤⼩⼀旦确定就不能再变化了。

//int main()
//{
//	//int n = 0;
//	//scanf("%d", &n);//根据输⼊数值确定数组的⼤⼩
//	//int arr[n];//变长数组不能初始化
//	//int i = 0;
//	//for (i = 0; i < n; i++)
//	//{
//	//	scanf("%d", &arr[i]);
//	//}
//	//for (i = 0; i < n; i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//
//	return 0;
//}

