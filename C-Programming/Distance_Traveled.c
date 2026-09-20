#include <stdio.h>

int main()
{
    int speed;
    int time;
    int d;
    for(;;)
    {

  printf("speed of car(kmhr)=\n");
    scanf("%d", &speed);

    printf("time in hours = \n");
    scanf("%d", &time);

    d = speed * time;

  printf("distancetraveled=%dkm\n",d);
}
    return 0;
}