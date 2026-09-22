#include<stdio.h>
int main()
{
  int e,h,i,r,t=0;
printf("number of employees=\n");
  scanf("%d",&e);
  printf("enter rate per hour =\n");
  scanf("%d",&r);
  for(i=1;i<=e;i++)
  {
 printf("extra hours worked by %d employee=\n",i);
    scanf("%d",&h);
    t=t+(h*r);
  }
printf("extra income of all the employees is=%d\n",t);
  return 0;
}