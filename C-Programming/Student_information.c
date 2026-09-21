#include <stdio.h>

int main()
{
    char n[50];
    int r,a;
    float p;
    for(;;)
    {
        printf("name =\n");
        scanf("%s",n);

        printf("roll number =\n");
        scanf("%d",&r);

        printf("age =\n");
        scanf("%d",&a);

        printf("percentage =\n");
        scanf("%f",&p);
    }
    return 0;
}