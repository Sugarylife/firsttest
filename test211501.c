#include<stdio.h>//���鴫��
void func(int a[], int n)//���鴫�����ٴ�������������1��������Ԫ�ص���ʼ��ַ  2��Ԫ�ظ���
                         //int a[]:����������Ԫ�ص���ʼ��ַ ��n:���������Ԫ�ظ���
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