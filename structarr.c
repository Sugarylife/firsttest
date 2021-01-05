#include<stdio.h>
struct student 
{
   int id;
   char name[10];
};
int main()
{
  struct student arr[5]=
  {{1001,"chen"},{1002,"zhang"},{1003,"zhou"},{1004,"ma"},{105,"xu"}};
  for(int i=0;i<5;i++)
  {
      printf("Please input No.%d student ID: \n",i+1);
      scanf("%d",&arr[i].id);
	  getchar();
	  printf("Please input No.%d student name: \n",i+1);
	  scanf("%s",arr[i].name);

  }
  for(int i=0;i<5;i++)
  {
	printf("No.%d student ID is: %d\n",i,arr[i].id);
	printf("No.%d student name is %s\n",i,arr[i].name);
  }
  return 0;
}
