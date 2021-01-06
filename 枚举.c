#include<stdio.h>
enum Color //枚举相对于#define的优点：
{          //1.增加了代码的可读性和可扩展性
	RED,   //2.和#define相比有类型检查，更加严谨
	GREEN, //3.防止了命名污染（重名）
	BLUE   //4.便于调试
};         //5.使用方便，一次可以定义多个常量
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