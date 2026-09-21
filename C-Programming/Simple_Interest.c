#include<stdio.h>

int main()
{
    int p, r, t, si;
    for(;;)
    {
      printf("Principal amount:\n");
      scanf("%d", &p);

        printf("Time:\n");
        scanf("%d", &t);

        printf("Rate:\n");
        scanf("%d", &r);

        si = p * r * t / 100;

 printf("Simple Interest=%d\n",si);
    }
    return 0;
}