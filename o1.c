#include<stdio.h>
int main()
{
    int a=1,b=1,c;
    c = --a && ++b;
    printf("%d\t%d\t%d",a,b,c);
    return 0;
}