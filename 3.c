#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�������ò�����

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
//	int sum = Add(a, b);//()-�������ò�����
//	printf("%d\n", sum);
//
//
//	return 0;
//}

//�����ؼ���
//case char goto const if int long register return sizeof auto break extern float for static struct switch typedef union unsigned continue default do double else enum short signed void volatile while

//int main()
//{
//	//auto int a = 10;//�ֲ�����-�Զ��������Զ��������Զ����٣���ǰ��auto����ʡ��
//	//register int b = 10;//����ѱ���b����Ĵ���
//	//signed int c = 10;//int��������з�������signed����ʡ��
//	//unsigned int d = 10;//unsigned�����޷�����
//	////struct-�ṹ��ؼ��� union-������/������  �Զ������������ؼ��ֳ�ͻ
//
//	////typedef-���Ͷ���-�����ض���
//	//typedef unsigned int u_int;//����typedef������unsigned int�ض���Ϊu_int(�൱��������)
//	//u_int a = 20;
//
//	return 0;
//}

////static���ξֲ�������ʹ����������֮�ⲻ���٣��ӳ��˸ñ�������������

//void test()
//{
//	//int a = 1;//�˴�aΪ��ʱ�ľֲ���������ÿ��testִ�н������Զ�����
//	static int a = 1;//����ʹ��static��a��һ����̬�ľֲ������������ں�������������
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

////static����ȫ�ֱ���

//int main()
//{
//	extern int wb;
//	printf("wb=%d\n",wb);
//	//extern int wb2;//����wb2��extern.c�б�static�������Σ��޷����ļ�����
//	//printf("wb2=%d\n",wb2);//�޷��������ⲿ���� wb2
//
//}

////static�����ⲿ����

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	printf("���������������\n");
//	scanf("%d%d",&num1,&num2);
//	extern int Add(int, int);//�����ⲿ������˵��������������
//	int sum = Add(num1,num2);
//	printf("��ӽ����%d\n",sum);
//	return 0;
//}

////#define���峣���ͺ�

//#define MAX 100//����#define����ı�ʶ����������MAX����Ϊ100
//int main()
//{
//	//int a = MAX;
//	//printf("a=%d",a);
//	return 0;
//}

//#define MAX(x,y) (x>=y?x:y)//#define�����
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);//��ķ�ʽ
//	printf("max=%d\n", max);
//	return 0;
//}

//ָ��

//int main()
//{
//	//int a = 10;//���ڴ������ĸ��ֽ�
//	//printf("%p\n",&a);//%p������ӡ��ַ������&aȡ��ַ
//	//int* p = &a;//����p�������a�ĵ�ַ-��Ϊָ�����,int*��ʾ����һ��ָ�����
//	//printf("%p\n",p);
//	//*p = 20;//*Ϊ�����ò��������˴���ʾͨ��������p�ĵ�ַ�ҵ�a��ֵ��������Ϊ20
//	//printf("a=%d\n",a);
//
//	//char ch = 'b';
//	//char* pc = &ch;
//	//printf("ch=%c\n",ch);
//	//*pc = 'a';
//	//printf("ch=%c\n",ch);
//
//	////ָ������Ĵ�С
//	//printf("%d\n", sizeof(int*));
//	//printf("%d\n", sizeof(char*));
//	//printf("%d\n", sizeof(short*));
//	//printf("%d\n", sizeof(long*));
//	//printf("%d\n", sizeof(long long*));
//	//printf("%d\n", sizeof(float*));
//	//printf("%d\n", sizeof(double*));
//	////��������32λ�����ڴ�ռ��32������λ����4���ֽڣ�64λ��ǿռ��64������λ����8���ֽ�
//
//	return 0;
//}
