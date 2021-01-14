#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void test()
//{
//	int a = 1;
//	a++;
//	printf("%d ",a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

void test()
{
	static int a = 1;//static只改变变量的生命周期，不改变变量的作用范围
	a++;             //a只初始化一次
	printf("%d ", a);
}
int main()
{
	int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}
	return 0;
}