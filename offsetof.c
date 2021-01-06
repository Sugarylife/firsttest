#include<stdio.h>
#include<stddef.h>
#pragma pack(8)//设置默认对齐数为4，VS默认为8
struct S
{
	char c1;
	int i;
	char c2;
};
#pragma pack()//还原为默认
#pragma pack(1)//设置默认对齐数为1
struct T
{
	char c1;
	int i;
	char c2;
};
#pragma pack()//还原为默认
int main()
{
	printf("结构体S的大小为%d\n",sizeof(struct S)); //offsetof(结构体名，变量)
	printf("结构体T的大小为%d\n",sizeof(struct T));
	printf("c1在S的偏移量为%d\n",offsetof(struct S, c1));
	printf("i在S的偏移量为%d\n", offsetof(struct S, i));
	printf("c2在S的偏移量为%d\n", offsetof(struct S, c2));
	return 0;
}