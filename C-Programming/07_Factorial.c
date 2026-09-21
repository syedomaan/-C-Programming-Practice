#include <stdio.h>

int main()
{
    int n,i;
    long long f=1;
for(;;)
{
    printf("enter your number=\n");
    scanf("%d",&n);

    if(n<0)
    {
printf("factorial is not defined");
    }
    else if(n>20)
    {
   printf("number is too large\n");
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            f=f*i;
        }

 printf("%d factorial=%lld\n",n,f);
    }
}
    return 0;
}
