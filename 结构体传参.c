#include<stdio.h>
struct S
{
	int i;
	char c;
	double a;
};
void Init(struct S* p)//�ṹ���ýṹ��ָ�봫��
{                     //��ַ
	p->i = 100;
	p->c = 'c';
	p->a = 88;
}
void Print1(struct S tmp)//��ֵ
{
	printf("%d %c %lf\n",tmp.i,tmp.c,tmp.a);
}
void Print2(const struct S* p)//Print2Ҫ��Print1���ã�����������ʱ�ṹ����ռ�ռ�ϴ�Print2���Լ���ʱ��Ϳռ��ϵĿ���
{
	printf("%d %c %lf\n",p->i,p->c,p->a);//��Print1��Prinit2����ȫ��������Print2��ʹ��const
}

int main()
{
	struct S s1 = { 0 };
	Init(&s1);
	Print1(s1);
	Print2(&s1);
	return 0;
}