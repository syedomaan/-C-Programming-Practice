#include <stdio.h>
#include <math.h>

int main()
{
    int p, n, t;
    double r, TA, CI;
    for(;;)
{
    printf("Principal amount:\n");
    scanf("%d", &p);

    printf("Rate:\n");
    scanf("%lf", &r);

    printf("Compounded per year\n");
    scanf("%d",&n);

    printf("Time:\n");
    scanf("%d", &t);

 TA = p * pow(1 + (r / 100) /n,n*t);

    CI = TA - p;

printf("Totalinterest=%.2lf\n",TA); printf("Compoundinterest=%.2lf",C);
}

    return 0;
}
