#include<stdio.h>
int main()
{
  int n,s,t=0,i,p=0;
  printf("enter number of students=\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    printf("enter %d student score=\n",i);
    scanf("%d",&s);
    t=t+s;
    if(s>=50)
    {
      p=p+1;
    }
  }
  printf("total number of score=%d\n",t);
  printf("number of students passed=%d\n",p);
  return 0;
}