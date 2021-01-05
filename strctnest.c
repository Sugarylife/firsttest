#include<stdio.h>
struct date 
{
  int year;
  int month;
  int  day;
};
struct student 
{
  char name[10];
  int id;
  struct date birthday;
};
int main()
{
  struct student s1={"jayce",88,{1998,10,1}};
  struct student* p = &s1;
  printf("Name: ");
  scanf("%s",s1.name);
  getchar();

  printf("ID: ");
  scanf("%d",&s1.id);
  getchar();

  printf("Birthday: ");
  scanf("%d-%d-%d",&s1.birthday.year,&s1.birthday.month,&s1.birthday.day);

  printf("Name is: %s\n",s1.name);
  printf("ID is: %d\n",s1.id);
  printf("Birthday is %d-%d-%d\n",s1.birthday.year,s1.birthday.month,s1.birthday.day);
  printf("Name is: %s\tID is: %d\tBirthday is %d-%d-%d\n",p->name,p->id,p->birthday.year,p->birthday.month,p->birthday.day);
  return 0;
}
