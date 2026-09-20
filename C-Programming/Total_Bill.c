#include <stdio.h>

int main()
{
    int nb, pb;
    int np, pp;
    int nba, pba;
    int tb;
for(;;)
{
    printf("number of books =\n");
    scanf("%d", &nb);

    printf("price of book =\n");
    scanf("%d", &pb);

    printf("number of pens =\n");
    scanf("%d", &np);

    printf("price of pen =\n");
    scanf("%d", &pp);

    printf("number of bags =\n");
    scanf("%d", &nba);

    printf("price of bag =\n");
    scanf("%d", &pba);

    tb = nb * pb + np * pp + nba * pba;

    printf("total bill = %d\n", tb);
}
    return 0;
}