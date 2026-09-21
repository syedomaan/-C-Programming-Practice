#include <stdio.h>

int main()
{
    int i, a, b, n;

    printf("enter n value=\n");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("enter a value=\n");
        scanf("%d", &a);

        printf("enter b value=\n");
        scanf("%d", &b);

        printf("a plus b=%d\n",a+b);
    }

    return 0;
}
