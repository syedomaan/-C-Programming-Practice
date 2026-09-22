#include<stdio.h>
int main()
{
int b,d,i,t=0;
printf("enter number of days=\n");
scanf("%d",&d);
for(i=1;i<=d;i=i+1)
{
printf("number of books returned on %d day=\n",i);
scanf("%d",&b);
t=t+b;
}
printf("total number of books returned=%d\n",t);
return 0;
}