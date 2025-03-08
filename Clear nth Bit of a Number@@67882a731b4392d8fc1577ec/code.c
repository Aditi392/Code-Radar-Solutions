#include<stdio.h>
int main()
{
    int num,n;
    scanf("%d %d",&num,&n);
    printf("%d\n",(num>>0)&1);
    return 0;
}