#include<stdio.h>
int main()
{
    float time;
    int hour,min;
    scanf("%f",&time);
    if(time<13)
    {
        hour=time*100;
        min=hour%100;
        hour/=100;
        if(hour==12)
        {
            printf("%d:",hour);
            if(min==0)
                printf("00 p.m.");
            else
                printf("%d p.m.",min);
        }
        else
        {
            printf("%d:",hour);
            if(min==0)
                printf("00 a.m.");
            else
                printf("%d a.m.",min);
        }
    }
    else
    {

        time-=12;
        hour=time*100;
        min=hour%100;
        hour/=100;
        printf("%d:",hour);
        if(min==0)
            printf("00 p.m.");
        else
            printf("%d p.m.",min);
    }
    return 0;
}
