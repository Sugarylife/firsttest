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
	static int a = 1;//staticֻ�ı�������������ڣ����ı���������÷�Χ
	a++;             //aֻ��ʼ��һ��
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