#include<stdio.h>

/*
int main()
{
	
	//int a = 0x00 00 00 01;
	//低地址------------------------------->高地址
	//[][][][][][00][00][00][01][][][][][][][][][]..... 大端存储模式
	//[][][][][][01][00][00][00][][][][][][][][][]..... 小端存储模式
	//大小端字节序问题
	int a = 1;
	if (1 == *(char*)&a)
	{
		printf("小端存储模式\n");
	}
	else
	{
		printf("大端存储模式\n");
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
		printf("小端存储模式\n");
	else
	{
		printf("大端存储模式\n");
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
		printf("小端存储模式\n");
	}
	else
	{
		printf("大端存储模式\n");
	}
	return 0;
}