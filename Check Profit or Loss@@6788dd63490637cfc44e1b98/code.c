#include<stdio.h>
int main()
{
    int sp,cp,pp;
    scanf("%d%d",&sp,&cp);
    if(sp>cp)
   {
    printf("Loss");
    }
    else if(sp<cp){
        printf("Profit");
    }
    else
    {
        printf("No Profit No Loss");
        }
}