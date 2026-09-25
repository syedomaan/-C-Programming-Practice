#include<stdio.h>
int main()
{
    int n,i,t=0,c=0;
    float r,hl;
    printf("enter number of days =\n");
    scanf("%d",&n);
    printf("persentage of rainfall on 1 day=\n",i);
    scanf("%f",&r);
    for(i=2; i<=n; i++)
    {
        printf("persentage of rainfall in %d day=\n",i);
        scanf("%f",&hl);
        if(hl>r)
        {
            printf("hevey ranfull\n");
            t=t+1;
        }
        if(hl<r)
        {
            printf("low rainfull\n");
            c=c+1;
        }
        r=hl;
    }
    printf("total days with heavy rainfall=%d",t);
    printf("total days with low rainfall=%d",c);
    return 0;
}