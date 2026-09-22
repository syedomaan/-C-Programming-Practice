#include <stdio.h>
int main()
{
    int c,i,n,cp,p,z=0;
    printf("enter correct pin=\n");
    scanf("%d",&cp);
    printf("number of attempts=\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        c=n-i;
 printf("pin attempt no.%d=\n",i);
        scanf("%d",&p);
        if(p==cp)
        {
      printf("login successful\n");
            z=1;
            break;
        }
printf("wrong %d chances left\n",c);
    }
    if(z==0)
    {
        printf("login failed\n");
    }
    return 0;
}