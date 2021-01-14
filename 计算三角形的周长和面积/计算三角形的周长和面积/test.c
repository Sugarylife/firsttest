#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c, circumference, area;
	scanf("%lf %lf %lf", &a, &b, &c);
	circumference = a + b + c;
	area = sqrt((circumference / 2)*(circumference / 2 - a)*(circumference / 2 - b)*(circumference / 2 - c));
	printf("circumference=%.2lf area=%.2lf", circumference, area);
	return 0;
}