#include<stdio.h>
struct  s1
{
	char a;
	int b;
	char c;
};
struct s2
{
	int a1;
	double b1;
	long c1;
};
struct s3
{
	double a2;
	char b2;
	int c2;
};
struct s4
{
	double a3;
	struct s3 n;
	int c3;
};
int main()
{
	struct s1 m = { 0 };
	printf("%d\n",sizeof(m));
	struct s2 n = { 0 };
	printf("%d\n",sizeof(n));
	struct s3 j = {0};
	printf("%d\n",sizeof(j));
	struct s4 k = {0};
	printf("%d\n",sizeof(k));
	return 0;

}