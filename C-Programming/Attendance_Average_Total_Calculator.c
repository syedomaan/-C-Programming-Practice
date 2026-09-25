#include<stdio.h>
int main()
{
    int d,a,t=0,i;
    double aa;
    printf("enter number of days=\n");
    scanf("%d",&d);
    if(d<0)
    {
        printf("days vule is invalid\n");
    }
    for (i=1; i<=d; i=i+1)
    {
        printf("enter attendance on %d day=\n",i);
        scanf("%d",&a);
        t=t+a;
    }
    printf("total attendance=%d\n",t);
    aa=(double)t/d;
    printf("average attendance per day=%f\n",aa);
    return 0;
}