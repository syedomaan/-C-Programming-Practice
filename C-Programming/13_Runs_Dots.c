#include<stdio.h>
int main()
{
  int i,r,count=0,t=0,n;
printf("enter number of balls=\n");
scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
printf("runs on %d ball=\n",i);
    scanf("%d",&r);
    t=t+r;
    if(r==0)
    {
      printf("dot\n");
      count=count+1;
    }
  }
printf("number of dots=%d\n",count);
printf("total runs=%d\n",t);
  return 0;
}