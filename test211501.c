#include<stdio.h>//数组传参
void func(int a[], int n)//数组传参至少传递两个参数：1）数组首元素的起始地址  2）元素个数
                         //int a[]:接受数组首元素的起始地址 ，n:接受数组的元素个数
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		a[i] += 1;
	}
}
int main()
{
	int a[5] = { 1,2,3,4,5 };
	func(a,5);
	for (int i = 0; i < 5; i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	return 0;
}