#include<stdio.h>
#include<stddef.h>
#pragma pack(8)//����Ĭ�϶�����Ϊ4��VSĬ��Ϊ8
struct S
{
	char c1;
	int i;
	char c2;
};
#pragma pack()//��ԭΪĬ��
#pragma pack(1)//����Ĭ�϶�����Ϊ1
struct T
{
	char c1;
	int i;
	char c2;
};
#pragma pack()//��ԭΪĬ��
int main()
{
	printf("�ṹ��S�Ĵ�СΪ%d\n",sizeof(struct S)); //offsetof(�ṹ����������)
	printf("�ṹ��T�Ĵ�СΪ%d\n",sizeof(struct T));
	printf("c1��S��ƫ����Ϊ%d\n",offsetof(struct S, c1));
	printf("i��S��ƫ����Ϊ%d\n", offsetof(struct S, i));
	printf("c2��S��ƫ����Ϊ%d\n", offsetof(struct S, c2));
	return 0;
}