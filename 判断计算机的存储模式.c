#include<stdio.h>

/*
int main()
{
	
	//int a = 0x00 00 00 01;
	//�͵�ַ------------------------------->�ߵ�ַ
	//[][][][][][00][00][00][01][][][][][][][][][]..... ��˴洢ģʽ
	//[][][][][][01][00][00][00][][][][][][][][][]..... С�˴洢ģʽ
	//��С���ֽ�������
	int a = 1;
	if (1 == *(char*)&a)
	{
		printf("С�˴洢ģʽ\n");
	}
	else
	{
		printf("��˴洢ģʽ\n");
	}
	return 0;
}
*/


/*

int check_sys()
{
	int a = 1;
	return *(char*)&a;
}

int main()
{
	int a = 1;
	int ret = check_sys();
	if (1 == ret)
		printf("С�˴洢ģʽ\n");
	else
	{
		printf("��˴洢ģʽ\n");
	}
	return 0;
}
*/
int check_sys()
{
	union
	{
		int i;
		char c;
	}u;
	u.i = 1;
	return u.c;
}
int main()
{
	int a = 1;
	int ret = check_sys();
	if (1 == ret)
	{
		printf("С�˴洢ģʽ\n");
	}
	else
	{
		printf("��˴洢ģʽ\n");
	}
	return 0;
}