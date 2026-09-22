#include <stdio.h>
int main()
{
int f,i,n,tf=0,a;
printf("enter number of days=\n");
scanf("%d",&n);

for(i=1;i<=n;i=i+1)
{
printf("enter fuel consumption per day=\n");
scanf("%d",&f);
tf=tf+f;
}

printf("total fuel consumption=%d\n",tf);
a=tf/n;
printf("average fuel consumption=%d\n",a);

return 0;
}