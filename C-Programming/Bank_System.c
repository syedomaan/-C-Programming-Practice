#include <stdio.h>

int main()
{
    int p,b,wa;
for(;;)
{
printf("enter pin number=\n");
    scanf("%d",&p);

    if(p==987654321)
    {
 printf("enter your balance=\n");
        scanf("%d",&b);

printf("enterwithdrawalamount=\n");
        scanf("%d",&wa);

        if(wa<=b)
        {
printf("transaction successful\n");
printf("withdrawal amount=%d\n",wa);
printf("yourbankbalance=%d\n",b-wa);
        }
        else
        {
  printf("transaction failed\n");
        }
    }
    else
    {
printf("incorrect pin number\n");
    }
}
    return 0;
}