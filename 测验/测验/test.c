#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//struct student
//{
//	int num;
//	char name[12];
//	float score;
//};
//void fun(struct student s[], int num)
//{
//	
//	struct student *p = s;
//	for (; p < s + num; p++)
//   {
//		if (p->num % 3 == 0)
//			p->score += 20;
//	}
//}

//int main()
//{
//	/*int i;
//	struct student stu[3] = {{1001,"aaa",44},{1002,"bbb",55},{1003,"ccc",55}};
//	fun(stu, 3);
//	for (i = 0; i < 3; i++)
//		printf("%f   ",stu[i].score);*/
//	char str[] = "abcdef";
//	char *p = str;
//	p = p + 3;
//	printf("%c  %d\n", *p, *p);
//
//	return 0;
//}
//void  fun(int *s, int  n1, int  n2)
//{
//	int  i, j, t;
//	i = n1;  j = n2;
//	while (i < j)
// { 
//    t = s[i]; s[i] = s[j]; s[j] = t; i++; j--;
// }
//}
//int main()
//{
//	int  a[10] = { 1,2,3,4,5,6,7,8,9,0 }, k;
//	fun(a, 0, 3);  fun(a, 4, 9);  fun(a, 0, 9);
//	for (k = 0; k < 10; k++)printf("%d", a[k]);    printf("\n");
//	return 0;
//}
//
//
//int   main()
//{
//	int   a, b, s;
//	scanf("%d%d", &a, &b);
//	s = a;
//	if (a < b)
//		s = b;
//	s *= s;
//	printf("%d", s);
//}
//
//int  fun(int  n)
//{
//	if (n == 1) return 1;
//	else
//		return  n + fun(n - 1);
//}
//int  main()
//{
//	int  x;
//	scanf("%d", &x);
//	x = fun(x);
//	printf("%d\n", x);
//}

//int  main()
//{
//	char  p1[20] = "abc", *p2 = "ABC", str[50] = "xyz";
//	strcpy(str + 2, strcat(p1, p2));
//	printf("%s\n", str);
//}

//struct  st
//{
//	int   n;
//	struct  st  *next;
//};
//
//int main()
//{
//	static  struct  st   a[3] = { 5,  &a[1],  7, &a[2],   9, NULL }, *p;
//	p = &a[0];
//	printf("%d", p->next->n++);
//	return 0;
//}
//#include "stdio.h" 
//int main()
//{
//  int x = 1, y = 2, z = 0;
//  if(x = 2)
//{
//  z = x; x = y; y = z;
//}
//  printf("%d,%d\n",x,y);
//  return 0;
//}

//int main()
//{
//	int  i, x[10] = { 1,3,2,1,0,2,3,2,1,3 }, y[4] = { 0,0,0,2 };
//	for (i = 0; i < 10; i++)
//		y[x[i]]++;
//			printf("%d\n", y[3]);
//	return 0;
//}
//
//int  main()
//{
//	int  a[3][3], *p, i;
//	p = &a[0][0];
//	for (i = 0; i < 9; i++) p[i] = i + 1;
//	printf("%d\n",a[1][2]);
//}
//

//int  main()
//{
//	/*char  m[20] = { 'a','b','c','d' }, n[] = "abc", k[] = "abcde";
//	strcpy(m + strlen(n), k);
//	strcat(m, n);
//	printf("%d, %d,%d, %d\n", sizeof(m),strlen(m), sizeof(n), strlen(k));*/
//	char  str[] = "Hello world";
//	char   *p = str;
//	long     n = 10;
//	printf("%d",strlen(str));
//
//}
void Func(char str[100])
{
	printf("%d",sizeof(str));
}
int main()
{
	char str[100] = { '0' };
	printf("%d", sizeof(str));
	return 0;
}


