#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//分支语句与循环语句
//分支语句 if switch
//循环语句 while  for  do while

//if语句

//int main()
//{
//	//int a = 10;
//	//;//是语句-空语句
//
//	//if (0)//if括号内为0，为假，不执行下面语句
//	//	printf("haha\n");
//	//if (1)//if括号内为1，为真，执行下面语句
//	//	printf("hehe\n");
//
//	//int age = 0;
//	//printf("请输入你的年龄：");
//	//scanf("%d", &age);
//	//if (age >= 0 && age <= 18)//注意：不能直接写0<=age<18，否则程序从左往右判断，输入任何数先判断0<=age，为假则为0，为真则为1，0(1)<=18恒成立，然后一定会打印“未成年”
//	//{//if语句只能控制一条语句，如果需要控制多条代码时，用{}括起来，组成代码块
//	//	printf("你还是未成年哦\n");
//	//	printf("好好学习\n");
//	//}
//	//else if (age>=18 && age<=80)//else if 在不满足if条件下继续判断
//	//	printf("你已经成年啦\n");
//	//else if (age>=80 && age<=200)
//	//	printf("您长寿\n");
//	//else
//	//	printf("不可能，请重新输入");
//
//	//int num = 0;
//	//scanf("%d", &num);
//	//if (num == 0)
//	//	printf("输⼊的数字是0\n");
//	//else
//	//{
//	//	if (num > 0) //这⾥的if 相当于嵌套在els语句中，形成了嵌套结构
//	//		printf("输⼊的数字是正数\n");
//	//	else
//	//		printf("输⼊的数字是负数\n");
//	//}
//
//	////悬空else问题- else 总是跟最接近的 if 匹配
//	//int a = 0;
//	//int b = 2;
//	//if (a == 1)//这里判断a是否等于1，此处a不等于1，不进行下面if else判断，直接跳到return 0;
//	//	if (b == 2)
//	//		printf("hehe\n");
//	//	else//悬空else，与第二个if对应
//	//		printf("haha\n");
//
//	////关系操作符 >= 大于等于  <= 小于等于  > 大于  < 小于  !=  不相等  ==  相等
//	////注意：1.多个关系运算符不宜连⽤ 2.不要吧赋值等号=与相等等号==混淆
//	//int a = 0;
//	//int b = 0;
//	//int num = 0;
//	//if (a = 3)//因为这里是赋值等号相当于把3赋值给a，同时a值非0，为真，执行语句
//	//	printf("hello!\n");
//	//if (3 == a)//由于赋值时变量在左，数值在右，可以反写，防止将相等等号与赋值等号写错
//	//	printf("nice to ");
//	//if (1)//1为真，一定会执行语句
//	//	printf("meet you!\n");
//	//if (num = 0)//此处也只有一个=，将num赋值为0，但是num=0，为假，所以不打印打印haha
//	//{
//	//	printf("haha\n");
//	//}
//
//	////条件操作符(三目操作符)  exp1?exp2:exp3/如果表达式1结果为真，那么执行表达式2，并作为整个表达式结果，如果表达式1结果为假，那么执行表达式3，并作为整个表达式结果
//	//int a = 10;
//	//int b = 20;
//	//int max = 0;
//	//max = (a > b ? a : b);//a>b吗？，如果a>b那么返回a，否则返回b
//	//printf("%d\n", max);
//
//	////逗号表达式 exp1,exp2,exp3,...expn
//	////特点：逗号表达式是C语言优先级最低的运算符。表达式之间用逗号隔开，从左往右依次执行
//	////当没有括号时，第一个表达式为整个表达式的值，而有括号时，依次执行后，最后一个表达式为整个表达式的值
//	//int i = 0;
//	//int n = 0;
//	//int a = 0;
//	//int b = 0;
//	//i = (a++, ++a, b++, b += 2, b = a + b);//执行顺序：先从左往右执行a++,++a,b++,b+=2,b=a+b,最后将最后一个表达式的值b=a+b的值赋值给变量i
//	//n = a++, ++a, b++, b += 2, b = a + b;//执行顺序：先左往右执行a++,++a,b++,b+=2,b=a+b,但将第一个表达式的值a++的值赋值给变量n，且先使用a的值再++
//	//printf("a=%d,b=%d,i=%d,n=%d", a, b, i, n);
//
//	////逻辑操作符   && 与运算符   || 或运算符   ! 逻辑取反运算符
//	//int a = 3;//a为非0值，判断为真
//	//int b = 5;//b为非0值，判断为真
//	//int c = 0;//c为0，判断为假
//	//int d = 0;//d为0，判断为假
//	//printf("a,b为真c,d为假，以下结果1为真，0为假：\n");
//	//printf("a && b=%d\n", a && b);
//	//printf("a && c=%d\n", a && c);
//	//printf("c && d=%d\n", c && d);//与运算符：全为真，即为真，存在假，即为假
//	//printf("a || b=%d\n", a || b);
//	//printf("a || c=%d\n", a || c);
//	//printf("c || d=%d\n", c || d);//或运算符：存在真，即为真，全为假，即为假
//	//printf("!a=%d\n", !a);
//	//printf("!c=%d\n", !c);//逻辑取反运算符：假转化为真，真转化为假
//
//	////短路：如果左边的表达式已经满⾜逻辑运算符的条件，就不再对右边的表达式求值
//	//int a = 0;//初始化参数变量
//	//int b = 0;
//	//int c = 0;
//	//int d = 0;
//	//int e = 0;
//	//int f = 0;
//	//int g = 0;
//	//int h = 0;
//	//a = 1;
//	//b = 2;
//	//f = 1;
//	//g = 2;
//	//d = a++ && ++b && c++;//与运算符需要确保所有值都为真，但c++是先用c值再++，所以d的值为0（假）
//	//e = a++ && ++b && ++c;//执行了逗号表达式中的所有语句
//	//printf("a=%d\nb=%d\nc=%d\nd=%d\ne=%d\n", a, b, c, d, e);
//	//h = f++ || g++ || ++h;//或运算符只需要确定有一个值为真，所以执行f++时已经可以确定为真值，于是不再执行后面的表达式
//	//printf("f=%d\ng=%d\nh=%d\n", f, g, h);
//
//	////尝试：判断一个数是否为奇数
//	//int num = 0;
//	//printf("请输入需要判断是否为奇数的整数：");
//	//scanf("%d",&num);
//	//if (num % 2 == 0)
//	//	printf("这个数为偶数");
//	//else if (num % 2 == 1)
//	//	printf("这个数为奇数");
//	//else
//	//	printf("输入错误，请重新输入");
//
//	////尝试：输出1~100之间的奇数
//	//int num = 0;
//	//int i = 0;
//	//while (i <= 49)
//	//{
//	//	num = 2 * i + 1;
//	//	printf("%d\n",num);
//	//	i++;
//	//}
//	//printf("这是1~100之间的所有奇数");
//	////更简洁的写法：
//	//int a = 1;
//	//while (a <= 100)
//	//{
//	//	printf("%d\n",a);
//	//	a += 2;
//	//}
//	//printf("这是1~100之间的所有奇数");
//
//	return 0;
//}

//switch语句，常用于多分支语句

//int main()
//{
//	//int day = 0;
//	//printf("请输入星期几（整数）：");
//	//scanf("%d",&day);
//	//switch (day)//括号内只能是整型常量（字符类型的ASCII值也是整型），不能是浮点数
//	//{
//	//case 1://依据day中的数字决定入口
//	//	printf("星期一\n");
//	//	break;//跳出该语句，结束，否则会继续执行直到该语句结束
//	//case 2://case后面只能跟整型常量，不能是变量
//	//	printf("星期二\n");
//	//	break;
//	//case 3:
//	//	printf("星期三\n");
//	//	break;
//	//case 4:
//	//	printf("星期四\n");
//	//	break;
//	//case 5:
//	//	printf("星期五\n");
//	//	break;
//	//case 6:
//	//	printf("星期六\n");
//	//	break;
//	//case 7:
//	//	printf("星期日\n");
//	//	break;
//	//default://除以上数字的其它输出结果
//	//	printf("输入数字有误，请重新输入\n");
//	//	break; 
//	//}
//	
//	//int day = 0;
//	//printf("请输入星期几（整数）：");
//	//scanf("%d", &day);
//	//switch (day)//这种情况一般用if else语句实现
//	//{
//	//case 1:
//	//case 2:
//	//case 3:
//	//case 4:
//	//case 5:
//	//	printf("工作日\n");
//	//	break;//需要再5后面加上case，包含1~5的所有情况
//	//case 6:
//	//case 7:
//	//	printf("休息日\n");
//	//	break;//再7后面加上case，包含6和7两种情况
//	//default://除以上数字的其它输出结果，位置可以随意，但一般放在最后
//	//	printf("输入数字有误，请重新输入\n");
//	//	break;
//	//}
//	
//	////练习
//	//int n = 1;
//	//int m = 2;
//	//switch (n)
//	//{
//	//case 1:
//	//	m++;
//	//case 2:
//	//	n++;
//	//case 3:
//	//	switch (n)
//	//	{
//	//	case 1:
//	//		n++;
//	//	case 2:
//	//		m++;
//	//		n++;
//	//		break;
//	//	}
//	//case 4:
//	//	m++;
//	//	break;
//	//default:
//	//	break;
//	//}
//	//printf("m = % d\nn = % d\n",m,n);//结果m=5，n=3，因为前面没有break，所以连续执行
//
//	return 0;
//}

//while循环

//int main()
//{
//	int i = 0;
//		while (i <= 10)//这里执行判断
//		{
//			i++;
//			if (i == 5)
//			{
//				printf(" ");
//				continue;//当执行到continue时，终止本次循环，不再执行后面的代码，而是直接回到while语句开头进行判断
//			}
//			if (i == 11)
//				break;//直接终止循环，不在执行该循环
//			printf("%d\n",i);
//		}
//	return 0;
//}

//for循环

//int main()
//{
//	//int i = 0;
//	//for (i = 1; i <= 10; i++)//表达式1进行初始化循环变量处理，表达式2进行调节判断，表达式3进行循环条件的调整，三个表达式用分号隔开
//	//{
//	//	if (i == 5)
//	//		continue;//即使continue跳过了本次循环之后的代码，但依然会执行i++这一操作，因此不会造成死循环
//	//	if (i == 9)
//	//		break;
//	//	printf("i=%d\n",i);
//	//}
//
//	//int i = 0;
//	//for (i = 0; i <= 10; i++)
//	//{
//	//	//if (i = 5)//不建议在for循环内改变循环变量，防止for循环失去控制
//	//	//	printf("haha\n");
//	//	printf("hehe\n");
//	//}
//
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d\n",arr[i]);
//	//}
//
//	//for (;;)//判断条件被省略，即判断条件恒为真，就会一直不停执行循环
//	//{
//	//	printf("hehe\n");
//	//}
//
//	//int i = 0;
//	//int j = 0;
//	//for (; i < 10; i++)
//	//{
//	//	for (; j < 10; j++)//由于j在此处没有初始化，所以每次j++都被变量j保留了下来
//	//	{
//	//		printf("hehe\n");
//	//	}
//	//}
//
//	//int x, y;
//	//for (x = 0, y = 0; x < 2 && y<5; ++x, y++)//循环2次，在x=2后不符合循环条件，结束循环
//	//{
//	//	printf("hehe\n");
//	//}
//
//	////问题：请问要循环多少次？
//	//int i = 0;
//	//int k = 0;
//	//for (i = 0, k = 0; k = 0; i++, k++)//此处判断条件为将0赋值给k，又因为0为假，所以不执行循环，答案：0次
//	//	k++;
//
//	return 0;
//}

//do while循环
//do while 循环是先直接进⼊循环体，执⾏循环语句，然后再执⾏ while 后的判断表达式，表达式为真，就会进⾏下⼀次，表达式为假，则不再继续循环
//所以在 do while 语句中循环体是⾄少执⾏⼀次的，这是 do while 循环⽐较特殊的地⽅

//int main()
//{
//	int i = 0;
//	i = 1;
//	do//执行操作
//	{
//		i++;//如果i++放在continue后面，会导致死循环
//		if (i == 5)
//			continue;//此处continue作用与while语句中相同
//		if (i == 9)
//			break;
//		printf("i=%d\n", i);
//	} 
//	while (i <= 10);//最后判断条件是否相符，决定是否进行下一次循环
//
//	int num = 0;
//	int count = 0;
//	printf("请输入需要判断数字位数的整数：");//由于0也有1位数，所以do while循环适合解决该问题
//	scanf("%d", &num);
//	do
//	{
//		num = num / 10;
//		count++;//即使是0，也会使count++，至少有一位数
//	} while (num != 0);
//	printf("这个数有%d位", count);
//
//	return 0;
//}

//break和continue
//break 的作⽤是⽤于永久的终⽌循环，只要 break 被执⾏，直接就会跳出循环，继续往后执⾏。
//continue 的作⽤是跳过本次循环 continue 后边的代码，在 for 循环和 while 循环中有所差异的。

//int main()
//{
//	//printf("for循环：\n");
//	//for (int i = 0; i <= 10; i++)
//	//{
//	//	if (i == 3)
//	//		continue;//跳过后面的语句，直接跳到调整部分（i++）
//	//	if (i == 7)
//	//		break;//跳出循环，不再继续该循环
//	//	printf("%d ", i);
//	//}
//	//printf("\n");
//
//	//printf("while循环：\n");
//	//int m = 0;
//	//int n = 0;
//	//while (n <= 10)
//	//{
//	//	n++;
//	//	if (n == 5)
//	//		continue;//此处当n=5时，不再执行后面的语句，所以m++没有机会执行，也不会打印n=5
//	//	if (n == 8)
//	//		break;//此处当n=8时，不再执行后面的语句，所以不执行m++，也不会打印n=8
//	//	m++;
//	//	printf("m = % d n = % d\n", m, n);
//	//}
//
//	//printf("do while循环：\n");
//	//int j = 0;
//	//int k = 0;
//	//do
//	//{
//	//	j++;
//	//	if (j == 2)
//	//		continue;//同while循环，此处j=2时，不再执行后面的语句，所以k++没有机会执行，也不会打印j=2
//	//	if (j == 4)
//	//		break;//同while循环，此处j=4时，不再执行后面的语句，所以不执行k++，也不会打印j=4
//	//	k++;
//	//	printf("j=%d k=%d\n", j, k);
//	//} while (j <= 10);
//
//	return 0;
//}

//goto语句
//可以比较灵活的再各语句之间跳转，但如果使用不当，会打乱程序的执⾏流程

//int main()
//{
//	//printf("hello!\n");
//	//goto again;//goto语句可以快速跳转
//	//printf("welcome!\n");//这里跳过了此行代码
//	//again:
//	//	printf("nice!\n");
//
//	return 0;
//}