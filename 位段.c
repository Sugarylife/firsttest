#include<stdio.h>
struct S
{
	int a : 2;//一次开辟4个字节；a占2bit位
	int b : 5;
	int c : 10;
	int d : 30;
};
struct T
{
	char a : 3;//a占3bit位;一次开辟一个字节
	char b : 4;
	char c : 5;
	char d : 4;

};
int main()
{
	struct S s;
	struct T t;
	t.a = 10;//1010多于3bit位，截取后三位
	t.b = 20;//截取后四位
	t.c = 3;
	t.d = 4;
	//观察内存
	printf("%d\n",sizeof(s));
	printf("%d\n",sizeof(t));
	return 0;
}//位段是不跨平台的：
 //1.int位段被当成有符号数还是无符号数是不确定的
 //2.位段的最大位数目不能确定（16位机器最大16，32位机器最大32）
 //3.位段中的成员在内存中从左向右分配还是从右向左分配未定义
 //4.当一个结构包含两个位段，第二个成员位段比较大，是舍弃剩余还是利用是不确定的