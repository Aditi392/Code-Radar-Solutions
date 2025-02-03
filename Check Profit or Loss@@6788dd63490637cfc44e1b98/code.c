#include<stdio.h>
int main()
{
    int sp,cp,pp;
    scanf("%d%d",&sp,&cp);
    if(sp>cp)
   { pp=sp-cp;
    printf("Profit");}
    else if(cp>sp)
    {pp=cp-sp;
    printf("Loss");}
    else
    {printf("No Profit No Loss");}
}