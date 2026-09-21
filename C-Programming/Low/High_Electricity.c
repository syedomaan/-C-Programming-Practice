#include <stdio.h>

int main()
{
    int uc;
for(;;)
{
printf("total units consumed=\n");
    scanf("%d",&uc);

    if(uc<300)
    {
  printf("low electricity usage\n");
    }
    else
    {
 printf("high electricity usage\n");
    }
}
    return 0;
}