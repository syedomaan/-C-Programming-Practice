#include<stdio.h>
int main()
{
    int l,a,t=0,u=0,i;
    printf("enter recharge limit=\n");
    scanf("%d",&l);
    for(i=1; i<=l; i++)
    {
        printf("enter %d recharge amount=\n",i);
        scanf("%d",&a);
        if(a<=l)
        {
            printf("recharge successfull\n");
            t=t+1;
            l=l-a;
        }
        else if(a>l)
        {
            printf("recharge above limit\n");
            u=u+1;
            break;
        }
    }
    printf("total recharges=%d\n",t);
    printf("total recharges above limit=%d\n",u);
    return 0;
}