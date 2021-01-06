#include<stdio.h>
struct S
{
	int i;
	char c;
	double a;
};
void Init(struct S* p)//结构体用结构体指针传参
{                     //传址
	p->i = 100;
	p->c = 'c';
	p->a = 88;
}
void Print1(struct S tmp)//传值
{
	printf("%d %c %lf\n",tmp.i,tmp.c,tmp.a);
}
void Print2(const struct S* p)//Print2要比Print1更好，若函数传参时结构体所占空间较大，Print2可以减少时间和空间上的开销
{
	printf("%d %c %lf\n",p->i,p->c,p->a);//但Print1比Prinit2更安全，可以在Print2中使用const
}

int main()
{
	struct S s1 = { 0 };
	Init(&s1);
	Print1(s1);
	Print2(&s1);
	return 0;
}