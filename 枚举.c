#include<stdio.h>
enum Color //ö�������#define���ŵ㣺
{          //1.�����˴���Ŀɶ��ԺͿ���չ��
	RED,   //2.��#define��������ͼ�飬�����Ͻ�
	GREEN, //3.��ֹ��������Ⱦ��������
	BLUE   //4.���ڵ���
};         //5.ʹ�÷��㣬һ�ο��Զ���������
enum Week
{
	MONDAY=7,
	TUESDAY=6,
	WEDNESDAY=5,
	THURSDAY=4,
	FRIDAY=3,
	SATURDAY=2,
	SUNDAY=1
};
int main()
{
	enum Color s1 = RED;
	enum Color s2 = GREEN;
	enum Color s3 = BLUE;
	printf("%d %d %d\n",s1,s2,s3);
	enum Week d1 = MONDAY;
	enum Week d2 = TUESDAY;
	enum Week d3 = WEDNESDAY;
	enum Week d4 = THURSDAY;
	enum Week d5 = FRIDAY;
	enum Week d6 = SATURDAY;
	enum Week d7 = SUNDAY;
	printf("%d %d %d %d %d %d %d\n",d1,d2,d3,d4,d5,d6,d7);
	return 0;
}