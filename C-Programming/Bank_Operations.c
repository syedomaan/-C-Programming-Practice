#include<stdio.h>
int main()
{
    int b,d,i,w,c,p;
    for(;;)
    {
        printf("enter pin=\n");
        scanf("%d",&p);

        if(p!=2258791)
        {
      printf("incorrect pin\n");
        }

        if(p==2258791)
        {
printf("enter initial balance=\n");
            scanf("%d",&i);

            printf("1.deposit\n2.withdraw\n3.balance\n4.exit\n");
            scanf("%d",&c);

            if(c==1)
            {
printf("enter deposit amount=\n");
                scanf("%d",&d);
                i=i+d;
                printf("balance=%d\n",i);
            }

            if(c==2)
            {
printf("withdrawal amount=\n");
                scanf("%d",&w);

                if(w<=i)
                {
                    i=i-w;
                    printf("withdrawn=%d\nbalance=%d\n",w,i);
                }

                if(w>i)
                {
                    printf("insufficient balance\n");
                }
            }

            if(c==3)
            {
                printf("balance=%d\n",i);
            }

            if(c==4)
            {
          printf("thank you\n");
                return 0;
            }
        }
    }
    return 0;
}