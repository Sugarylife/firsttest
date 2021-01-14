#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n, a = 0, b = 0;
	int i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		if (i % 2 == 0)
			a++;
		else
			b++;
	}
	printf("%d %d", a, b);
	return 0;
}