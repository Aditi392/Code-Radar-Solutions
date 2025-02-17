#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    if(n<=1)
    {printf("Prime");}
    for(i=1;i*i<=n;i++){
        if(n%i==0){
            printf("Not Prime");
        }
      
    }
   printf("Prime");
}