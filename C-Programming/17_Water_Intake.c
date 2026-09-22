#include <stdio.h>
int main()
{
int n,i,tw=0,ta;
printf("enter number of days =\n");
scanf("%d",&n);
for(i=1;i<=n;i=i+1)
{
printf("enter water(liters) intake per day=\n");
scanf("%d",&ta);
tw=tw+ta;
}
printf("total amount of water intake=%d\n",tw);
ta=tw/n;
printf("average water(liters) intake per day=%d\n",ta);
return 0;
}