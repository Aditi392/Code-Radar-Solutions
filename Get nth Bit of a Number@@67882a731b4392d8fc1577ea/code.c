#include<stdio.h>
int main()
{
    int num,a;
    scanf("%d%d",&num,&a);
    printf("%d\n",(num>>a)&1);
}