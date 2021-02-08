#include<stdio.h>
int main()
{
    int i,n,m;
    long t;
    scanf("%d %d %ld",&n,&m,&t);
    char f;
    fflush(stdin);
    scanf("%c",&f);
    if(m>n)
        printf("R");
    else if(n>m)
        printf("L");
    else
    {
        if(f == 'R')
            printf("L");
        else if(f == 'L')
            printf("R");
    }
    return 0;
}
