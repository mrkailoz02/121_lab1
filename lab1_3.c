#include<stdio.h>
int main()
{
    long long a,b,c;
    scanf("%lld",&a);
    b=a%3;
    c=a%11;
    printf("%lld %lld",b,c);
    return 0;
}
