#include<stdio.h>
int main()
{
    int n,i,t=0,c=0,hd,ld;
    float u,h,l;
    printf("enter number of days =\n");
    scanf("%d",&n);
    printf("enter untis consumed on day 1=\n",i);
    scanf("%f",&u);
    h=l=u;
    for(i=2; i<=n; i++)
    {
        printf("enter untis consumed on day %d=\n",i);
        scanf("%f",&u);
        if(u>h)
        {
            h=u;
            hd=i;
        }
        if(u<l)
        {
            l=u;
            ld=i;
        }
    }
    printf("highest units %.2f consumed on %d day\n",h,hd);
    printf("lowest units %.2f consumed on %d day\n",l,ld);
    return 0;
}
