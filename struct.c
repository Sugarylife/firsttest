#include<stdio.h>
struct student
{
  char name[10];
  int age;
  double score;
};
int main()
{
  struct student s1;
  struct student* p = &s1;
  printf("Please input name: ");
  scanf("%s",s1.name);
  getchar();
  printf("Please input age: ");
  scanf("%d",&s1.age);
  getchar();
  printf("Please input score: ");
  scanf("%lf",&s1.score);
  printf("Name: %s  Age: %d  Score:  %lf\n",s1.name,s1.age,s1.score);
  printf("Name: %s  Age: %d  Score:  %lf\n",p->name,p->age,p->score);
  return 0;
}
